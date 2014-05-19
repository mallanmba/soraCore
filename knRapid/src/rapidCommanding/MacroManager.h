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
#ifndef rapid_MacroManager_h
#define rapid_MacroManager_h

#include "rapidCommanding_Export.h"
#include "CommandingParameters.h"

#include "rapidIo/MacroProvider.h"

#include "knShare/SmartPtr.h"

#include <map>
#include <string>

namespace kn
{
  class DdsEventLoop;

}

namespace rapid
{
  class MacroManager
  {
  public:
    typedef kn::shared_ptr<rapid::MacroConfig> MacroPtr;
    typedef std::map<std::string, MacroPtr> MacroMap;

    MacroManager(MacroManagerParameters const& params, const std::string& entityName);

    void connect(kn::DdsEventLoop& eventLoop);
    
    void operator() (rapid::MacroConfig const * config);

    void addMacro(rapid::MacroConfig const& macro);
    void delMacro(std::string const& name);
    MacroPtr retreiveMacro(std::string const& name, int serial);

  protected:
    void saveMacros() const;
    std::string persistencyFileName() const;

    MacroManagerParameters m_params;
    rapid::MacroProvider m_provider;

    void publishMacroState();

    MacroMap m_macros;
  };
}
#endif // rapid_MacroManager_h
