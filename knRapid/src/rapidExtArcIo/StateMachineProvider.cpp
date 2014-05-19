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
#include "StateMachineProvider.h"
#include "RapidExtArcIoParameters.h"

#include "rapidExtArcDds/ExtArcConstants.h"

#include "knShare/StateMachine.h"
#include "knShare/StateMachineRepository.h"
#include "knShare/Functional.h"

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      using namespace std;
      
      /**
       * ctor
       */
      StateMachineProvider::StateMachineProvider(StateMachineTopicPairParameters const& params,
                                                 std::string const& name, 
                                                 std::string const&entityName) :
        StateMachineProviderBase(STATEMACHINE_CONFIG_TOPIC, STATEMACHINE_STATE_TOPIC, fillInMachineDescription(params, name), entityName)
      {
        rapid::ext::arc::StateMachineConfig& config = m_configSupplier.event();
        rapid::ext::arc::StateMachineState& state = m_dataSupplier.event();

        if (params.config.subsystem.empty()) {
          strncpy(state.subsystem, name.c_str(), 31);
        }
        else {
          strncpy(state.subsystem, params.config.subsystem.c_str(), 31);
        }
        state.subsystem[31] = 0;
        strncpy(state.stateMachine, params.config.stateMachine.c_str(), 31);
        state.stateMachine[31] = 0;
        state.currentState = config.states.length(); // excess value to mark un-initialized

        kn::StateMachineRepository * repo = kn::StateMachineRepository::instance();
        kn::StateMachine * stateMachine = repo->get(name);
    
        m_stateUpdateConnection = 
          stateMachine->transitionSignal().connect(kn::bind(&StateMachineProvider::publish, this, _1, _2, _3, _4, _5));

        stateMachine->resignal();
      }

      void 
      StateMachineProvider::publish(ACE_Time_Value const& time, int sourceState, int event, int targetState, int status)
      {
        rapid::ext::arc::StateMachineConfig& config = m_configSupplier.event();
        rapid::ext::arc::StateMachineState& state = m_dataSupplier.event();

        string name = config.subsystem;

        if (sourceState < 0 || sourceState > config.states.length()) {
          MIRO_LOG_OSTR(LL_ERROR, "StateMachineProvider [" << name <<"] - Illigal sourceState idx: " << sourceState);
        }
        else if (targetState < 0 || targetState > config.states.length()) {
          MIRO_LOG_OSTR(LL_ERROR, "StateMachineProvider [" << name <<"] - Illigal targetState idx: " << targetState);
        }
        else  if (event < 0 || event > config.events.length()) {
          MIRO_LOG_OSTR(LL_ERROR, "StateMachineProvider [" << name <<"] - Illigal event idx: " << event);
        }
        else {
          if (sourceState != state.currentState && state.currentState < config.states.length()) {
            MIRO_LOG_OSTR(LL_WARNING, "StateMachineProvider [" << name <<"] - Inconsistent state transition: currentState: " << config.states[state.currentState] << " != sourceState: " << config.states[sourceState]);
          }
          
          if (sourceState != state.previousState ||
              event != state.lastEvent ||
              targetState != state.currentState ||
              status != state.hdr.statusCode) {
            
            rapid::RapidHelper::updateHeader(state.hdr, time);
            state.hdr.statusCode = status;
            
            state.currentState = targetState;
            state.previousState = sourceState;
            state.lastEvent = event;
            
            m_dataSupplier.sendEvent();
          }
        }
      }

      StateMachineTopicPairParameters 
      StateMachineProvider::fillInMachineDescription(StateMachineTopicPairParameters const& params, std::string const& name)
      {
        StateMachineTopicPairParameters p(params);
        if (p.config.subsystem.empty()) {
          p.config.subsystem = name;
        }

        if (p.config.machineDescription.states.empty() &&
            p.config.machineDescription.events.empty() &&
            p.config.machineDescription.transitions.empty()) {

          kn::StateMachineRepository * repo = kn::StateMachineRepository::instance();
          kn::StateMachine const * const stateMachine = repo->get(name);
          p.config.machineDescription = stateMachine->description();
        }

        return p;
      }
    }
  }
}
