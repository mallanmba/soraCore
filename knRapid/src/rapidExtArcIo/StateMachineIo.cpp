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
#include "StateMachineIo.h"
#include "rapidUtil/RapidHelper.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidExtArcIo/RapidExtArcIoParameters.h"

#include "rapidExtArcDds/StateMachineConfig.h"

#include <iostream>
#include <cstdlib>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      std::ostream& operator<< (std::ostream& ostr, ext::arc::StateMachineConfig const& rhs)
      {
        ostr << "StateMachineConfig: {" 
             << rhs.hdr << ", "
             << rhs.subsystem << ", "
             << rhs.stateMachine << ", {";
        for (DDS_Long i = 0; i < rhs.states.length(); ++i) {
          if (i > 0) {
            ostr << ", ";
          }
          ostr << rhs.states[i];
        }
        ostr << "}, {";
        for (DDS_Long i = 0; i < rhs.events.length(); ++i) {
          if (i > 0) {
            ostr << ", ";
          }
          ostr << rhs.events[i];
        }
        ostr << "}, {";
        
        for (DDS_Long i = 0; i < rhs.transitions.length(); ++i) {
          
          if (i > 0) {
            ostr << ", ";
          }
          
          TransitionTriple const& trans = rhs.transitions[i];
          ostr << "(" << rhs.states[trans.sourceState] << ", " << rhs.events[trans.event] << ", " << rhs.states[trans.targetState] << ")";
        }
        ostr << "}";
        
        return ostr;
      }

      void operator<<= (StateMachineConfig& config, StateMachineConfigParameters const& params)
      {
        config.hdr <<= params.hdr;

        strncpy(config.subsystem, params.subsystem.c_str(), 31);
        config.subsystem[31] = 0;
        strncpy(config.stateMachine, params.stateMachine.c_str(), 31);
        config.stateMachine[31] = 0;

        // state machine description
        config.states.length(params.machineDescription.states.size());
        for (int i = 0; i < config.states.length(); ++i) {
          strncpy(config.states[i], params.machineDescription.states[i].c_str(), 31);
          config.states[i][31] = 0;
        }  
        config.events.length(params.machineDescription.events.size());
        for (int i = 0; i < config.events.length(); ++i) {
          strncpy(config.events[i], params.machineDescription.events[i].c_str(), 31);
          config.events[i][31] = 0;
        }  
        config.transitions.length(params.machineDescription.transitions.size());
        for (int i = 0; i < config.transitions.length(); ++i) {
          rapid::ext::arc::TransitionTriple& lhs = config.transitions[i];
          kn::StateMachine::Description::TransitionTriple const& rhs = params.machineDescription.transitions[i];
          
          lhs.sourceState = params.machineDescription.stateIdx(rhs.sourceState);
          lhs.event = params.machineDescription.eventIdx(rhs.event);
          lhs.targetState = params.machineDescription.stateIdx(rhs.targetState);
        }  
      }
    } // namespace arc
  } // namespace ext
} // namespace rapid
