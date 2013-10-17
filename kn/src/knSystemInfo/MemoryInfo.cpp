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
#include "MemoryInfo.h"
#include "SystemInfoParameters.h"

#include "miro/Log.h"

#include <fstream>

namespace kn
{

  MemoryInfo::MemoryInfo(MemoryInfoParameters const& params) :
    m_params(params),
    m_total(0)
  {
  }
  
  int 
  MemoryInfo::sampleInfo(Data& memory)
  {
    int rc = 0;
    ifstream is(m_params.proc.c_str());

    if (is.is_open()) {
      char buffer[BUFFER_SIZE];
      memset(buffer, 0, BUFFER_SIZE);
      
      memory.free = 0;
      memory.buffers = 0;
      memory.cached  = 0;

      while (!is.eof()) {
        is.getline(buffer, BUFFER_SIZE);

        if (!strncmp(buffer, "MemTotal:", 9)) {
          int i = sscanf(buffer, "MemTotal: %u kB\n", &m_total);
          if (i != 1) {
            MIRO_LOG(LL_ERROR, "Error parsing MemTotal.");
            rc = -1;
          }
        }
        else if (!strncmp(buffer, "MemFree:", 8)) {
          int i = sscanf(buffer, "MemFree: %u kB\n", &memory.free);
          if (i != 1) {
            MIRO_LOG(LL_ERROR, "Error parsing MemFree.");
            rc = -1;
          }
        }
        else if (!strncmp(buffer, "Buffers:", 8)) {
          int i = sscanf(buffer, "Buffers: %u kB\n", &memory.buffers);
          if (i != 1) {
            MIRO_LOG(LL_ERROR, "Error parsing Buffers.");
            rc = -1;
          }
        }
        else if (!strncmp(buffer, "Cached:", 7)) {
          int i = sscanf(buffer, "Cached: %u kB\n", &memory.cached);
          if (i != 1) {
            MIRO_LOG(LL_ERROR, "Error parsing Cached.");
            rc = -1;
          }
        }
      }
    }
    else {
      MIRO_LOG_OSTR(LL_ERROR, "Cannot read " << m_params.proc << ": " << strerror(errno));
      rc = -1;
    }

    return rc;
  }
  
}
