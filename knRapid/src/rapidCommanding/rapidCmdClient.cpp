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
#include "rapidDds/CommandConstants.h"
#include "rapidDds/Command.h"
#include "rapidDds/CommandSupport.h"
#include "rapidDds/Ack.h"
#include "rapidDds/AckSupport.h"
#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"
#include "rapidDds/RapidConstants.h"

#include "miro/Robot.h"
#include "miro/RobotParameters.h"
#include "miro/Configuration.h"
#include "miro/ShutdownHandler.h"
#include "miro/Log.h"
#include "miro/TimeHelper.h"
#include "knDds/DdsSupport.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsTypedConsumer.h"
#include "knDds/KnDdsParameters.h"

#include <ace/Time_Value.h>

#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

ACE_INT64 setTime(ACE_Time_Value const& timeStamp)
{
  ACE_UINT64 uSec;
  timeStamp.to_usec(uSec);
  return ACE_INT64(uSec);
}


void accessControlCmd(rapid::Command& cmd)
{
  strncpy(cmd.subsysName, "AccessControl", 32);
  cmd.subsysName[31] = '\0';

  cerr << "access control commands: " << endl
       << " 1 - request control" << endl
       << " 2 - release control" << endl
       << " 3 - transfer control" << endl
       << " 0 - grab control" << endl;
  cerr << "selection: " << flush;
  int id;
  cin >> id;

  switch(id) {
  case 0:
    strncpy(cmd.cmdName, rapid::ACCESSCONTROL_METHOD_GRABCONTROL, 64);
    break;
  case 1:
    strncpy(cmd.cmdName, rapid::ACCESSCONTROL_METHOD_REQUESTCONTROL, 64);
    break;
  case 2:
    strncpy(cmd.cmdName, rapid::ACCESSCONTROL_METHOD_RELEASECONTROL, 64);
    break;
  case 3:
    {
      strncpy(cmd.cmdName, rapid::ACCESSCONTROL_METHOD_TRANSFERCONTROL, 64);

      cerr << "control recipient: " << flush;
      string recipient;
      cin >> recipient;
      
      cmd.arguments.length(1);
      cmd.arguments[0]._d = rapid::RAPID_STRING;
      strncpy(cmd.arguments[0]._u.s, recipient.c_str(), 128);
      cmd.arguments[0]._u.s[127] = '\0';;
    }
    break;
  default: 
    cerr << "unknown cmd id: " << id;
    throw string("wrong access control command");
  }
}

void adminCmd(rapid::Command& cmd)
{
  strncpy(cmd.subsysName, "Admin", 32);
  cmd.subsysName[31] = '\0';

  cerr << "admin commands: " << endl
       << " 0 - echo" << endl
       << " 1 - shutdown" << endl
       << " 2 - noop" << endl;
  cerr << "selection: " << flush;
  int id;
  cin >> id;

  switch(id) {
  case 0:
    {
      strncpy(cmd.cmdName, rapid::ADMIN_METHOD_ECHO, 64);
      cerr << "echo text: " << flush;
      string echoText;
      cin >> echoText;
      
      cmd.arguments.length(1);
      cmd.arguments[0]._d = rapid::RAPID_STRING;
      strncpy(cmd.arguments[0]._u.s, echoText.c_str(), 128);
      cmd.arguments[0]._u.s[127] = '\0';;
    }
    break;
  case 1:
    strncpy(cmd.cmdName, rapid::ADMIN_METHOD_SHUTDOWN, 64);
    break;
  case 2:
    strncpy(cmd.cmdName, rapid::ADMIN_METHOD_NOOP, 64);
    break;
  default: 
    cerr << "unknown cmd id: " << id;
    throw string("wrong admin command");
  }
}

