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
#include "AdminImpl.h"
#include "CommandingParameters.h"
#include "CommandExceptions.h"

#include "rapidDds/Command.h"
#include "rapidDds/CommandConstants.h"
#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"

#include "miro/Log.h"
#include <ace/Thread_Manager.h>

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <iostream>

namespace rapid
{
  using namespace std;

  /**
   * ctor
   */
  AdminImpl::AdminImpl() :
    CommandImpl(rapid::ADMIN, typeDescription())
  {
  }

  /**
   * dtor
   */
  AdminImpl::~AdminImpl() throw()
  {
  }

  rapid::SubsystemType const * 
  AdminImpl::typeDescription()
  {
    static char const * const commands[] = {
      rapid::ADMIN_METHOD_ECHO,
      rapid::ADMIN_METHOD_NOOP,
      rapid::ADMIN_METHOD_SHUTDOWN
    };
    static int const ADMIN_COMMANDS = sizeof(commands) / sizeof (char const * const);

    rapid::SubsystemType * description = rapid::SubsystemTypeTypeSupport::create_data();

    strcpy(description->name, rapid::ADMIN);

    description->commands.length(ADMIN_COMMANDS);
    for (int i = 0; i < description->commands.length(); ++i) {
      strcpy(description->commands[i].name, commands[i]);
      description->commands[i].abortable = false;
      description->commands[i].suspendable = false;
    }

    description->commands[0].parameters.length(1);
    strcpy(description->commands[0].parameters[0].key, rapid::ADMIN_METHOD_ECHO_PARAM_ECHOTEXT);
    description->commands[0].parameters[0].type = rapid::RAPID_STRING;

    return description;
  }

  CommandImpl::FuturePtr
  AdminImpl::execute(rapid::Command const& cmd)
  {
    FuturePtr result;
    int cmdIdx = validateCommandSyntax(cmd.cmdName, cmd.arguments);
    switch (cmdIdx) {
    case 0: // ECHO
      MIRO_LOG(LL_NOTICE, cmd.arguments[0]._u.s);
      break;
    case 1: // NOOP
      break;
    case 2: // EXIT
      ACE_Thread_Manager::instance()->kill_all(SIGTERM); 
      break;
    default:
      boost::throw_exception(rapid::EBadSyntax(string("Unknown RAPID Admin cmdName:") + string(cmd.cmdName)));
    }

    return result;
  }
}
