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
#include "CommandingParameters.h"
#include "CommandManagerSvc.h"

#include "miro/Log.h"
#include "miro/ShutdownHandler.h"

#include "knDds/DdsSupport.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/KnDdsParameters.h"

#include <ace/Service_Config.h>
#include <ace/Get_Opt.h>
#include <ace/Service_Gestalt.h>
#include <ace/Service_Repository.h>

#include <string>
#include <iostream>

using namespace std;
using namespace rapid;
using namespace kn;

string sequencerDirective = "CommandManagerSvc ";
bool systemInfo = false;
int verbose = 0;

int
parseArgs(int& argc, char* argv[])
{
  int rc = 0;
  int c;

  ACE_Get_Opt get_opts(argc, argv, "S:v?");

  while ((c = get_opts()) != -1) {
    switch (c) {
      case 'S':
        sequencerDirective = get_opts.optarg;
        break;
      case 'v':
        ++verbose = true;
        break;
     case '?':
      default:
        cerr << "usage: " << argv[0] << "[-P procCmd -i -I infoCmd] [-v?]" << endl
             << "  -S <directive> Command-line arguments passed to the RapidSequencerSvc." << endl
             << "  -v verbose mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
    }
  }

  if (verbose) {
    sequencerDirective += " -v";
    cout << "sequencerDirective: " << sequencerDirective << endl;
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
    // create top-level server instance
    // configure ORB parameters globally
    Miro::Log::init(argc, argv);

    //    Miro::Server server(argc, argv);

    // overwrite DDS global defaults
    kn::DdsEntitiesFactorySvcParameters * ddsEntitiesParams = 
      kn::DdsEntitiesFactorySvcParameters::instance();
    
    // alter default parameters
    ddsEntitiesParams->defaultLibrary = "RapidQosLibrary";

    // configure DDS global setting
    kn::DdsSupport::init(argc, argv);

    // Hardcode participant name and participant Qos Profile
    ddsEntitiesParams->participants[0].participantName = "RapidExec";
    ddsEntitiesParams->participants[0].profile = "RapidDefaultQos";

    // configure DDS global setting
    kn::DdsEntitiesFactorySvc ddsFactory;
    if (ddsFactory.init(ddsEntitiesParams) != 0)
      return -1;
    
    if (parseArgs(argc, argv) != 0)
      return -1;


    ACE_Service_Config::open("CommandManagerSvc", 0, false);
    {
      ACE_Intrusive_Auto_Ptr<ACE_Service_Gestalt> svcs = new ACE_Service_Gestalt(1024, true, false);

            // sequencer
      string sequencerSvc = "static CommandManagerSvc \"" + sequencerDirective + "\"";
      // string sequencerSvc = "dynamic CommandManagerSvc Service_Object * rapidCommanding:_make_rapid_CommandManagerSvc() \"" + sequencerDirective + "\"";
      if (svcs->process_directive(sequencerSvc.c_str()) != 0) {
        return 1;
      }
      
      MIRO_LOG(LL_NOTICE, "Entering server loop.");
      Miro::ShutdownHandler shutdownHandler;
      while(!shutdownHandler.isShutdown()) {
        ACE_OS::sleep(ACE_Time_Value(0, 100000));
      }
      MIRO_LOG(LL_NOTICE, "End of server loop.");
    }
    ddsFactory.fini();

    MIRO_LOG(LL_NOTICE, "End of main server scope.");
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
