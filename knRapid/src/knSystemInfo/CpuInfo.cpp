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

namespace kn
{
  using namespace std;

  CpuInfo::CpuInfo(CpuInfoParameters const& params) :
    m_params(params),
    m_lastCpuInfo(params.numCpus)
  {
  }
 
  int 
  CpuInfo::getCpu(Data& cpu, unsigned int index)
  {
    const char* proc = m_params.proc.c_str();

    int rc = -1;
    ifstream is(proc);
    
    if (is.is_open()) {
      char buffer[BUFFER_SIZE];
      memset(buffer, 0, BUFFER_SIZE);
      char foundCPU[10];
      memset(foundCPU, 0, 10);
            
      int r = 0;
      stringstream name;
      name << "cpu" << index;
      const char* expectCPU = name.str().c_str();
      
      while ( !is.eof() ) {
        is.getline(buffer, BUFFER_SIZE);
        
        // found the cpu we are looking for       
        if (strncmp(buffer, expectCPU, 4) == 0) { 
          Data cpuInfo;
          r = sscanf(buffer, "%s %u %u %u %u\n",
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
            
            float dSum = ( (cpuInfo.busy - m_lastCpuInfo[index].busy) +
                           (cpuInfo.idle - m_lastCpuInfo[index].idle) );
            
            cpu.user =   (unsigned int)((float)(cpuInfo.user   - m_lastCpuInfo[index].user)   / dSum * 10000);
            cpu.nice =   (unsigned int)((float)(cpuInfo.nice   - m_lastCpuInfo[index].nice)   / dSum * 10000);
            cpu.system = (unsigned int)((float)(cpuInfo.system - m_lastCpuInfo[index].system) / dSum * 10000);
            cpu.idle =   (unsigned int)((float)(cpuInfo.idle   - m_lastCpuInfo[index].idle)   / dSum * 10000);
            cpu.busy =   (unsigned int)((float)(cpuInfo.busy   - m_lastCpuInfo[index].busy)   / dSum * 10000);

            m_lastCpuInfo[index] = cpuInfo;
            
            rc = 0;
          }
          else {
            MIRO_LOG_OSTR(LL_ERROR, "Error parsing cpu info for: " << expectCPU);
          }
          break;  
        }
      }

      if (strncmp(buffer, expectCPU, 4) != 0)
        MIRO_LOG_OSTR(LL_WARNING, expectCPU << " not found!");
    }
    else
      MIRO_LOG_OSTR(LL_ERROR,"Cannot read " << proc << ": " << strerror(errno));
      
    return rc;
  }
  
  int
  CpuInfo::sampleInfo(DataVector& cpus)
  {
    int rc = 0;

    cpus.resize(m_params.numCpus);
    for (unsigned int i = 0; i < m_params.numCpus; ++i) {
      int rc = getCpu(cpus[i], i);
      if (rc != 0)
        break;
    }
    return rc;
  }  
}
