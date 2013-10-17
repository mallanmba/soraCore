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
#include "MacroProvider.h"
#include "RapidIoParameters.h"

#include "rapidDds/RapidConstants.h"

#include <vector>
#include <algorithm>

namespace
{
  struct LT
  {
    bool operator()(rapid::MacroProvider::MacroConfigPtr const& lhs, rapid::MacroProvider::MacroConfigPtr const& rhs) {
      return (strcmp(lhs->name, rhs->name) < 0);
    }
  };
}


namespace rapid
{
  using namespace std;
    
  /**
   * ctor
   */
  // no changes to constructor
  MacroProvider::MacroProvider(MacroTopicPairParameters const& params) :
    MacroProviderBase(MACRO_CONFIG_TOPIC, MACRO_STATE_TOPIC, params)
  {}

  void
  MacroProvider::publishMacroConfig(MacroConfigParameters const& params)
  {
    m_configSupplier.event() <<= params;
    m_configSupplier.sendEvent();
  }
    
  void
  MacroProvider::updateMacroState(MacroConfigVector const& configs)
  {
    MacroConfigVector macros(configs);
    std::sort(macros.begin(), macros.end(), LT());
      
    Data& state = m_dataSupplier.event();
    rapid::RapidHelper::updateHeader(state.hdr);
      
    MacroConfigVector::const_iterator iter = macros.begin();
    state.macros.ensure_length(macros.size(), 128);
    for (int i = 0; i < state.macros.length(); ++i, ++iter) {
      rapid::MacroInfo& macroInfo = state.macros[i];
      strcpy(macroInfo.name, (*iter)->name);
      macroInfo.serial = (*iter)->hdr.serial;
      macroInfo.accepted = true;
    }
    m_dataSupplier.sendEvent();
  }
}
