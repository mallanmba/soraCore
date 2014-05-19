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
#ifndef rapidStateMachineProvider_h
#define rapidStateMachineProvider_h

#include "rapidExtArcIo_Export.h"

#include "StateMachineIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidExtArcDds/StateMachineConfig.h"
#include "rapidExtArcDds/StateMachineConfigSupport.h"
#include "rapidExtArcDds/StateMachineState.h"
#include "rapidExtArcDds/StateMachineStateSupport.h"

#include <boost/signals2.hpp>

class ACE_Time_Value;

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class StateMachineTopicPairParameters;
      
      typedef Provider_T<StateMachineConfig,
                         StateMachineState,
                         StateMachineTopicPairParameters> StateMachineProviderBase;
    
      class rapidExtArcIo_Export StateMachineProvider : public StateMachineProviderBase
      {
      public:
        StateMachineProvider(StateMachineTopicPairParameters const& params, std::string const& name, std::string const&entityName);
        
        void publish(ACE_Time_Value const& time, int sourceState, int event, int targetState, int status);
        
      protected:
        StateMachineTopicPairParameters fillInMachineDescription(StateMachineTopicPairParameters const& params, std::string const& name);
        
        boost::signals2::scoped_connection m_stateUpdateConnection;
      };
    }
  }
}
#endif // rapidStateMachineProvider_h
