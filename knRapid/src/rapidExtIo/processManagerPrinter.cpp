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
#include "ProcessManagerIo.h"
#include "RapidExtIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtDds/ExtConstants.h"
#include "rapidExtDds/ProcessManagerConfig.h"
#include "rapidExtDds/ProcessManagerConfigSupport.h"
#include "rapidExtDds/ProcessManagerState.h"
#include "rapidExtDds/ProcessManagerStateSupport.h"

#include "miro/TimeHelper.h"
#include "miro/Log.h"

#include <ace/OS_NS_sys_time.h>

#include <string>
#include <iostream>

using namespace std;

namespace
{
  char const * processStatus[] = {
    "PROCESS_STATE_UNAVAIL",
    "PROCESS_STATE_STARTING",
    "PROCESS_STATE_RESTARTING",
    "PROCESS_STATE_RUNNING",
    "PROCESS_STATE_STOPPING",
    "PROCESS_STATE_STOPPED",
    "PROCESS_STATE_STOPPED_UNEXPECTEDLY",
    "PROCESS_STATE_COMPLETED",
    "PROCESS_STATE_KILLED"
  };
}

namespace rapid
{
  typedef TopicPairApp_T<ext::ProcessManagerConfig, ext::ProcessManagerState, ext::ProcessManagerTopicPairParameters> TopicPairApp;
  
  template<>
  void TopicPairApp::Printer::printData(ext::ProcessManagerState const& event)
  {
    if (s_verbose <= 2) {
      cout << ACE_OS::gettimeofday() << endl;
      for (DDS::Long i = 0; i < event.processStatus.length(); ++i) {
        cout << "  " << i << ": " << processStatus[event.processStatus[i]] << endl;
      }
    }
    else {
      Data::TypeSupport::print_data(&event);
    }
  }
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::ProcessManagerTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::PROCESSMANAGER_CONFIG_TOPIC, ext::PROCESSMANAGER_STATE_TOPIC);

  return 0;
}
