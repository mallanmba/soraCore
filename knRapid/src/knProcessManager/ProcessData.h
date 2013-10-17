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
#ifndef kn_ProcessData_h
#define kn_ProcessData_h

#include "PipeHandler.h"

class ACE_Process;
class ACE_Process_Options;

namespace rapid
{
  namespace ext
  {
    class ProcessIoSample;
  }
}

namespace kn
{
  template<typename T>
  class DdsTypedSupplier;

  class ProcessData 
  {
  public:
    typedef kn::DdsTypedSupplier<rapid::ext::ProcessIoSample> IOPublisher;

    pid_t                pid;               /* process pid (process->get_pid()) */
    ACE_Process         *process;           /* the ACE process structure */
    ACE_Process_Options *options;           /* the ACE process options */
    
    int                  stdOut;            /* file descriptor to stdout */
    int                  stdErr;            /* file descriptor to stderr */
    IOPublisher *        stdOutPublisher;
    IOPublisher *        stdErrPublisher;
    PipeHandler         *stdOutPipe;        /* pipe object for cout */
    PipeHandler         *stdErrPipe;        /* pipe object for cerr */
    bool                 shutdownRequested;
    short                autoRestartCount;      /* number of auto-restarts performed */
    
    ProcessData();
    ~ProcessData();

  private:
    ProcessData(ProcessData const&);
    ProcessData& operator = (ProcessData const&) { return *this; }
  };
}
#endif // kn_ProcessData_h
