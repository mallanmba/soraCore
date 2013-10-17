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
#include "AccessControlImpl.h"
#include "CommandingParameters.h"
#include "CommandExceptions.h"

#include "rapidDds/AccessControlStateSupport.h"
#include "rapidDds/RapidConstants.h"
#include "rapidDds/CommandConstants.h"
#include "rapidDds/CommandSupport.h"
#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"
#include "rapidUtil/RapidHelper.h"

#include "miro/RobotParameters.h"

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <iostream>
#include <sstream>

namespace rapid
{
  using namespace std;

  /**
   * ctor
   */
  AccessControlImpl::AccessControlImpl(AccessControlImplParameters const& params) :
    CommandImpl(ACCESSCONTROL, typeDescription()),
    m_serialId(0),
    m_statePublisher(ACCESSCONTROL_STATE_TOPIC,
                     params.publisher,
                     params.stateProfile,
                     params.stateLibrary)
  {
    string const& assetName = Miro::RobotParameters::instance()->name;

    MIRO_LOG_OSTR(LL_DEBUG, "Rapid AccessControl: Agent Name = " << assetName);

    // configure asset state

    AccessControlState& state = m_statePublisher.event();

    RapidHelper::initHeader(state.hdr);

    m_statePublisher.sendEvent();    
  }

  /**
   * dtor
   */
  AccessControlImpl::~AccessControlImpl() throw()
  {
  }

  SubsystemType const * 
  AccessControlImpl::typeDescription()
  {
    static char const * const commands[] = {
      ACCESSCONTROL_METHOD_GRABCONTROL,
      ACCESSCONTROL_METHOD_RELEASECONTROL,
      ACCESSCONTROL_METHOD_REQUESTCONTROL,
      ACCESSCONTROL_METHOD_TRANSFERCONTROL
    };
    static int const ACCESSCONTROL_COMMANDS = sizeof(commands) / sizeof (char const * const);

    SubsystemType * description = SubsystemTypeTypeSupport::create_data();

    strcpy(description->name, ACCESSCONTROL);

    description->commands.length(ACCESSCONTROL_COMMANDS);
    for (int i = 0; i < description->commands.length(); ++i) {
      strcpy(description->commands[i].name, commands[i]);
      description->commands[i].abortable = false;
      description->commands[i].suspendable = false;
    }

    description->commands[3].parameters.length(1);
    strcpy(description->commands[3].parameters[0].key, ACCESSCONTROL_METHOD_TRANSFERCONTROL_PARAM_RECIPIENT);
    description->commands[3].parameters[0].type = RAPID_STRING;

    return description;
  }

  CommandImpl::FuturePtr
  AccessControlImpl::execute(Command const& cmd)
  {
    FuturePtr result;
    AccessControlState& state = m_statePublisher.event();

    // if nobody is in control, you got it
    if (strcmp(ACCESSCONTROL_METHOD_REQUESTCONTROL, cmd.cmdName) == 0) {
      if (strlen(state.controller) == 0) {
        strcpy(state.controller, cmd.cmdSrc);
      }
      // If this is first request, and it is same client as Controller, do nothing
      else if(strcmp(state.controller, cmd.cmdSrc) == 0 && 
              state.requestors.length() == 0) {
        // do nothing
      }		
      // If this request is from the last member of the list, don't duplicate
      else if(state.requestors.length() > 0 &&
              strcmp(state.requestors[state.requestors.length() - 1], cmd.cmdSrc) == 0) {
        // do nothing
      }
      // otherwise append it to the queue
      else {
        int i = state.requestors.length();
        if (i < state.requestors.maximum()) {
          state.requestors.length(i + 1);
          strcpy(state.requestors[i], cmd.cmdSrc);
        }
        else {
          boost::throw_exception(EExecFailed("AccessControl: Too many requestors. Ignored!"));
        }
      }
    }
    else if (strcmp(ACCESSCONTROL_METHOD_GRABCONTROL, cmd.cmdName) == 0) {
      MIRO_LOG_OSTR(LL_WARNING, "AccessControl: Access is grabed by " << cmd.cmdSrc);
      strcpy(state.controller, cmd.cmdSrc);
      
      // remove first controller entry from requestors queue
      unsigned int len = state.requestors.length();
      unsigned int i;
      
      // search for controller in requestors list
      for (i = 0; i < len; ++i) {
        if (strcmp(state.requestors[i], state.controller) == 0) {
          len--; // signal we have to remove something
          break;
        }
      }
      
      // copy down by one
      for (; i < len; ++i) {
        strcpy(state.requestors[i], state.requestors[i + 1]);
      }
      state.requestors.length(len);
    }
    else if (strcmp(ACCESSCONTROL_METHOD_RELEASECONTROL, cmd.cmdName) == 0) {
      if (strcmp(state.controller, cmd.cmdSrc) == 0) {
        // if there is somebody waiting in the queue, put that one in control
        unsigned int len = state.requestors.length();
        if (len > 0) {
          strcpy(state.controller, state.requestors[0]);
          // remove entry from requestors queue
          for (unsigned int i = 0; i < (len - 1); ++i) {
            strcpy(state.requestors[i], state.requestors[i + 1]);
          }
          state.requestors.length(len - 1);
        }
        // otherwise, nobody is in control
        else {
          strcpy(state.controller, "");
        }
      }
      else {
        boost::throw_exception(EPermission(string("Tried to release control by other than owner: ") + cmd.cmdSrc));
      }
    }
    else if (strcmp(ACCESSCONTROL_METHOD_TRANSFERCONTROL, cmd.cmdName) == 0) {
      if (strcmp(state.controller, cmd.cmdSrc) == 0) {
        // if there is somebody waiting in the queue, put that one in control
        if (cmd.arguments.length() != 1) 
          boost::throw_exception(EBadSyntax("AccessControl command transferControl request w/o argument."));
        
//         if (strcmp(ACCESSCONTROL_METHOD_TRANSFERCONTROL_PARAM_RECIPIENT, cmd.arguments[0].key) != 0)
//           boost::throw_exception(EBadSyntax(string("AccessControl command transferControl wrong parameter key: ") + cmd.arguments[0].key));
        
        if (cmd.arguments[0]._d != RAPID_STRING)
          boost::throw_exception(EBadSyntax("AccessControl command transferControl parameter not of type RAPID_STING: "));
        
        strcpy(state.controller, cmd.arguments[0]._u.s);
        
        // remove first controller entry from requestors queue
        unsigned int len = state.requestors.length();
        unsigned int i;
        
        // search for controller in requestors list
        for (i = 0; i < len; ++i) {
          if (strcmp(state.requestors[i], state.controller) == 0) {
            len--; // signal we have to remove something
            break;
          }
        }
        
        // copy down by one
        for (; i < len; ++i) {
          strcpy(state.requestors[i], state.requestors[i + 1]);
        }
        state.requestors.length(len);
      }
      else {
	boost::throw_exception(EPermission(string("Tried to transfer control by other than owner: ") + cmd.cmdSrc));
      }
    }
    else {
      boost::throw_exception(EBadSyntax(string("AccessControlCommand unknown cmdName: ") + cmd.cmdName));
    }

    RapidHelper::updateHeader(state.hdr);
    m_statePublisher.sendEvent();  

    return result;
  }

  bool
  AccessControlImpl::isController(char const * user) const throw()
  {
    AccessControlState const& state = m_statePublisher.event();

    return (strcmp(state.controller, user) == 0);
  }

  char const *
  AccessControlImpl::controller() const throw()
  {
    AccessControlState const& state = m_statePublisher.event();

    return state.controller;
  }
}
