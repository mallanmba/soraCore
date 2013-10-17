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
#include "EphemerisIo.h"
#include "rapidUtil/RapidHelper.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidExtArcIo/RapidExtArcIoParameters.h"

#include "rapidExtArcDds/EphemerisConfig.h"

#include <iostream>
#include <cstdlib>
#include <vector>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      std::ostream& operator<< (std::ostream& ostr, ext::arc::EphemerisConfig const& rhs)
      {
        ostr << "EphemerisConfig: {" 
             << rhs.hdr
             << ", [";
             
        for(int i = 0; i < rhs.entries.length(); i++)
        {
          if (i > 0) {
            ostr << ", ";
          }

          EphemerisConfigEntry ece;
          
          ece = rhs.entries.get_at(i);
          ostr << "{"
               << ece.solutionName << ","
               << ece.referenceFrame << ","
               << ece.sourceBody << ","
               << ece.targetBody << ","
               << ece.timeOffset << ","
               << ece.period
               << "}";
        }
             
         ostr << "]}";
        return ostr;
      }

      void operator<<= (EphemerisConfig& config, EphemerisConfigParameters const& params)
      {
        config.hdr <<= params.hdr;

        config.entries.ensure_length(params.entries.size(), 32);

        for (int i= 0; i < config.entries.length(); i++)
        {
          strncpy(config.entries[i].solutionName,params.entries[i].solutionName.c_str(),31);
          strncpy(config.entries[i].referenceFrame,params.entries[i].referenceFrame.c_str(),31);
          strncpy(config.entries[i].sourceBody,params.entries[i].sourceBody.c_str(),31);
          strncpy(config.entries[i].targetBody,params.entries[i].targetBody.c_str(),31);
          config.entries[i].timeOffset =  RapidHelper::aceTimeValue2RapidTime(params.entries[i].timeOffset);
          config.entries[i].period = RapidHelper::aceTimeValue2RapidTime(params.entries[i].period);
        }
      }
    } // namespace arc
  } // namespace ext
} // namespace rapid
