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
#include "PositionIo.h"
#include "HeaderIo.h"
#include "BaseTypesIo.h"
#include "rapidIo/RapidIoParameters.h"

#include "rapidDds/PositionConfig.h"

#include <iostream>
#include <cstdlib>

namespace
{
  char const * rotationEncodingNames[] = {
    "ROT_NONE",
    "ROT_M33",
    "ROT_QUAT",
    "ROT_XYZ",
    "ROT_ZYX",
    "ROT_ZYZ",
    "ROT_VEL"
  };
  
  rapid::RotationEncoding rotationEncodings[] = {
    rapid::RAPID_ROT_NONE,
    rapid::RAPID_ROT_M33,
    rapid::RAPID_ROT_QUAT,
    rapid::RAPID_ROT_XYZ,
    rapid::RAPID_ROT_ZYX,
    rapid::RAPID_ROT_ZYZ,
    rapid::RAPID_ROT_VEL
  };
  int const NUM_ROTATION_ENCODINGS = sizeof(rotationEncodings) / sizeof(rapid::RotationEncoding);

}


namespace rapid
{
  std::ostream& operator<< (std::ostream& ostr, rapid::PositionConfig const& rhs)
  {
    ostr << "PositionConfig: {" 
         << rhs.hdr << ", " 
         << rhs.frameName << ", " 
         << rotationEncodingNames[rhs.poseEncoding] << ", "
         << rotationEncodingNames[rhs.velocityEncoding] << ","
         << rhs.valueKeys
         << "}";
    return ostr;
  }

  void operator <<= (PositionConfig& config, PositionConfigParameters const& params)
  {
    config.hdr <<= params.hdr;

    strncpy(config.frameName, params.controlledFrame.c_str(), 127);
    config.frameName[127] = 0;

    config.poseEncoding = rotationEncodings[params.poseEncoding];
    config.velocityEncoding = rotationEncodings[params.velocityEncoding];

    config.valueKeys <<= params.valueKeys;
  }
} // namespace rapid
