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
#include "TrajectoryIo.h"
#include "rapidExtIo/RapidExtIoParameters.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidUtil/RapidHelper.h"

#include "rapidExtDds/TrajectoryConfig.h"

#include <iostream>

namespace rapid
{
  namespace ext
  {
    std::ostream& operator<< (std::ostream& ostr, TrajectoryConfig const& rhs)
    {
      ostr << "TrajectoryConfig: {" 
           << rhs.hdr << ", " 
           << rhs.referenceFrame
           << "}";
      return ostr;
    }
    
    void operator<<= (TrajectoryConfig& config, TrajectoryConfigParameters const& params)
    {
      config.hdr <<= params.hdr;
      
      strncpy(config.referenceFrame, params.referenceFrame.c_str(), 127);
      config.referenceFrame[127] = 0;
    }
  }
} // namespace rapid
