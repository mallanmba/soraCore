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
#include "Trajectory2DIo.h"
#include "rapidExtIo/RapidExtIoParameters.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidUtil/RapidHelper.h"

#include "rapidExtDds/Trajectory2DConfig.h"

#include <iostream>

namespace 
{
  struct RTrans2DInterpretationPair
  {
    rapid::ext::RTrans2DInterpretation interpretation;
    char const * const name;
  };
  
  RTrans2DInterpretationPair const rTrans2Interpretations[] = {
    { rapid::ext::RTRANS2D_RELATIVE_TO_ORIGIN, "RTRANS2D_RELATIVE_TO_ORIGIN"},
    { rapid::ext::RTRANS2D_RELATIVE_TO_PREVIOUS, "RTRANS2D_RELATIVE_TO_PREVIOUS" }
  };
  unsigned int const NUM_RTRANS_INTERPRETATIONS = sizeof(rTrans2Interpretations) / sizeof(RTrans2DInterpretationPair);
}

namespace rapid
{
  namespace ext
  {
    std::ostream& operator<< (std::ostream& ostr, Trajectory2DConfig const& rhs)
    {
      ostr << "Trajectory2DConfig: {" 
           << rhs.hdr << ", " 
           << rhs.referenceFrame << ", "
           << rTrans2Interpretations[rhs.trajectoryInterp].name << ", "
           << rhs.samplingInterval << ", "
           << rhs.trajectoryMetaKeys
           << "}";
      return ostr;
    }
    
    void operator<<= (Trajectory2DConfig& config, Trajectory2DConfigParameters const& params)
    {
      config.hdr <<= params.hdr;
      
      strncpy(config.referenceFrame, params.referenceFrame.c_str(), 127);
      config.referenceFrame[127] = 0;
      
      // xyzMode
      config.trajectoryInterp = ext::RTRANS2D_RELATIVE_TO_ORIGIN;
      for (unsigned int i = 0; i < NUM_RTRANS_INTERPRETATIONS; ++i) {
        if (strcmp(rTrans2Interpretations[i].name, params.trajectoryInterp.c_str()) == 0) {
          config.trajectoryInterp = rTrans2Interpretations[i].interpretation;
          break;
        }
      }
      
      
      config.samplingInterval = RapidHelper::aceTimeValue2RapidTime(params.samplingInterval);
      
      // attributeModesxs
      config.trajectoryMetaKeys <<= params.trajectoryMetaKeys;
    }
  }
} // namespace rapid
