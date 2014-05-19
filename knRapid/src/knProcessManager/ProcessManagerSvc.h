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
#ifndef kn_ProcessManagerSvc_h
#define kn_ProcessManagerSvc_h

#include "knProcessManager_Export.h"
#include "PipeHandler.h"
#include "ProcessData.h"

#include "rapidExtDds/ProcessManagerState.h"

#include "miro/ReactorTask.h"

#include <ace/Service_Object.h>
#include <ace/Recursive_Thread_Mutex.h>
#include <ace/Condition_Recursive_Thread_Mutex.h>

#include <string>
#include <vector>

class ACE_Process;
class ACE_Process_Options;
class ACE_Process_Manager;

namespace rapid
{
  namespace ext
  {
    class ProcessManagerConfig;
    class ProcessIoSample;
    class ProcessManagerConfigParameters;
  }
}

namespace kn
{
  template<class T, class S>
  class DdsTypedConnector;
  template<typename T>
  class DdsTypedSupplier;
  class ProcessManagerSvcParameters;
  class ProcMgrImpl;

  class knProcessManager_Export ProcessManagerSvc : public Miro::ReactorTask
  {
  public:
    ProcessManagerSvc();
    virtual ~ProcessManagerSvc();

    // DDS callbacks
    void operator() (rapid::ext::ProcessManagerConfig const * req);
        
    // ACE_Service interface
    virtual int init(int argc, ACE_TCHAR* argv[]);
    virtual int fini();
    
    // ACE_Event_Handler interface

    //! Handler for periodically checking service state
    virtual int handle_timeout(const ACE_Time_Value &current_time, const void *act = 0);

    //! Handler for process exit processing
    virtual int handle_exit(ACE_Process *);

    // 0 OK, -1 C error, -2 wrong state, -3 wrong idx
    int startProcess(int idx, bool leaveRestartCounter = false);
    int stopProcess(int idx);
    int killProcess(int idx);
    int setCommandLine(int idx, char const * cmdLine);

  private:
    typedef std::vector<ProcessData *> ProcessVector;

    typedef kn::DdsTypedSupplier<rapid::ext::ProcessIoSample> IOPublisher;
    typedef kn::DdsTypedSupplier<rapid::ext::ProcessManagerConfig> ConfigPublisher;
    typedef kn::DdsTypedSupplier<rapid::ext::ProcessManagerState> StatePublisher;
    typedef kn::DdsTypedConnector<rapid::ext::ProcessManagerConfig, ProcessManagerSvc> ConfigConnector;

    int init(rapid::ext::ProcessManagerConfig const * config);
    int parseArgs(int argc, ACE_TCHAR * argv[]);
    void shutdown();
    void updateStatus(rapid::ext::ProcessStatus& status, rapid::ext::ProcessStatus newStatus);

    void expand(std::string& str);

    ACE_Recursive_Thread_Mutex m_mutex;
    ACE_Condition_Recursive_Thread_Mutex m_condition;

    ProcessManagerSvcParameters * m_params;
    rapid::ext::ProcessManagerConfigParameters * m_configParams;

    long m_timerId;
    ACE_Process_Manager * m_processManager;
    int m_processId;

    rapid::ext::ProcessManagerConfig * m_config;
    rapid::ext::ProcessManagerState * m_state;
    ProcessVector m_processes;

    bool m_commandInterface;
    bool m_listenToConfigMessages;
    bool m_verbose;

    ConfigPublisher * m_configPublisher;
    StatePublisher * m_statePublisher;
    ConfigConnector * m_configConnector;
  };
}

// Declare both static and dynamic services.
ACE_STATIC_SVC_DECLARE_EXPORT(knProcessManager, kn_ProcessManagerSvc)
ACE_FACTORY_DECLARE (knProcessManager, ProcessManagerSvc)

#endif /* ProcessManagerSvc_h */
