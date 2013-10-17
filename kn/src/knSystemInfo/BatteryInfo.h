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
#ifndef kn_Battery_Info_h
#define kn_Battery_Info_h

#include "knSystemInfo_Export.h"

#include <vector>

namespace kn
{
  class BatteryParameters;
  class BatteryInfoParameters;
  
  /** laptop battery information */ 
  class knSystemInfo_Export BatteryInfo 
  {
  public:
    struct Data
    {
      int batteryStatus;
      float percentage;
    };
    typedef std::vector<Data> DataVector;

    BatteryInfo(BatteryInfoParameters const& params);

    int acStatus() const throw() { return m_acStatus; }
    int sampleInfo(DataVector& batteries);

  private:
    int getACStatus() const;
    int getBattery(Data& bat, BatteryParameters const& params) const;

    BatteryInfoParameters const& m_params;
    int m_acStatus;

    static int const BUFFER_SIZE = 256;
  };
}

#endif // kn_Battery_Info_h
