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
#ifndef kn_FilesystemInfo_h
#define kn_FilesystemInfo_h

#include "knSystemInfo_Export.h"
#include "knSystemInfo/SystemInfoParameters.h"

#include <vector>
#include <string>

namespace kn
{
  /** Publishes system information: laptop battery, ram/cpu/net usage, ect. to an event channel */ 
  class knSystemInfo_Export FilesystemInfo
  {
  public:
    struct Data
    {
      unsigned long long capacity;
      unsigned long long used;
      unsigned long long available;
    };
    typedef std::vector<Data> DataVector;
    typedef std::vector<std::string> StringVector;

    FilesystemInfo(FilesystemInfoParameters const& params);

    int sampleInfo(DataVector& ifs);
    FilesystemInfoParameters const& params() const {
      return m_params;
    }

  private:
    int getFilesystem(Data& info, unsigned int index);
    std::vector< FilesystemParameters > collectFileSystems(const std::vector< std::string >& volumeNames);

    FilesystemInfoParameters m_params;
    
    static const int BUFFER_SIZE = 256;
  };
}

#endif // kn_FilesystemInfo_h
