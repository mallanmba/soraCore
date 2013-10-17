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
#include "WirelessInfo.h"
#include "SystemInfoParameters.h"

#include "miro/Log.h"

#include <net/if.h>

#include <fstream>

namespace kn
{  
  WirelessInfo::WirelessInfo(WirelessInfoParameters const& params) :
    m_params(params)
  {}

  int
  WirelessInfo::getInterfaceInfo(Data& data, WirelessParameters const&  params) const
  {
    int rc = -1;

    ifstream dataStream(m_params.proc.c_str());
    if (dataStream.is_open()) {
      char iface[IFNAMSIZ];
      char buffer[BUFFER_SIZE];
      int r = 0;
    
      memset(iface, 0, IFNAMSIZ);
      memset(buffer, 0, BUFFER_SIZE);
    
      // first two lines are header information
      dataStream.getline(buffer, BUFFER_SIZE);
      dataStream.getline(buffer, BUFFER_SIZE);
      while (!dataStream.eof()) {
        dataStream.getline(buffer, BUFFER_SIZE);
        
       /* device
        * status
        * link
        * level
        * noise
        * discarded pakets: nwid
        * discarded pakets: crypt
        * discarded pakets: frag
        * discarded pakets: retry
        * discarded pakets: misc
        * beacon missed 
        */
        
        r = sscanf(buffer, " %s %*s %u . %u . %u . %*d %*d %*d %*d %*d %*d\n",
                  iface,
                  &data.linkQuality,
                  &data.signalLevel,
                  &data.noiseLevel);
        
        if (strlen(iface) > 0)
          iface[strlen(iface) - 1] = '\0';
        if (strcasecmp(iface, params.name.c_str()) == 0) {
          if (r == 4) {
            rc = getFreqAndRateInfo(data, params.name.c_str());
          }
          else {
            MIRO_LOG_OSTR(LL_ERROR, "Error parsing device " << params.name << " in /proc/net/wireless" );
          }
          break;
        }
      }

      if (strcasecmp(iface, params.name.c_str()) != 0)
        MIRO_LOG_OSTR(LL_ERROR, "Error locating device " << params.name << " in /proc/net/wireless" );
    }
    else {
      MIRO_LOG_OSTR(LL_ERROR, "Could not open /proc/net/wireless");
    }
    return rc;
  }
  
  int
  WirelessInfo::sampleInfo(DataVector& interfaces) const
  {
    int rc = 0;
    
    interfaces.resize(m_params.interfaces.size() );
    for (unsigned int i = 0; i < interfaces.size(); ++i) {
      rc = getInterfaceInfo(interfaces[i], m_params.interfaces[i]);
      if (rc != 0) {
        MIRO_LOG_OSTR( LL_ERROR, "Error obtaining wireless info for " << m_params.interfaces[i].name);
        break;
      }
    }
    
    return rc;
  }    

}
