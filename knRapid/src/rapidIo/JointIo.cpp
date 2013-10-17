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
#include "JointIo.h"
#include "HeaderIo.h"
#include "RapidIoParameters.h"

#include "rapidDds/JointConfig.h"

#include <iostream>

namespace rapid
{

  std::ostream& operator<< (std::ostream& ostr, rapid::JointDef const& rhs)
  {
    ostr << "{"
         << rhs.frameName << ", "
         << rhs.dof
         << "}";
    return ostr;
  }

  std::ostream& operator<< (std::ostream& ostr, rapid::JointDefSequence const& rhs)
  {
    ostr << "{";
    for (DDS_Long i = 0; i < rhs.length(); ++i) {
      if (i > 0) {
        ostr << ", ";
      }
      ostr << rhs[i];
    }
    ostr << "}";
    return ostr;
  }

  std::ostream& operator<< (std::ostream& ostr, rapid::JointConfig const& rhs)
  {
    ostr << "JointConfig: {"
         << rhs.hdr << ", "
         << rhs.jointGroupName << ", "
         << rhs.jointDefinitions
         << "}";
    return ostr;
  }
 
  void operator<<=(JointConfig& config, JointConfigParameters const& params)
  {
    config.hdr <<= params.hdr;

    strncpy(config.jointGroupName, params.jointGroupName.c_str(), 31);
    config.jointGroupName[31] = 0;

    // config.jointDefinitions
    if (config.jointDefinitions.maximum() < (int)params.jointDefinitions.size()) {
      config.jointDefinitions.maximum(params.jointDefinitions.size());
    }
    config.jointDefinitions.ensure_length(params.jointDefinitions.size(), 64);
    for (int i = 0; i < config.jointDefinitions.length(); ++i) {
      JointDef& joint = config.jointDefinitions[i];
      JointDefParameters const& p = params.jointDefinitions[i];

      strncpy(joint.frameName, p.frameName.c_str(), 127);
      joint.frameName[127] = 0;
      strncpy(joint.dof, p.dof.c_str(), 31);
      config.jointGroupName[31] = 0;

    }
  }
} // namespace rapid
