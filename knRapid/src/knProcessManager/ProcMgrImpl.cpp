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
#include "ProcMgrImpl.h"
#include "ProcessManagerSvc.h"

#include "rapidCommanding/CommandExceptions.h"

#include "rapidDds/Command.h"
#include "rapidExtDds/ExtCommandConstants.h"
#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <iostream>

namespace kn
{
  using namespace std;

  /**
   * ctor
   */
  ProcMgrImpl::ProcMgrImpl(ProcessManagerSvc * procMgrSvc) :
    rapid::CommandImpl(rapid::ext::PROCMGR, typeDescription()),
    m_procMgrSvc(procMgrSvc)
  {
  }

  /**
   * dtor
   */
  ProcMgrImpl::~ProcMgrImpl() throw()
  {
  }

  namespace 
  {
    static rapid::KeyTypePair arguments[] = {
      { rapid::ext::PROCMGR_METHOD_PARAM_PROCESSID, rapid::ext::PROCMGR_METHOD_DTYPE_PROCESSID }
    };
    static int const NUM_ARGUMENTS = sizeof(arguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair setCmdLineArguments[] = {
      { rapid::ext::PROCMGR_METHOD_PARAM_PROCESSID, rapid::ext::PROCMGR_METHOD_DTYPE_PROCESSID },
      { rapid::ext::PROCMGR_METHOD_PARAM_CMDLINE, rapid::ext::PROCMGR_METHOD_DTYPE_CMDLINE }
    };
    static int const NUM_SETCMDLINE_ARGUMENTS = sizeof(setCmdLineArguments) / sizeof(rapid::KeyTypePair);

    struct Cmd 
    {
      char const * name;
      int argumentNum;
      rapid::KeyTypePair * arguments;
    };  

    static Cmd const commands[] = {
      { rapid::ext::PROCMGR_METHOD_KILL, NUM_ARGUMENTS, arguments },
      { rapid::ext::PROCMGR_METHOD_SETCOMMANDLINE, NUM_SETCMDLINE_ARGUMENTS, setCmdLineArguments },
      { rapid::ext::PROCMGR_METHOD_START, NUM_ARGUMENTS, arguments },
      { rapid::ext::PROCMGR_METHOD_STOP, NUM_ARGUMENTS, arguments }
    };
    static int const PROCMGR_COMMANDS = sizeof(commands) / sizeof (Cmd);
  }

  rapid::SubsystemType const * 
  ProcMgrImpl::typeDescription()
  {
    rapid::SubsystemType * description = rapid::SubsystemTypeTypeSupport::create_data();

    strcpy(description->name, rapid::ext::PROCMGR);

    description->commands.length(PROCMGR_COMMANDS);
    for (int i = 0; i < description->commands.length(); ++i) {
      strcpy(description->commands[i].name, commands[i].name);
      description->commands[i].abortable = false;
      description->commands[i].suspendable = false;

      description->commands[i].parameters.length(commands[i].argumentNum);
      for (int j = 0; j < commands[i].argumentNum; ++j) {
        strcpy(description->commands[i].parameters[j].key, commands[i].arguments[j].key);
        description->commands[i].parameters[j].type = commands[i].arguments[j].type;
      }
    }

    return description;
  }

  rapid::CommandImpl::FuturePtr
  ProcMgrImpl::execute(rapid::Command const& cmd)
  {
    int rc = 0;
    int cmdIdx = validateCommandSyntax(cmd.cmdName, cmd.arguments);
    int procId = cmd.arguments[0]._u.i;
    switch (cmdIdx) {
    case 0: // KILL
      cout << "kill" << procId<< endl;
      rc = m_procMgrSvc->killProcess(procId);
      break;
    case 1: // SETCOMMANDLINE
      {
        char const * cmdLine = cmd.arguments[1]._u.s;
        cout << "setCmdLineArguments" << procId << ", " << cmdLine << endl;
        rc = m_procMgrSvc->setCommandLine(procId, cmdLine);
      }
      break;
    case 2: // START
      cout << "start" << procId << endl;
      rc = m_procMgrSvc->startProcess(procId);
      break;
    case 3: // STOP
      cout << "stop" << procId << endl;
      rc = m_procMgrSvc->stopProcess(procId);
      break;
    default:
      throw rapid::EBadSyntax(string("Unknown ProcMgrCommand cmdName:") + 
			      string(cmd.cmdName));
    }

    if (rc == -1) {
      stringstream s;
      s << "System Error" << " - (" << errno << "): " << strerror(errno);
      throw rapid::EExecFailed(s.str().c_str());
    }
    if (rc == -2) {
      throw rapid::EExecFailed("Operations Error - Non-matching process state.");
    }
    if (rc == -3) {
      stringstream s;
      s << "Unknown process id: " << procId;
      throw rapid::EExecFailed(s.str().c_str());
    }

    FuturePtr result;
    return result;
  }
}
