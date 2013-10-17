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
#include "BatteryPackIo.h"
#include "rapidUtil/RapidHelper.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidExtArcIo/RapidExtArcIoParameters.h"

#include "rapidExtArcDds/BatteryPackConfig.h"

#include <iostream>
#include <cstdlib>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      std::ostream& operator<< (std::ostream& ostr, ext::arc::BatteryPackConfig const& rhs)
      {
        ostr << "BatteryPackConfig: {" 
             << rhs.hdr << ", {";
        for (DDS_Long i = 0; i < rhs.controllerNames.length(); ++i) {
          if (i > 0) {
            ostr << ", ";
          }
          ostr << rhs.controllerNames[i];
        }
        ostr << "}";
        
        return ostr;
      }

      void operator<<= (BatteryPackConfig& config, BatteryPackConfigParameters const& params)
      {
        config.hdr <<= params.hdr;

        config.controllerNames.length(params.controllerNames.size());
        for (long i = 0; i < config.controllerNames.length(); ++i){
          strncpy(config.controllerNames[i], params.controllerNames[i].c_str(), 31);
          config.controllerNames[i][31] = 0;
        }
      }
    } // namespace arc
  } // namespace ext
} // namespace rapid
