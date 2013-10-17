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
#include "GpsIo.h"
#include "rapidUtil/RapidHelper.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidExtArcIo/RapidExtArcIoParameters.h"

#include "rapidExtArcDds/GpsConfig.h"

#include <iostream>
#include <cstdlib>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      std::ostream& operator<< (std::ostream& ostr, ext::arc::GpsConfig const& rhs)
      {
        ostr << "GpsConfig: {" 
             << rhs.hdr << ", " 
             << rhs.sensorFrame << ", "
             << rhs.referenceFrame << ", "
             << rhs.elipsoid
             << "}";
        return ostr;
      }

      void operator<<= (GpsConfig& config, GpsConfigParameters const& params)
      {
        config.hdr <<= params.hdr;

        strncpy(config.sensorFrame, params.sensorFrame.c_str(), 31);
        config.sensorFrame[31] = 0;
        
        strncpy(config.referenceFrame, params.referenceFrame.c_str(), 31);
        config.referenceFrame[31] = 0;

        strncpy(config.elipsoid, params.elipsoid.c_str(), 31);
        config.elipsoid[31] = 0;
      }
    } // namespace arc
  } // namespace ext
} // namespace rapid
