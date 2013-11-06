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
#include <QMenuBar>
#include <QMenu>
#include <QAction>

#include <iostream>

#include <miro/Log.h>
#include <miro/Exception.h>
#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedConnector.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "miro/Robot.h"
#include "miro/Configuration.h"
#include "knDds/KnDdsParameters.h"

#include "RapidImageWidget.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/ImageSensorSample.h"
#include "rapidDds/ImageSensorSampleSupport.h"

#include <functional>
#include <iostream>

#include "knRapidConfig.h"

using namespace std;
using namespace rapid;

string topic = rapid::IMAGESENSOR_SAMPLE_TOPIC;

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
    Miro::Configuration::init(argc, argv, KNRAPID_INSTALL_PREFIX "/etc");

    kn::DdsEntitiesFactorySvcParameters * params =
      kn::DdsEntitiesFactorySvcParameters::instance();
    if (params->defaultLibrary.empty()) {
      params->defaultLibrary = "RapidQosLibrary";
      //params->defaultLibrary = "RapidQosLibrary";
    }

    kn::DdsSupport::init(argc, argv);


    // Hardcode participant name and participant Qos Profile
    params->participants[0].participantName = "ImageReader";
  
    kn::DdsEntitiesFactorySvc ddsEntities;
    ddsEntities.init(params);
    {
      QApplication app(argc, argv);

      if (argc > 1) {
        topic += string(argv[1]);
      }
      QMainWindow mainWindow;
      RapidImageWidget* imageWidget = new RapidImageWidget(Miro::RobotParameters::instance()->name.c_str(),
                                                           topic.c_str(),
                                                           "RapidImageSensorSampleProfile",
                                                           "", // Default library
                                                           &mainWindow);
      mainWindow.setCentralWidget(imageWidget);

      QMenu* fileMenu = mainWindow.menuBar()->addMenu("&File");
      fileMenu->addAction( "E&xit", qApp, SLOT(quit()) );

      mainWindow.show();
      mainWindow.resize(440, 440);

      retVal = app.exec();
    }
    ddsEntities.fini();
  }
  catch ( const Miro::Exception& me ) {
    strStream << "Miro::Exception: " << me << endl;
  }
  catch ( ... ) {
    strStream << "Unknown exception in main\n";
  }

  QString str(strStream.str().c_str());
  if (!str.isEmpty()) {
    qWarning("Exception caught: %s", qPrintable(str) );
    QMessageBox::critical( NULL, "Exception Caught", str );
  }

  return retVal;
}
