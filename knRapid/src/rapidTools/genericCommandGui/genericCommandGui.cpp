/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#include <QApplication>
#include <QMessageBox>
#include <QMainWindow>
#include <QMessageBox>
#include <QFileInfo>
#include <QHostInfo>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

#include <knDds/DdsSupport.h>
#include <knDds/DdsTypedConnector.h>
#include <knDds/DdsEntitiesFactorySvc.h>
#include <knDds/KnDdsParameters.h>

#include <miro/Log.h>
#include <miro/Exception.h>
#include <miro/Robot.h>
#include <miro/Configuration.h>

#include <ace/Get_Opt.h>

#include <rapidDds/RapidConstants.h>

#include <functional>
#include <iostream>
#include <cstdlib> 

#include "GenericCommandWidget.h"
#include "CommandConfigSubscriber.h"
#include "CommandGuiParameters.h"

#include "knRapidConfig.h"

using namespace std;
using namespace rapid;

int verbose = 0;
string suffix;
string commandTopic = rapid::COMMAND_TOPIC;
string configTopic  = rapid::COMMAND_CONFIG_TOPIC;

int parseArgs(int& argc, char* argv[])
{

  rapid::CommandGuiParameters * params = 
    rapid::CommandGuiParameters::instance();
  // get parameters from config file
  Miro::ConfigDocument * config = Miro::Configuration::document();
  config->setSection("Rapid");
  config->getParameters("rapid::CommandGuiParameters", *params);

  // parse remaining arguments
  ACE_Get_Opt get_opts (argc, argv, "Rs:v?");
  int c, rc = 0;
  while ((c = get_opts()) != -1) {
    switch (c) {
    case 'R':
      params->srcName = Miro::RobotParameters::instance()->name;
      break;
    case 's':
      suffix = get_opts.optarg;
      commandTopic += "-" + suffix;
      configTopic += "-" + suffix;
      break;
    case 'v':
      ++verbose;
      break;
    case '?':
    default:
      cerr << "usage: " << argv[0] << "[-s:v?]" << endl
           << "  -R use robot name as srcName, overwriting access-control" << endl
           << "  -s <suffix> command manager suffix" << endl
           << "  -v verbose mode" << endl
           << "  -? help: emit this text and stop" << endl;
      rc = 1;
    }
  }
  
  if (verbose) {
    cout << "topic suffix: " << suffix << endl
         << "CommandGuiParameters: " << endl 
         << *params << endl;
  } // if verbose
  
  return rc;
}


struct DataTypePair 
{
  char const * name;
  rapid::DataType type;
};

DataTypePair dt[] = {
  {"RAPID_BOOL", rapid::RAPID_BOOL},
  {"RAPID_DOUBLE", rapid::RAPID_DOUBLE},
  {"RAPID__FLOAT", rapid::RAPID_FLOAT},
  {"RAPID_INT", rapid::RAPID_INT},
  {"RAPID_STRING", rapid::RAPID_STRING},
  {"RAPID_VEC3d", rapid::RAPID_VEC3d},
  {"RAPID_MAT33f", rapid::RAPID_MAT33f}
};
int const numDataTypes = sizeof(dt) / sizeof(DataTypePair);

void paramsToConfig(rapid::CommandConfigParameters const& params, rapid::CommandConfig& config)
{
  config.availableSubsystemTypes.length(params.availableSubsystemTypes.size());
  for (int i = 0; i < config.availableSubsystemTypes.length(); ++i) {
    rapid::SubsystemTypeParameters const& subsysP = params.availableSubsystemTypes[i];
    rapid::SubsystemType& subsys = config.availableSubsystemTypes[i];
    strncpy(subsys.name, subsysP.name.c_str(), 32);
    subsys.name[31] = 0;

    subsys.commands.length(subsysP.commands.size());
    for (int j = 0; j < subsys.commands.length(); ++j) {
      rapid::CommandDefParameters const& defP = subsysP.commands[j];
      rapid::CommandDef& defC = subsys.commands[j];

      strncpy(defC.name, defP.name.c_str(), 64);
      defC.name[63] = 0;
      defC.abortable = defP.abortable;
      defC.suspendable = defP.suspendable;

      defC.parameters.length(defP.parameters.size());
      for (int k = 0; k < defC.parameters.length(); ++k) {
        strncpy(defC.parameters[k].key, defP.parameters[k].key.c_str(), 32);
        for (int l = 0; l < numDataTypes; ++l) {
          if (defP.parameters[k].type == dt[l].name) {
            defC.parameters[k].type = dt[l].type;
            break;
          }
        }
      }
    }
  }
  config.availableSubsystems.length(params.availableSubsystems.size());
  for (int i = 0; i < config.availableSubsystems.length(); ++i) {
    strncpy(config.availableSubsystems[i].name,
            params.availableSubsystems[i].name.c_str(), 32);
    config.availableSubsystems[i].name[31] = 0;
    strncpy(config.availableSubsystems[i].subsystemTypeName,
            params.availableSubsystems[i].subsystemTypeName.c_str(), 32);
    config.availableSubsystems[i].subsystemTypeName[31] = 0;
  }
}

