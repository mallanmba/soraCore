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
#include "BatteryInfo.h"
#include "SystemInfoParameters.h"

#include "miro/Log.h"

#include <fstream>

namespace kn
{
  using namespace std;

  BatteryInfo::BatteryInfo(BatteryInfoParameters const& params) :
    m_params(params)
  {}

 
  int
  BatteryInfo::getACStatus() const
  {
    int acStatus = -1;

    // no batteries, ac-adapter
    if (m_params.batteries.empty() ||
        m_params.acAdapter.proc.empty()) {
      acStatus = 0;
    }
    else {
      ifstream info(m_params.acAdapter.proc.c_str());
      if (!info.is_open()) {
        MIRO_LOG_OSTR(LL_ERROR,
                      "Cannot open " << m_params.acAdapter.proc << ": " << strerror(errno));
        return acStatus;
      }
      
      char state[10];
      memset(state, 0, 10);
      char buffer[BUFFER_SIZE];
      memset(buffer, 0 , BUFFER_SIZE);
      
      while (!info.eof()) {
        
        info.getline(buffer, BUFFER_SIZE);
        /*
          state:                   on-line
        */
        
        if (!strncmp(buffer, "state:", 6)) {
          
          int r = sscanf(buffer, "state:                   %10s\n",
                         state);
          if (r == 1) {
            acStatus = (strcmp(state, "on-line") != 0)? 1 : 0;
            break;
          }
        }
      }
    }

    return acStatus;
  }
  
  int
  BatteryInfo::getBattery(Data& battery, BatteryParameters const& params) const
  {
    char infoProc[256];
    char stateProc[256];
    memset(infoProc, '\0', 256);
    memset(stateProc, '\0', 256);
    strcpy(infoProc, m_params.proc.c_str());
    const char * name = params.name.c_str();
    strcat(infoProc, "/");
    strcat(infoProc, name);
    strcpy(stateProc, infoProc);

    strcat(infoProc, "/info");
    ifstream info( infoProc );
    if ( !info.is_open() ) {
      MIRO_LOG_OSTR(LL_ERROR, "Cannot open " << infoProc << ": " << strerror(errno));
      return -1;
    }
    
    strcat(stateProc, "/state");
    ifstream state( stateProc );
    if ( !state.is_open() ) {
      MIRO_LOG_OSTR(LL_ERROR, "Cannot open " << stateProc << ": " << strerror(errno));
      return -1;
    }
        
    char iBuffer[BUFFER_SIZE];
    char sBuffer[BUFFER_SIZE];
    memset(iBuffer, 0, BUFFER_SIZE);
    memset(sBuffer, 0, BUFFER_SIZE);

    // /proc/acpi/battery/BAT#/info
    /*
    present:                 yes
    design capacity:         7800 mAh
    last full capacity:      6985 mAh
    battery technology:      rechargeable
    design voltage:          11100 mV
    design capacity warning: 780 mAh
    design capacity low:     236 mAh
    capacity granularity 1:  78 mAh
    capacity granularity 2:  78 mAh
    model number:            DELL YD6236
    serial number:           1841
    battery type:            LION
    OEM info:                SMP
    */

    // /proc/acpi/battery/BAT#/state
    /*
    present:                 yes
    capacity state:          ok
    charging state:          charged
    present rate:            1 mA
    remaining capacity:      7800 mAh
    present voltage:         12259 mV   
    */
    unsigned int r = 0, batStatus = 0, fullCapacity = 1, remainCapacity = 0;
    char present[6];
    memset(present, 0 , 6);
    
    while ( !info.eof() ) {
      
      info.getline(iBuffer, BUFFER_SIZE);
      
      if ( !strncmp(iBuffer, "present:", 8) ) {
        r = sscanf(iBuffer, "present:                 %6s\n",
                   present);
        
        if ( !strcmp(present, "yes") ) {
          batStatus = 1;
        }
      }

      else if ( !strncmp(iBuffer, "design capacity:", 16) ) {
        r = sscanf(iBuffer, "design capacity:         %u mAh\n",
                   &fullCapacity);
      }
      
    }
        
    if (r < 1) {
      MIRO_LOG_OSTR( LL_ERROR, "Cannot parse: " << infoProc );
      return -1;
    }
    
    r = 0; //reset for correctness in later error determination
    while ( !state.eof() ) {
      state.getline(sBuffer, BUFFER_SIZE);

      if ( !strncmp(sBuffer, "remaining capacity:", 19) ) {
        r = sscanf(sBuffer, "remaining capacity:      %u mAh\n",
                   &remainCapacity);
      }
    }
    
    if (r < 1) {
      MIRO_LOG_OSTR( LL_ERROR, "Cannot parse " << stateProc << ": " << remainCapacity);
      return -1;
    }
    
    //    if (m_veryVerbose)
    //  MIRO_LOG_OSTR( LL_NOTICE, name << " parsed (" << remainCapacity << "/" << fullCapacity << ")");
    battery.batteryStatus = batStatus;
    battery.percentage = (float)remainCapacity / fullCapacity;
    return 0;
  }
  
  int
  BatteryInfo::sampleInfo(DataVector& batteries)
  {
    int rc = 0;
    m_acStatus = getACStatus();

    batteries.resize(m_params.batteries.size());
    for (unsigned int i = 0; i < m_params.batteries.size(); ++i) {
      rc = getBattery(batteries[i], m_params.batteries[i]);
      if (rc < 0) {
        batteries.clear();
        break;
      }
    }
    return std::min(rc, m_acStatus);
  }
}
