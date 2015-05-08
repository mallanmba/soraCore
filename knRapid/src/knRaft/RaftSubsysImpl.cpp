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
#include "RaftSubsysImpl.h"
#include "FileQueue.h"
#include "RaftParameters.h"

#include "rapidCommanding/CommandExceptions.h"

#include "rapidDds/Command.h"
#include "rapidDds/CommandConstants.h"
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
  RaftSubsysImpl::RaftSubsysImpl(FileQueue * fileQueue) :
    rapid::SubsysImpl(rapid::RAFT, typeDescription()),
    m_fileQueue(fileQueue)
  {
  }

  /**
   * dtor
   */
  RaftSubsysImpl::~RaftSubsysImpl() throw()
  {
  }

  namespace
  {
    static rapid::KeyTypePair pauseArguments[] = {
      { rapid::RAFT_METHOD_PARAM_CHANNELID, rapid::RAFT_METHOD_DTYPE_CHANNELID }
    };
    static int const PAUSE_ARGUMENTS = sizeof(pauseArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair putFileArguments[] = {
      { rapid::RAFT_METHOD_PARAM_UUID, rapid::RAFT_METHOD_DTYPE_UUID },
      { rapid::RAFT_METHOD_PARAM_CHANNELID, rapid::RAFT_METHOD_DTYPE_CHANNELID },
      { rapid::RAFT_METHOD_PARAM_PRIORITY, rapid::RAFT_METHOD_DTYPE_PRIORITY }
    };
    static int const PUTFILE_ARGUMENTS = sizeof(putFileArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair putMatchingArguments[] = {
      { rapid::RAFT_METHOD_PARAM_KEY, rapid::RAFT_METHOD_DTYPE_KEY },
      { rapid::RAFT_METHOD_PARAM_VALUE, rapid::RAFT_METHOD_DTYPE_VALUE },
      { rapid::RAFT_METHOD_PARAM_CHANNELID, rapid::RAFT_METHOD_DTYPE_CHANNELID },
      { rapid::RAFT_METHOD_PARAM_PRIORITY, rapid::RAFT_METHOD_DTYPE_PRIORITY }
    };
    static int const PUTMATCHING_ARGUMENTS = sizeof(putMatchingArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair removeFileArguments[] = {
      { rapid::RAFT_METHOD_PARAM_UUID, rapid::RAFT_METHOD_DTYPE_UUID }
    };
    static int const REMOVEFILE_ARGUMENTS = sizeof(removeFileArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair resumeArguments[] = {
      { rapid::RAFT_METHOD_PARAM_CHANNELID, rapid::RAFT_METHOD_DTYPE_CHANNELID }
    };
    static int const RESUME_ARGUMENTS = sizeof(resumeArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair setBandwidthArguments[] = {
      { rapid::RAFT_METHOD_PARAM_BANDWIDTHBPS, rapid::RAFT_METHOD_DTYPE_BANDWIDTHBPS },
      { rapid::RAFT_METHOD_PARAM_PREFETCHKBANDWIDTHBPS, rapid::RAFT_METHOD_DTYPE_PREFETCHKBANDWIDTHBPS }
    };
    static int const SETBANDWIDTH_ARGUMENTS = sizeof(setBandwidthArguments) / sizeof(rapid::KeyTypePair);

    struct Cmd {
      char const * name;
      int argumentNum;
      rapid::KeyTypePair * arguments;
    };

    static Cmd const commands[] = {
      { rapid::RAFT_METHOD_PAUSE, PAUSE_ARGUMENTS, pauseArguments },
      { rapid::RAFT_METHOD_PUTFILE, PUTFILE_ARGUMENTS, putFileArguments },
      { rapid::RAFT_METHOD_PUTMATCHING, PUTMATCHING_ARGUMENTS, putMatchingArguments },
      { rapid::RAFT_METHOD_REMOVEFILE, REMOVEFILE_ARGUMENTS, removeFileArguments },
      { rapid::RAFT_METHOD_RESUME, RESUME_ARGUMENTS, resumeArguments },
      { rapid::RAFT_METHOD_SETBANDWIDTH, SETBANDWIDTH_ARGUMENTS, setBandwidthArguments }
    };
    static int const RAFT_COMMANDS = sizeof(commands) / sizeof (Cmd);
  }

  rapid::SubsystemType const *
  RaftSubsysImpl::typeDescription()
  {
    rapid::SubsystemType * description = rapid::SubsystemTypeTypeSupport::create_data();

    strcpy(description->name, rapid::RAFT);

    description->commands.length(RAFT_COMMANDS);
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

  rapid::SubsysImpl::FuturePtr
  RaftSubsysImpl::execute(rapid::Command const& cmd)
  {
    int rc = 0;
    int cmdIdx = validateCommandSyntax(cmd.cmdName, cmd.arguments);
    switch (cmdIdx) {
      case 0: // PASUE
        cout << "pause" << cmd.arguments[0]._u.i << endl;
        rc = m_fileQueue->pause(cmd.arguments[0]._u.i);
        break;
      case 1: // PUTFILE
        cout << "putFile" << cmd.arguments[0]._u.s << cmd.arguments[1]._u.i << cmd.arguments[2]._u.f << endl;
        rc = m_fileQueue->putFile(cmd.arguments[0]._u.s, cmd.arguments[1]._u.i, cmd.arguments[2]._u.f);
        break;
      case 2: // PUTMATCHING
        cout << "putMatching: "
             << cmd.arguments[0]._u.s << ", "
             << cmd.arguments[1]._u.s << ", "
             << cmd.arguments[2]._u.i << ", "
             << cmd.arguments[3]._u.f << endl;
        rc = m_fileQueue->putMatching(cmd.arguments[0]._u.s, cmd.arguments[1]._u.s,
                                      cmd.arguments[2]._u.i, cmd.arguments[3]._u.f);
        break;
      case 3: // REMOVEFILE
        cout << "removeFile" << cmd.arguments[0]._u.s << endl;
        rc = m_fileQueue->removeFile(cmd.arguments[0]._u.s);
        break;
      case 4: // RESUME
        cout << "resume" << cmd.arguments[0]._u.i << endl;
        rc = m_fileQueue->resume(cmd.arguments[0]._u.i);
        break;
      case 5: // SETBANDWIDTH
        cout << "setBandwidth " << cmd.arguments[0]._u.i << ", " << cmd.arguments[1]._u.i << endl;
        rc = m_fileQueue->setBandwidth(cmd.arguments[0]._u.i, cmd.arguments[1]._u.i);
        break;
      default:
        throw rapid::EBadSyntax(string("Unknown RaftCommand cmdName:") +
                                string(cmd.cmdName));
    }

    if (rc != 0) {
      throw rapid::EExecFailed("dunno");
    }

    return FuturePtr();
  }
}