/**
 *
 */
QString username() {
  char* username = getenv("USERNAME");
  if(!username) {
    username = getenv("USER");
    if(!username) {
      username = "user";
    }
  }
  return QString(username);
}

QString hostname() {
  QString host = QHostInfo::localHostName(); 
  int dot = host.indexOf('.');
  if(dot > 0) {
    host.truncate(dot);
  }
  return host;
}

/**
 *
 */
int main(int argc, char *argv[])
{
  int retVal = -1;

  stringstream strStream;
  try {
    Miro::Log::init(argc, argv);
    Miro::Robot::init(argc, argv);
    Miro::Configuration::init(argc, argv);
    
    kn::DdsEntitiesFactorySvcParameters * ddsParams =
            kn::DdsEntitiesFactorySvcParameters::instance();
    ddsParams->defaultLibrary = "RapidQosLibrary";
    ddsParams->defaultProfile = "RapidDefaultQos";
    kn::DdsSupport::init(argc, argv);


    rapid::CommandGuiParameters * params =
            rapid::CommandGuiParameters::instance();
    QString userString = params->srcName.c_str();
    if(userString == "DEFAULT") {
      userString = username()+"@"+hostname();
      userString.truncate(31); // cmdSource is String32
      params->srcName = qPrintable(userString);
    }
    fprintf(stdout, "%s\n", qPrintable(userString));

    QString participantName = userString+":CmdGui";
    participantName.truncate(31); // what is max allowed length for domain participants?
    ddsParams->participants[0].participantName = qPrintable(participantName);
  
    if (parseArgs(argc, argv) != 0) {
      return 1;
    }

    kn::DdsEntitiesFactorySvc ddsEntities;
    ddsEntities.init(ddsParams);

    {
      QApplication app(argc, argv);
      QMainWindow mainWindow;
      
      GenericCommandWidget* cmdWidget = new GenericCommandWidget(&mainWindow,
                                                                 Miro::RobotParameters::instance()->name.c_str(),
                                                                 commandTopic.c_str(),
                                                                 "RapidCommandProfile",
                                                                 "" // Default library
                                                                 );
      
      CommandConfigSubscriber* ccReader = NULL;
      if (params->initByConfig) {

        ccReader = new CommandConfigSubscriber(Miro::RobotParameters::instance()->name.c_str(),       
                                               configTopic.c_str(),
                                               "RapidCommandConfigProfile",
                                               "" // Default library
                                               );
      
        QObject::connect( ccReader, SIGNAL(commandConfigUpdated(const rapid::CommandConfig*)),
                          cmdWidget, SLOT(newCommandConfig(const rapid::CommandConfig*)) );
      }
      else {
        rapid::CommandConfig config;
        rapid::CommandConfig::TypeSupport::initialize_data(&config);
        paramsToConfig(params->config, config);
        cmdWidget->newCommandConfig(&config);
      }

      QMenu* fileMenu = mainWindow.menuBar()->addMenu("&File");
      fileMenu->addAction( "E&xit", qApp, SLOT(quit()) );

      mainWindow.setCentralWidget(cmdWidget);
      mainWindow.show();
      mainWindow.resize(600, 600);
      
      QString appName = QFileInfo( QCoreApplication::applicationFilePath() ).baseName();
      mainWindow.setWindowTitle(appName+" : "+userString);

      retVal = app.exec();
      
      delete ccReader;
    }
    ddsEntities.fini();
  }
  catch ( const Miro::Exception& me ) {
    strStream << "Miro::Exception: " << me << endl;
  }
  catch ( ... ) {
    strStream << "Unknown exception in main" << endl;
  }

  QString str(strStream.str().c_str());
  if (!str.isEmpty()) {
    qWarning("****************************************");
    qWarning("** Exception caught: %s", qPrintable(str) );
    qWarning("****************************************");
  }

  return retVal;
}
