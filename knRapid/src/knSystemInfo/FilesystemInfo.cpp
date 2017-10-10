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
#include "FilesystemInfo.h"
#include "SystemInfoParameters.h"

#include "miro/Log.h"

#include <sys/statvfs.h>

#include <fstream>

namespace kn
{
  using namespace std;

  FilesystemInfo::FilesystemInfo(FilesystemInfoParameters const& params) :
    m_params(params)
  {
    if (params.volumes.empty()) {
      m_params.volumes = this->collectFileSystems();

    }
  }

  
  int 
  FilesystemInfo::getFilesystem(Data& info, unsigned int index)
  {
    const char* name = m_params.volumes[index].name.c_str();
    struct statvfs buffer;

    int rc = statvfs(m_params.volumes[index].path.c_str(), &buffer);
    if (rc == 0) {
    
      info.capacity = (long long) buffer.f_frsize * buffer.f_blocks;
      info.used =  info.capacity - (long long) buffer.f_frsize * buffer.f_bfree;
      info.available =  (long long) buffer.f_frsize * buffer.f_bavail;

    }
    else {
      MIRO_LOG_OSTR(LL_ERROR,"Error reading filesystem information for " << name << ": " << strerror(errno));
    }
    
    return rc;
  }
  
  int
  FilesystemInfo::sampleInfo(DataVector& ifs)
  {
    int rc = 0;
    unsigned int const numInterfaces = m_params.volumes.size();

    ifs.resize( numInterfaces );
    for (unsigned int i = 0; i < numInterfaces; ++i) {
      rc = getFilesystem(ifs[i], i);
      if (rc != 0)
        break;
    }
    return rc;
  } 

  std::vector<FilesystemParameters> FilesystemInfo::collectFileSystems()
  {
    vector<FilesystemParameters> volumes;

    std::ifstream is("/proc/mounts");
    string line;
    while (is.good() && ! is.eof()) {
      std::getline(is, line);
      if (line.substr(0, 5) != "/dev/") {
        continue;
      }

      FilesystemParameters volume;
      stringstream sstr(line);
      sstr >> volume.name;
      sstr >> volume.path;

      volumes.push_back(volume);
    }

    return volumes;
  }

}
