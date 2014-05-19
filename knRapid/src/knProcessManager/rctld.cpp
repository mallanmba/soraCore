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
#include "ProcessManagerSvc.h"
#include "knSystemInfoSvc/SystemInfoSvc.h"

#include "knShare/Thread.h"
#include "knShare/Chrono.h"

#include "miro/Log.h"
#include "miro/Robot.h"
#include "miro/ShutdownHandler.h"

#include "knDds/DdsSupport.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/KnDdsParameters.h"

#include <ace/Service_Config.h>
#include <ace/Get_Opt.h>

#include <string>
#include <iostream>

using namespace std;
using namespace kn;

string procDirective = "ProcessManagerSvc ";
string sysInfoDirective = "SystemInfoSvc ";
string commandManagerDirective = "CommandManagerSvc -s rctld -Q -C ";
bool systemInfo = false;
bool cmdMgr = true;
int verbose = 0;

kn::ProcessManagerSvc svcDummy;
kn::SystemInfoSvc svcDummy2;

int
parseArgs(int& argc, char* argv[])
{
  int rc = 0;
  int c;

  ACE_Get_Opt get_opts(argc, argv, "C:P:I:iv?");

  while ((c = get_opts()) != -1) {
    switch (c) {
      case 'P':
        procDirective = get_opts.optarg;
        break;
      case 'I':
        sysInfoDirective = get_opts.optarg;
      case 'C':
        commandManagerDirective = get_opts.optarg;
      case 'i':
        systemInfo = true;
        break;
      case 'v':
        ++verbose = true;
        break;
     case '?':
      default:
        cerr << "usage: " << argv[0] << "[-P procCmd -i -I infoCmd] [-v?]" << endl
             << "  -P <directive> Command-line arguments passed to the ProcessManagerSvc." << endl
             << "  -I <directive> Command-line arguments passed to the SystemInfoSvc (implies -i)." << endl
             << "  -i enable system info service." << endl
             << "  -v verbose mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
    }
  }

  if (verbose) {
    procDirective += " -v";
    sysInfoDirective += " -v";
    commandManagerDirective += " -v";
    cout << "ProcessManager directive: " << procDirective << endl;
    if (systemInfo)
      cout << "SystemInfo directive: " << sysInfoDirective << endl;
    if (cmdMgr)
      cout << "CommandManager directive: " << commandManagerDirective << endl;
  }

  return rc;
}


int
main(int argc, char *argv[])
{
  try {      
    // configure log verbosity globally
    // setting global default configuration file
    // parse robot (and CORBA) command-line parameters
    Miro::Robot::init(argc, argv);
 
    // overwrite DDS global defaults
    kn::DdsEntitiesFactorySvcParameters * ddsEntitiesParams = 
      kn::DdsEntitiesFactorySvcParameters::instance();
    
    // alter default parameters
    ddsEntitiesParams->defaultLibrary = "RapidQosLibrary";

    // configure DDS global setting
    kn::DdsSupport::init(argc, argv);


    // Hardcode participant name and participant Qos Profile
    ddsEntitiesParams->participants[0].participantName = "ProcessManager";
    ddsEntitiesParams->participants[0].profile = "RapidDefaultQos";

    // configure DDS global setting
    kn::DdsEntitiesFactorySvc ddsFactory;
    if (ddsFactory.init(ddsEntitiesParams) != 0)
      return -1;
    
    if (parseArgs(argc, argv) != 0)
      return -1;

    // somehow we miss the static includes otherwise
    ACE_Service_Config::open("rctld", 0, false);
    {
      ACE_Intrusive_Auto_Ptr<ACE_Service_Gestalt> svcs = new ACE_Service_Gestalt(1024, true, false);

      string procCmd = "static ProcessManagerSvc \"" + procDirective + "\"";
      if (svcs->process_directive(procCmd.c_str()) != 0) {
        return 1;
      }

      if (systemInfo) {
        string sysInfoCmd = "static SystemInfoSvc \"" + sysInfoDirective + "\"";
        if (svcs->process_directive(sysInfoCmd.c_str()) != 0) {
          return 1;
        }
      }
    
      if (cmdMgr) {
        string cmdMgrCmd = "static CommandManagerSvc \"" + commandManagerDirective + "\"";
        if (svcs->process_directive(cmdMgrCmd.c_str()) != 0) {
          return 1;
        }
      }
    
      MIRO_LOG(LL_NOTICE, "Entering server loop.");
      Miro::ShutdownHandler shutdownHandler;
      while(!shutdownHandler.isShutdown()) {
        kn::this_thread::sleep_for(kn::microseconds(100000));
      }
      MIRO_LOG(LL_NOTICE, "End of server loop.");
    }
    ddsFactory.fini();

    MIRO_LOG(LL_NOTICE, "End of main server scope.");
  }
  catch (Miro::Exception const& e) {
    MIRO_LOG_OSTR(LL_CRITICAL, "Miro exception:\n" << e);
  }
  catch (std::exception const& e) {
    MIRO_LOG_OSTR(LL_CRITICAL, "Unexpected std-exception\n" << e.what());
  }
  catch (...) {
    MIRO_LOG_OSTR(LL_CRITICAL, "Unexpected exception\n");
  }
  
  MIRO_LOG(LL_NOTICE, "bye");
  return 0;
}
