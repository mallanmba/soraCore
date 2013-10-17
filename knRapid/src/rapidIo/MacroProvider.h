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
#ifndef rapidMacroProvider_h
#define rapidMacroProvider_h

#include "rapidIo_Export.h"
#include "MacroIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidDds/MacroConfig.h"
#include "rapidDds/MacroConfigSupport.h"
#include "rapidDds/MacroState.h"
#include "rapidDds/MacroStateSupport.h"

#include <boost/shared_ptr.hpp>

namespace rapid
{
  class MacroConfigParameters;
  class MacroTopicPairParameters;
  
  typedef Provider_T<MacroConfig, MacroState, MacroTopicPairParameters> MacroProviderBase;
  
  class rapidIo_Export MacroProvider : public MacroProviderBase
  {
  public:
    typedef boost::shared_ptr<MacroConfig> MacroConfigPtr;
    typedef std::vector<MacroConfigPtr> MacroConfigVector;
    
    MacroProvider(MacroTopicPairParameters const& params);
    
    void publishMacroConfig(MacroConfigParameters const& params);
    
    void updateMacroState(MacroConfigVector const& configs);
  };
}
#endif // rapidMacroProvider_h
