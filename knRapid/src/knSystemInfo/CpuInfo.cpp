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
#include "CpuInfo.h"
#include "SystemInfoParameters.h"

#include "miro/Log.h"

#include <fstream>
#include <sstream>
#include <string>

namespace kn
{
  using namespace std;

  CpuInfo::CpuInfo(CpuInfoParameters const& params) :
    m_params(params),
    m_lastCpuInfo(params.numCpus)
  {
    if (m_params.numCpus == 0) {
      m_params.numCpus = numCpus();
      m_lastCpuInfo.resize(m_params.numCpus);
    }



  }

  int
  CpuInfo::sampleInfo(DataVector& cpus)
  {
    cpus.resize(m_params.numCpus);

    const char* proc = m_params.proc.c_str();
    char foundCPU[64];

    int rc = -1;
    ifstream is(proc);
    
    if (is.is_open()) {
      string line;

      for (size_t i = 0; i < m_params.numCpus; ++i) {
        if (is.eof()) {
          break;
        }
        std::getline(is, line);
        
        if (line.substr(0, 3) != "cpu") {
          break;
        }

        Data cpuInfo;
        int r = sscanf(line.c_str(), "%s %u %u %u %u\n",
                       foundCPU,
                       &cpuInfo.user,
                       &cpuInfo.nice,
                       &cpuInfo.system,
                       &cpuInfo.idle);
          
        if ( r == 5 ) {
          cpuInfo.busy =
          cpuInfo.user +
          cpuInfo.system +
          cpuInfo.nice;

          float dSum = ( (cpuInfo.busy - m_lastCpuInfo[i].busy) +
            (cpuInfo.idle - m_lastCpuInfo[i].idle) );
            
          cpus[i].name = foundCPU;
          cpus[i].user =   (unsigned int)((float)(cpuInfo.user   - m_lastCpuInfo[i].user)   / dSum * 10000);
          cpus[i].nice =   (unsigned int)((float)(cpuInfo.nice   - m_lastCpuInfo[i].nice)   / dSum * 10000);
          cpus[i].system = (unsigned int)((float)(cpuInfo.system - m_lastCpuInfo[i].system) / dSum * 10000);
          cpus[i].idle =   (unsigned int)((float)(cpuInfo.idle   - m_lastCpuInfo[i].idle)   / dSum * 10000);
          cpus[i].busy =   (unsigned int)((float)(cpuInfo.busy   - m_lastCpuInfo[i].busy)   / dSum * 10000);

          m_lastCpuInfo[i] = cpuInfo;

          rc = 0;
        }
        else {
          MIRO_LOG_OSTR(LL_ERROR, "Error parsing cpu info for: " << i);
        }
      }
    }
    else
      MIRO_LOG_OSTR(LL_ERROR,"Cannot read " << proc << ": " << strerror(errno));
      
    return rc;
  }

  int CpuInfo::numCpus()
  {
    int cnt = 0;
    const char* proc = m_params.proc.c_str();

    ifstream is(proc);
    if (is.is_open()) {

      string line;
      while (!is.eof()) {
        if (!getline(is, line)) {
          break;
        }

        if (line.substr(0, 3) != "cpu") {
          break;
        }
        ++cnt;
      }
    }
    return cnt;
  }

}
