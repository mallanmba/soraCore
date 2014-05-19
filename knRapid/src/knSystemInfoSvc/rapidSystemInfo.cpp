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
#include "SystemInfoSvc.h"
#include "SystemInfoSvcParameters.h"

// Robot parameters
#include "miro/Robot.h"

// DDS/Rapid includes
#include "knDds/DdsSupport.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/KnDdsParameters.h"

#include "knShare/Thread.h"
#include "knShare/Chrono.h"

#include "miro/ShutdownHandler.h" // Ctrl-C handler

// stdlib includes
// gettimeofday, etc
#include <ace/Time_Value.h>

using namespace std;
using namespace kn;

int main(int argc, char * argv[])
{
  Miro::Robot::init(argc, argv);

  kn::DdsEntitiesFactorySvcParameters * params =
    kn::DdsEntitiesFactorySvcParameters::instance();

  // alter default parameters
  params->defaultLibrary = "RapidQosLibrary";
  kn::DdsSupport::init(argc, argv);

  // Hardcode participant name and participant Qos Profile
  params->participants[0].participantName = "RapidSystemInfo";
  params->participants[0].profile = "RapidDefaultQos";

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(params);

  // start hw reactor
  {
    Miro::ShutdownHandler ctrlCHandler;
    SystemInfoSvc sysInfo;
    sysInfo.init(argc, argv);
    
    while(!ctrlCHandler.isShutdown()) {
      kn::this_thread::sleep_for(kn::microseconds(100000));
    }
    sysInfo.fini();
  }
  
  cout << "bye!" << endl;

  ddsEntities.fini();
  return 0;
}
