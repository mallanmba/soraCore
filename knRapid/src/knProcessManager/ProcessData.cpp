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
#include "ProcessData.h"

#include "rapidExtDds/ProcessIoSample.h"
#include "rapidExtDds/ProcessIoSampleSupport.h"

#include "knDds/DdsTypedSupplier.h"

#include <ace/Process.h>

namespace kn
{
  ProcessData::ProcessData() :
    pid(0),
    process(new ACE_Process()),
    options(new ACE_Process_Options()),
    stdOut(-1),
    stdErr(-1),
    stdOutPublisher(NULL),
    stdErrPublisher(NULL),
    stdOutPipe(NULL),
    stdErrPipe(NULL),
    shutdownRequested(false),
    autoRestartCount(0)
  {}

  ProcessData::~ProcessData()
  {
    delete stdErrPipe;
    delete stdOutPipe;
    delete stdErrPublisher;
    delete stdOutPublisher;
    delete options;
    delete process;
  }
}