bool
readArgument(rapid::ParameterUnion& argument, rapid::KeyTypePair const& def)
{
  bool rc = true;

  cerr << def.key << ": " << flush;
  argument._d = def.type;
  switch(def.type) {
  case rapid::RAPID_BOOL:
    if (!(cin >> argument._u.b))
      rc = false;
    break;
  case rapid::RAPID_DOUBLE:
    if (!(cin >> argument._u.d))
      rc = false;
    break;
  case rapid::RAPID_FLOAT:
    if (!(cin >> argument._u.f))
      rc = false;
    break;
  case rapid::RAPID_INT:
    if (!(cin >> argument._u.i))
      rc = false;
    break;
  case rapid::RAPID_STRING:
    if (!(cin >> argument._u.s))
      rc = false;
    break;
  case rapid::RAPID_VEC3d:
  case rapid::RAPID_MAT33f:
  default:
    rc = false;
  }

  return rc;
}


bool
genericCmd(rapid::Command& cmd, rapid::CommandConfig const& config)
{
  cerr << "select subsystem: " << endl;
  for (int i = 0; i < config.availableSubsystems.length(); ++i) {
    cerr << " " << i 
         << " - " << config.availableSubsystems[i].name
         << " (" << config.availableSubsystems[i].subsystemTypeName << ")" << endl;
  }
  cerr << "> " << flush;

  int subsysId;
  if (!(cin >> subsysId))
    return false;

  if (subsysId < 0 ||
      config.availableSubsystems.length() <= subsysId)
    return false;

  strcpy(cmd.subsysName, config.availableSubsystems[subsysId].name);

  // find type
  int typeId;
  for (typeId = 0; typeId < config.availableSubsystemTypes.length(); ++typeId) {
    if (strcmp(config.availableSubsystems[subsysId].subsystemTypeName,
               config.availableSubsystemTypes[typeId].name) == 0) {
      break;
    }
  }

  assert(typeId < config.availableSubsystemTypes.length());

  cerr << "select method: " << endl;
  rapid::SubsystemType const& type = config.availableSubsystemTypes[typeId];

  for (int i = 0; i < type.commands.length(); ++i) {
    cerr << " " << i 
         << " - " << type.commands[i].name
         << " (" << type.commands[i].parameters.length() << ")" << endl;
  }
  cerr << "> " << flush;

  int cmdId;
  if (!(cin >> cmdId))
    return false;

  if (cmdId < 0 ||
      type.commands.length() <= cmdId)
    return false;

  strcpy(cmd.cmdName, type.commands[cmdId].name);
  rapid::KeyTypeSequence16 const& paramDefs = type.commands[cmdId].parameters;
  cmd.arguments.length(paramDefs.length());
  for (int i = 0; i < paramDefs.length(); ++i) {
    if (readArgument(cmd.arguments[i], paramDefs[i]) == false)
      return false;
  }
  
  return true;
}

