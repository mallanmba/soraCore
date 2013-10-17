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
#include "FrameStoreConfigSvc.h"

#include "miro/Log.h"
#include "miro/Robot.h"
#include "knDds/DdsSupport.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "miro/ShutdownHandler.h" // Ctrl-C handler

#include <ace/OS_NS_unistd.h>

#include <iostream>

using namespace kn;
using namespace std;

int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  Miro::Robot::init(argc, argv);
  kn::DdsSupport::init(argc, argv);
  kn::DdsEntitiesFactorySvc ddsEntities;
  FrameStoreConfigSvc fscSvc;

  ddsEntities.init(argc, argv);
  fscSvc.init(argc, argv);
  {
    Miro::ShutdownHandler shutdownHandler;
    /* Main loop */
    std::cout << "waiting for Ctrl-C" << std::endl;
    while (!shutdownHandler.isShutdown())
      ACE_OS::sleep(ACE_Time_Value(0, 200000));
  }
  fscSvc.fini();
  ddsEntities.fini();

  return 0;
}
