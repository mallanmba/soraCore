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
#include "AgentIo.h"
#include "HeaderIo.h"
#include "BaseTypesIo.h"
#include "rapidIo/RapidIoParameters.h"

#include "rapidDds/AgentConfig.h"

#include <iostream>
#include <cstdlib>


namespace rapid
{
  std::ostream& operator<< (std::ostream& ostr, rapid::AgentConfig const& rhs)
  {
    ostr << "AgentConfig: {" 
         << rhs.hdr << ", " 
         << rhs.agentTags << ", " 
         << rhs.topics << ", "
         << rhs.valueKeys
         << "}";
    return ostr;
  }

  void operator <<= (AgentConfig& config, AgentConfigParameters const& params)
  {
    config.hdr <<= params.hdr;

    config.agentTags <<= params.agentTags;
    config.topics <<= params.topics;
    config.valueKeys <<= params.valueKeys;
  }
} // namespace rapid