void mobilityCmd(rapid::Command& cmd)
{
  strncpy(cmd.subsysName, "Mobility", 32);
  cmd.subsysName[31] = '\0';

  cerr << "mobility commands: " << endl
       << " 0 - stop" << endl
       << " 1 - move to" << endl;
  cerr << "selection: " << flush;
  int id;
  cin >> id;

  switch(id) {
  case 0:
    strncpy(cmd.cmdName, rapid::MOBILITY_METHOD_STOPALLMOTION, 64);
    cmd.cmdName[63]='\0';
    break;
  case 1:
#ifdef ASDF
    {
      strncpy(cmd.cmdName, rapid::MOBILITY_METHOD_MOVE, 64);
      cmd.cmdName[63]='\0';
    
      rapid::MobilityCommand& wp = cmd.mobCmd;
      string name;
      string frame;
      bool saveDrive;
      cerr << "waypoint name: " << flush;
      cin >> name;
      strncpy(wp.name, name.c_str(), 32);

      cerr << "with respect to frame: " << flush;
      cin >> frame;
      strncpy(wp.frameName, frame.c_str(), 32);
      cerr << "x: " << flush;
      cin >> wp.xyz[0]; 
      cerr << "y: " << flush;
      cin >> wp.xyz[1]; 
      cerr << "z: " << flush;
      cin >> wp.xyz[2]; 
      cerr << "is directional (1/0): " << flush;

      bool isDirectional;
      cin >> isDirectional;
      if (isDirectional) {
        wp.isDirectional = true;
	cerr << "heading (deg): " << flush;
	cin >> wp.heading;
	wp.heading *= M_PI/180.;
      }
      else {
        wp.isDirectional = false;
      }
      cerr << "tolerance: " << flush;
      cin >> wp.tolerance;
      if (isDirectional) {
	cerr << "heading tolerance (deg): " << flush;
        cin >> wp.headingTolerance;
        wp.headingTolerance *= M_PI/180.;
      }
      else {
        wp.headingTolerance = 0;
      }

      cerr << "speed hint (0...1)" << flush;
      cin >> wp.hintedSpeed;

      cerr << "save or blind drive: (1/0)" << flush;
      cin >> saveDrive;
      char const * algorithm = saveDrive? rapid::NAV_ALGO_SAFE : rapid::NAV_ALGO_BLIND;
      strncpy(wp.navigationAlgorithm, algorithm, 32);
    }
#endif
    break;
  default: 
    cerr << "unknown cmd id: " << id;
    throw string("wrong mobility command");
  }
}
   
void queueCmd(rapid::Command& cmd)
{
  strncpy(cmd.subsysName, "QueueManagement", 32);
  cmd.subsysName[31] = '\0';

  cerr << "queue commands: " << endl
       << " 1 - suspend on completion" << endl
       << " 2 - resume" << endl
       << " 3 - cancel current cmd (unsupported)" << endl
       << " 4 - cancel all (unsupported)" << endl
       << " 0 - delete all" << endl;
  cerr << "selection: " << flush;
  int id;
  cin >> id;

  switch(id) {
  case 0:
    strncpy(cmd.cmdName, rapid::QUEUE_METHOD_DELETEALL, 64);
    break;
  case 1:
    strncpy(cmd.cmdName, rapid::QUEUE_METHOD_SUSPENDONCOMPLETE, 64);
    break;
  case 2:
    strncpy(cmd.cmdName, rapid::QUEUE_METHOD_RESUME, 64);
    break;
  case 3:
    strncpy(cmd.cmdName, rapid::QUEUE_METHOD_CANCELCURRENTTASK, 64);
    break;
  case 4:
    strncpy(cmd.cmdName, rapid::QUEUE_METHOD_CANCELALL, 64);
    break;
  default: 
    cerr << "unknown cmd id: " << id;
    throw string("wrong queue management command");
  }
}

char * cmdSrc = "rapidCmdClient";
bool queuing = false;
ACE_Time_Value configTimeout(350);

