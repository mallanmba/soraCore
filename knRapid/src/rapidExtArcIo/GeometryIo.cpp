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
#include "GeometryIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidExtArcIo/RapidExtArcIoParameters.h"

#include "rapidExtArcDds/GeometryConfig.h"

#include <iostream>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      using namespace std;
      
      ostream& operator<< (ostream& ostr, GeometryConfig const& rhs)
      {
        ostr << "GeometryConfig: {" 
             << rhs.hdr << ", " 
             << rhs.geometryId << ", " 
             << rhs.geometryName << ", "
             << rhs.refFrame << ","
             << rhs.metaData
             << "}";
        return ostr;
      }
      
      void operator <<= (GeometryConfig& config, GeometryConfigParameters const& params)
      {
        config.hdr <<= params.hdr;
        
        config.geometryId = params.geometryId;
        strncpy(config.geometryName, params.geometryName.c_str(), 127);
        config.geometryName[127] = 0;
        strncpy(config.refFrame, params.refFrame.c_str(), 31);
        config.refFrame[31] = 0;
        
        config.metaData <<= params.metaData;
      }
    }
  }
} // namespace rapid
