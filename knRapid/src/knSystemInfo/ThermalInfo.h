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
#ifndef kn_ThermalInfo_h
#define kn_ThermalInfo_h

#include "knSystemInfo_Export.h"

#include <vector>

namespace kn
{
  class ThermalParameters;
  class ThermalInfoParameters;
  
  /** Publishes system information: laptop battery, ram/cpu/net usage, ect. to an event channel */ 
  class knSystemInfo_Export ThermalInfo
  {
  public:
    typedef std::vector<float> DataVector;

    ThermalInfo(ThermalInfoParameters const& params);

    int sampleInfo(DataVector& info) const;
   
  private:
    int getTemperature(float& data, ThermalParameters const& params) const;

    ThermalInfoParameters const& m_params;
    
    static const int BUFFER_SIZE = 256;
      };
}

#endif // kn_ThermalInfo_h