int main(int argc, char * argv[])
{
  Miro::ShutdownHandler shutdownHandler; // Ctrl-C

  Miro::Robot::init(argc, argv); // -MRN

  kn::DdsEntitiesFactorySvcParameters * params =
    kn::DdsEntitiesFactorySvcParameters::instance();
  params->defaultLibrary = "RapidQosLibrary";

  kn::DdsSupport::init(argc, argv);

  params->participants[0].participantName = "RapidCommandClient";
  params->participants[0].profile = "RapidDefaultQos";

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(params);

  if (argc > 1)
    cmdSrc = argv[1];
  

  cout << "retrieving command config.." << flush;
  ACE_Time_Value start = ACE_OS::gettimeofday();

  rapid::CommandConfig config;
  rapid::CommandConfig::TypeSupport::initialize_data(&config);
  bool genericCommands = true;

  {
    kn::DdsTypedConsumer<rapid::CommandConfig> 
      cmdConfigSubsriber(rapid::COMMAND_CONFIG_TOPIC,
                         Miro::RobotParameters::instance()->name,
                         "RapidCommandConfigProfile");

    rapid::CommandConfig::DataReader& configReader = cmdConfigSubsriber.dataReader();
    DDS::ReadCondition * readCondition = 
      configReader.create_readcondition(DDS_NOT_READ_SAMPLE_STATE, // new data
                                        DDS_ANY_VIEW_STATE,        // instance state does not count
                                        DDS_ANY_INSTANCE_STATE);   // wrtier state does not count
    
    // Create WaitSet, and attach conditions
    DDS::WaitSet waitset;
    
    DDS::ReturnCode_t retcode;
    retcode = waitset.attach_condition(readCondition);
    if (retcode != DDS_RETCODE_OK) {
      cerr << "attach_condition error\n";
      return -1;
    }    



    DDS::ConditionSeq activeConditions; 
    DDS::Duration_t const timeout = {1, 0}; // wait for 10 sec max

    while (start + configTimeout > ACE_OS::gettimeofday()) {
      if (shutdownHandler.isShutdown())
        break;

      cout << "." << flush;
    
      // The triggered condition(s) will be placed in activeConditions
      retcode = waitset.wait(activeConditions, timeout);
        
      if (retcode != DDS_RETCODE_TIMEOUT) {
        DDS::SampleInfo info;
        configReader.take_next_sample(config, info);
        if (info.valid_data)
          break;

      }
    }
    cout << endl;

    /* Delete all entities */
    configReader.delete_readcondition(readCondition);    
  }

  if (start + configTimeout <= ACE_OS::gettimeofday()) {
      cerr << "no command configuration!" << endl;
      genericCommands = false;
    }
    

  {
    // send command
    kn::DdsTypedSupplier<rapid::Command> cmdPublisher(rapid::COMMAND_TOPIC,
                                                         Miro::RobotParameters::instance()->name,
                                                         "RapidCommandProfile");
    
    kn::DdsTypedConsumer<rapid::Ack> ackSubscriber(rapid::ACK_TOPIC,
                                                       Miro::RobotParameters::instance()->name,
                                                       "RapidAckProfile");
    
    int cmdId = 0;
    while (!shutdownHandler.isShutdown()) {
      ++cmdId;
      
      try {
        ACE_OS::sleep(ACE_Time_Value(1));
        
        
        cerr << "cmd mode: " << (queuing? "QUEUEING" : "ASYNC") << endl
             << "cmd categories: " << endl;
        if (!genericCommands) {
          cerr << " 0 - access control" << endl
               << " 1 - admin" << endl
               << " 2 - queue management" << endl
               << " 3 - mobility" << endl;
        }
        else {
          cerr << " 4 - generic command" << endl;
        }
        cerr << " Q - toggle cmd-mode (queuing)" << endl
             << "q to quit" << endl
             << endl
             << "selection: " << flush;
        
        string category;
        if (!(cin >> category)) {
          cerr << "failed to obtain category" << endl;
          return 1;
        }
        
        if (category == "Q") {
          queuing = !queuing;
          continue;
        }
        
        if (category == "q") {
          return 0;
        }
        
        rapid::Command& cmd = cmdPublisher.event();
        char const * type = NULL;
        cmd.arguments.length(0);
        
        switch (atoi(category.c_str())) {
        case 0:
          type = rapid::ACCESSCONTROL;
          accessControlCmd(cmd);
          break;
        case 1:
          type = rapid::ADMIN;
          adminCmd(cmd);
          break;
        case 2:
          type = rapid::QUEUE;
          queueCmd(cmd);
          break;
        case 3:
          type = rapid::MOBILITY;
          mobilityCmd(cmd);
          break;
        case -1:
          cerr << "bye" << endl;
          return 0;
        case 4:
          if (!genericCmd(cmd, config)) {
            cerr << "failed to assemble generic command" << endl;
            continue;
          }
          break;
        default:
          cerr << "unsupported category: " << category << endl;
          continue;
        }
        
        Miro::RobotParameters * params = Miro::RobotParameters::instance();
        
        // populate header
        strncpy(cmd.hdr.srcName, cmdSrc, 32);
        cmd.hdr.srcName[31] = '\0';
        strncpy(cmd.hdr.assetName, params->name.c_str(), 32);
        cmd.hdr.assetName[31] = '\0';
        cmd.hdr.statusCode = 0;
        cmd.hdr.serial = 0;
        cmd.hdr.timeStamp = setTime(ACE_OS::gettimeofday());
        
        cmd.cmdAction = (queuing)? rapid::QUEUE_APPEND : rapid::QUEUE_BYPASS;
        strncpy(cmd.cmdSrc, cmdSrc, 32);
        cmd.cmdSrc[31] = '\0';
        if (type != NULL)
          strncpy(cmd.subsysName, type, 32);
        cmd.subsysName[31] = '\0';
        
        stringstream s;
        s << cmdId << cmdSrc << ACE_OS::gettimeofday();
        strncpy(cmd.cmdId, s.str().c_str(), 64);
        cmd.cmdId[63] = '\0';
        
        cmdPublisher.sendEvent();
      }
      catch(string const& s) {
        cerr << "exception: " << s << endl;
      }
    }
    
    rapid::Ack::DataReader& reader = ackSubscriber.dataReader();
    
    // Create readcondition
    // Note that the readconditions are dependent on both incoming
    // data as well as sample state.  Thus, this method has more
    // overhead than adding a DDS_DATA_AVAILABLE_STATUS statuscondition.
    // We show it here purely for reference
    DDS::ReadCondition* readCondition =
      reader.create_readcondition(DDS_NOT_READ_SAMPLE_STATE, 
                                  DDS_ANY_VIEW_STATE,
                                  DDS_ANY_INSTANCE_STATE);
    if (readCondition == NULL) {
      printf("create_readcondition error\n");
      return -1;
    }
    
    // Create WaitSet, and attach conditions
    DDS::WaitSet* waitset = new DDS::WaitSet();
  
    DDS::ReturnCode_t retcode;
    retcode = waitset->attach_condition(readCondition);
    if (retcode != DDS_RETCODE_OK) {
      cerr << "attach_condition error\n";
      return -1;
    }    

    rapid::AckSeq sampleSeq;
    DDS::SampleInfoSeq infoSeq;
    DDS::ConditionSeq activeConditions; 
    DDS::Duration_t const timeout = {1,500000000};
 
    while (!shutdownHandler.isShutdown()) {
    
      // The triggered condition(s) will be placed in activeConditions
      retcode = waitset->wait(activeConditions, timeout);
        
      if (retcode == DDS_RETCODE_TIMEOUT) {
	cout << "wait timed out" << endl;
	continue;
      }
      else if (retcode != DDS_RETCODE_OK) {
	cerr << "wait returned error: " << retcode << endl;
	break;
      }
       
      for (int i = 0; i < activeConditions.length(); ++i) {
	if (activeConditions[i] == readCondition) {
	  // OK -- Got data, let's look at it.  At this point it's the
	  // same as reading data any other way.
	  retcode = reader.take_w_condition(sampleSeq, 
					    infoSeq, 
					    DDS_LENGTH_UNLIMITED,
					    readCondition);
	  if (retcode != DDS_RETCODE_OK) {
	    cerr << "take error " << retcode << endl;
	    break;
	  }
	  
	  for (int j = 0; j < sampleSeq.length(); ++j) {
	    if (!infoSeq[j].valid_data) {
	      cout << "   Got metadata\n";
	      continue;
	    }
	    
	    rapid::Ack::TypeSupport::print_data(&sampleSeq[j]);
	  }
	  reader.return_loan(sampleSeq, infoSeq);
        }
      }
    }
  
    /* Delete all entities */
    delete waitset;
    reader.delete_readcondition(readCondition);
  }

  ddsEntities.fini();


  return 0;
}
