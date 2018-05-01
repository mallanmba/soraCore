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
#ifndef kn_NetTrafficInfo_h
#define kn_NetTrafficInfo_h

#include "knSystemInfo_Export.h"
#include "knSystemInfo/SystemInfoParameters.h"

#include <vector>

namespace kn
{
  /** Publishes system information: laptop battery, ram/cpu/net usage, ect. to an event channel */ 
  class knSystemInfo_Export NetTrafficInfo
  {
  public:
    struct Data
    {
      unsigned int tx;
      unsigned int rx;
      unsigned int txErrors;
      unsigned int rxErrors;
    };
    typedef std::vector<Data> DataVector;

    NetTrafficInfo(NetTrafficInfoParameters const& params);

    int sampleInfo(DataVector& ifs);
    NetTrafficInfoParameters const& params() const {
      return m_params;
    }

  private:
    int getNetTraffic(Data& interface, unsigned int index);

    NetTrafficInfoParameters m_params;
    DataVector m_lastNetTrafficInfo;
    
    static const int BUFFER_SIZE = 256;
  };
}

#endif // kn_NetTrafficInfo_h
