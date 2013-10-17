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
#ifndef kn_BatteryInfo_h
#define kn_BatteryInfo_h

#include "knSystemInfo_Export.h"

#include <vector>

namespace kn
{
  class CpuParameters;
  class CpuInfoParameters;
  
  /** Publishes system information: laptop battery, ram/cpu/net usage, ect. to an event channel */ 
  class knSystemInfo_Export CpuInfo
  {
  public:
    struct Data
    {
      unsigned int user;
      unsigned int nice;
      unsigned int system;
      unsigned int idle;
      unsigned int busy;
    };
    typedef std::vector<Data> DataVector;
    
    CpuInfo(CpuInfoParameters const& params);

    int sampleInfo(DataVector& cpus);

  private:
    int getCpu(Data& cpu, unsigned int index);

    CpuInfoParameters const& m_params;
    DataVector m_lastCpuInfo;
    
    static int const BUFFER_SIZE = 256;
  };
}

#endif // kn_svcs_SystemInfoSvc_h
