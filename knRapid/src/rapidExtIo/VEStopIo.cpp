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
#include "VEStopIo.h"
#include "rapidExtIo/RapidExtIoParameters.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidUtil/RapidHelper.h"

#include "rapidExtDds/VEStopConfig.h"

#include <iostream>

namespace rapid
{
  namespace ext
  {
    std::ostream& operator<< (std::ostream& ostr, VEStopConfig const& rhs)
    {
      ostr << "VEStopConfig: {" 
           << rhs.hdr << ", " 
           << RapidHelper::rapidTime2AceTimeValue(rhs.evaluationInterval)
           << "}";
      return ostr;
    }
    
    void operator<<= (VEStopConfig& config, VEStopConfigParameters const& params)
    {
      config.hdr <<= params.hdr;
      config.evaluationInterval = RapidHelper::aceTimeValue2RapidTime(params.evaluationInterval);
    }
  }
} // namespace rapid
