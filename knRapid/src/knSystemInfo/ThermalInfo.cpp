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
#include "ThermalInfo.h"
#include "SystemInfoParameters.h"

#include "miro/Log.h"

#include <fstream>

namespace kn
{
  using namespace std;

  ThermalInfo::ThermalInfo(ThermalInfoParameters const& params) :
    m_params(params)
  {
  }
 
  int
  ThermalInfo::getTemperature(float& data, ThermalParameters const& params) const
  {
    int rc = -1;

    char proc[64];
    memset(proc, '\0', 64);
    const char * procBase = m_params.proc.c_str(); 
    const char * id = params.id.c_str();
    strcpy(proc, procBase);
    strcat(proc, "/");
    strcat(proc, id);
    strcat(proc, "/temperature");
          
    ifstream is(proc);
    if (is.is_open()) {
      char buffer[BUFFER_SIZE];
      memset(buffer, 0, BUFFER_SIZE);
      
      int r = 0;
      while(!is.eof()) {        
        is.getline(buffer, BUFFER_SIZE);
        
        int currentTemp;
        
        /* temperature:             53 C */

        if (!strncmp(buffer, "temperature:", 12)) {
          r = sscanf(buffer, "temperature: %d C",
                     &currentTemp);
          
          if (r == 1) {
            data = currentTemp;
            rc = 0;
          }
          break;          
        }
      }

      if (rc == -1) {
        MIRO_LOG_OSTR(LL_WARNING, "Temperature " << params.location << " not found!");
      }
    }
    else {
      MIRO_LOG_OSTR(LL_ERROR, "Cannot read " << proc << ": " << strerror(errno));
    }

    return rc;
  }
  
  int
  ThermalInfo::sampleInfo(DataVector& info) const
  {
    int rc = 0;
    
    info.resize(m_params.sensors.size());
    for (unsigned int i = 0; i < info.size(); ++i) {
      rc = getTemperature(info[i], m_params.sensors[i]);
      if (rc != 0) {
        MIRO_LOG_OSTR(LL_WARNING, "Obtaining " << m_params.sensors[i].location << " temperature failed!");
        break;
      }
    }
    
    return rc;
  }
  
}
