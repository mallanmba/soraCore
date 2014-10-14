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
#include "FileQueue.h"
#include "RaftSubsysImpl.h"
#include "RaftParameters.h"

#include "rapidCommanding/CommandManager.h"
#include "rapidCommanding/CommandingParameters.h"

#include "knFetchPool/FetchPoolParameters.h"

// FileAnnounce includes
#include "rapidDds/FileAnnounce.h"
#include "rapidDds/FileAnnounceSupport.h"
#include "rapidDds/RapidConstants.h"

// Robot parameters
#include "miro/Robot.h"
#include "miro/Configuration.h"

// DDS/Rapid includes
#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/DdsEntityRepositories.h"
#include "knDds/KnDdsParameters.h"

// stdlib includes
// gettimeofday, etc
#include <ace/Get_Opt.h>

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
using namespace kn;

int verbose = 0;

int parseArgs(int& argc, char* argv[])
{
  int rc = 0;
  int c;

  // initialize parameters with global instance
  FileQueueParameters * params = FileQueueParameters::instance();

  // initialize parameters from config file
  Miro::ConfigDocument * config = Miro::Configuration::document();
  config->setSection("Rapid");
  config->getParameters("kn::FileQueueParameters", *params);

  // initialize parameters from command line
  ACE_Get_Opt get_opts(argc, argv, "v?");

  while ((c = get_opts()) != -1) {
    switch (c) {
      case 'v':
        verbose = true;
        break;
      case '?':
      default:
        cerr << "usage: " << argv[0] << "[-v?]" << endl
             << "  -v verbose mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
    }
  }

  if (verbose) {
    cerr << "RAFT FileQueue parameters:" << endl;
    cerr << *params << endl;
  }
  return rc;
}

void
printOptions()
{
  cerr << "--------------------" << endl;
  cerr << "Options: " << endl
       << " 1- putFile" << endl
       << " 2- removeFile" << endl
       << " 3- pauseChannel" << endl
       << " 4- resumeChannel" << endl
       << " 5- setBandwidth" << endl
       << " 6- putMatching" << endl
       << " a- dump state" << endl
       << "q quit" << endl
       << "> " << flush;
}

int main(int argc, char * argv[])
{
  Miro::Robot::init(argc, argv);

  kn::DdsEntitiesFactorySvcParameters * params =
    kn::DdsEntitiesFactorySvcParameters::instance();

  // alter default parameters
  params->defaultLibrary = "RapidQosLibrary";
  kn::DdsSupport::init(argc, argv);

  // Hardcode participant name and participant Qos Profile
  params->participants[0].participantName = "RaftFileQueue";
  params->participants[0].profile = "RapidDefaultQos";

  if (parseArgs(argc, argv) != 0) {
    return 1;
  }

  if (verbose > 2) {
    /* Uncomment this to turn on additional logging */
    NDDSConfigLogger::get_instance()->
    set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API,
                              NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);

    // Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
    set_verbosity(NDDS_CONFIG_LOG_VERBOSITY_WARNING);
  }

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(params);

  {
    FileQueueParameters * params = FileQueueParameters::instance();
    FileQueue queue(params);

    MIRO_LOG(LL_DEBUG, "raftFileQueue: spawning file-sending thread");
    if (queue.activate() != 0) {
      MIRO_LOG(LL_ERROR, "raftFileQueue: error spawning thread");
      ddsEntities.fini();
      return 1;
    }

    rapid::CommandManager * cmdMgr = NULL;
    if (params->commandInterface) {
      rapid::CommandManagerParameters cmdMgrParams;
      cmdMgrParams.queueImpl.queuing = false;
      cmdMgrParams.accessControl = false;

      cmdMgr = new rapid::CommandManager(&cmdMgrParams, argv[0]);
      rapid::RapidSubsystemPtr raftImpl(new kn::RaftSubsysImpl(&queue));

      cmdMgr->addSubsystem(raftImpl);
      cmdMgr->activate();
    }

    string input;
    printOptions();
    while (cin >> input) {
      if (input == "q") {
        break;
      }
      else if (input == "1") { //----- putFile
        string uuid;
        short c;
        short p;
        int retval;

        cerr << "file uuid: " << flush;
        if (!(cin >> uuid))
          break;
        cerr << "channel: " << flush;
        if (!(cin >> c))
          break;
        cerr << "priority:" << flush;
        if (!(cin >> p))
          break;

        cerr << endl;
        retval = queue.putFile(uuid, c, p);

        if(retval == 1)
          cerr << "NOTE: File was NOT queued (it has already been sent)" << endl;
        else if(retval == -1)
          cerr << "ERROR: unknown channel" << endl;
        else if(retval == -2)
          cerr << "ERROR: no such file" << endl;
        else if(retval == -3)
          cerr << "ERROR: unsupported URL scheme" << endl;
        else if(retval == -4)
          cerr << "ERROR: file unreadable or missing" << endl;
        else if(retval < 0)
          cerr << "ERROR: unknown error (" << retval << ")" << endl;
      }
      else if (input == "2") { //----- removeFile
        string uuid;

        cerr << "file uuid: " << flush;
        if (!(cin >> uuid))
          break;

        queue.removeFile(uuid);
      }
      else if (input == "3") { //----- pauseChannel
        short c;

        cerr << "channel: " << flush;
        if (!(cin >> c))
          break;

        queue.pause(c);
      }
      else if (input == "4") { //-----resumeChannel
        short c;

        cerr << "channel: " << flush;
        if (!(cin >> c))
          break;

        queue.resume(c);
      }
      else if (input == "5") { //----- setBandwidth
        int t;
        int p;

        cerr << "transfer bandwidth (byte/s): " << flush;
        if (!(cin >> t))
          break;
        cerr << "prefetch bandwidth (byte/s): " << flush;
        if (!(cin >> p))
          break;

        queue.setBandwidth(t, p);
      }
      else if (input == "6") { //----- putMatching
        string key;
        string value;
        short c;
        short p;
        int retval;

        cerr << "metadata key: " << flush;
        if (!(cin >> key))
          break;
        cerr << "metadata value: " << flush;
        if (!(cin >> value))
          break;
        cerr << "channel: " << flush;
        if (!(cin >> c))
          break;
        cerr << "priority:" << flush;
        if (!(cin >> p))
          break;

        cerr << endl;
        retval = queue.putMatching(key, value, c, p);
        if(retval == 1)
          cerr << "NOTE: File was NOT queued (it has already been sent)" << endl;
        else if(retval == -1)
          cerr << "ERROR: unknown channel" << endl;
        else if(retval == -2)
          cerr << "ERROR: no such file" << endl;
        else if(retval == -3)
          cerr << "ERROR: unsupported URL scheme" << endl;
        else if(retval == -4)
          cerr << "ERROR: file unreadable or missing" << endl;
        else if(retval < 0)
          cerr << "ERROR: unknown error (" << retval << ")" << endl;
      }
      else if (input == "a") { //----- dump state
        queue.dump(cout);
      }

      printOptions();
    }

    cout << "exiting" << flush;

    if (cmdMgr != NULL) {
      cmdMgr->thr_mgr()->cancel_task(cmdMgr);
      cout << "." << flush;
    }
    queue.thr_mgr()->cancel_task(&queue);
    cout << "." << flush;

    if (cmdMgr != NULL) {
      cmdMgr->wait();
    }
    cout << "." << flush;
    queue.wait();
    cout << "." << endl;

    delete cmdMgr;
  }

  cout << "bye!" << endl;

  ddsEntities.fini();
  return 0;
}
