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
#ifndef kn_MemoryInfo_h
#define kn_MemoryInfo_h

#include "knSystemInfo_Export.h"
#include "knSystemInfo/SystemInfoParameters.h"


namespace kn
{
  /** Publishes system information: laptop battery, ram/cpu/net usage, ect. to an event channel */ 
  class knSystemInfo_Export MemoryInfo
  {
  public:
    struct Data
    {
      unsigned int cached;
      unsigned int buffers;
      unsigned int free;
      unsigned int available;
      unsigned int swap;
    };

    MemoryInfo(MemoryInfoParameters const& params);

    unsigned int totalMemory() const throw() { return m_total; }
    int sampleInfo(Data& memory);
    
  private:
    MemoryInfoParameters m_params;
    unsigned int m_total;
    
    static const int BUFFER_SIZE = 256;
  };
}

#endif // kn_MemoryInfo_h
