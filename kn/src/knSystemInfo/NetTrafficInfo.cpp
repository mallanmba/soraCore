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
#include "NetTrafficInfo.h"
#include "SystemInfoParameters.h"

#include "miro/Log.h"

#include <net/if.h>

#include <fstream>

namespace kn
{
  using namespace std;

  NetTrafficInfo::NetTrafficInfo(NetTrafficInfoParameters const& params) :
    m_params(params),
    m_lastNetTrafficInfo(params.interfaces.size())
  {}

  
  int 
  NetTrafficInfo::getNetTraffic(Data& interface, unsigned int index)
  {
    const char* name = m_params.interfaces[index].name.c_str();
    const char* proc = m_params.proc.c_str();
    
    int rc = -1;
    ifstream is(proc);
    if ( is.is_open() ) {

      Data info;
      
      char iface[IFNAMSIZ];
      char buffer[BUFFER_SIZE];
      memset(iface, 0, IFNAMSIZ);
      memset(buffer, 0, BUFFER_SIZE);
      
      int r = 0;
      
      char const* expectIface = name;
      
      while ( !is.eof() ) {
        is.getline(buffer, BUFFER_SIZE);
        
        //strip first found colon
        char* p = buffer;
        while (*p) {
          if (*p == ':') {
            *p = ' ';
            break;
          }
          ++p;
        }
        
        //scan parsed buffer for iface name
        r = sscanf(buffer, "%s %*d", iface);
        
        if ( (r == 1) && !strncmp(iface, expectIface, 4) ) {
          
          /* interface
          * receive: bytes
          * receive: packets
          * receive: errors
          * receive: dropped
          * receive: fifo
          * receive: frame
          * receive: compressed
          * receive: multicast
          * transmit: bytes
          * transmit: packets
          * transmit: errors
          * transmit: dropped
          * transmit: fifo
          * transmit: collisions
          * transmit: carrier
          * transmit: compressed
          */
          
          r = sscanf(buffer, " %*s %u %*d %u %*d %*d %*d %*d %*d %u %*d %u %*d %*d %*d %*d %*d\n",
                     &info.rx,
                     &info.rxErrors,
                     &info.tx,
                     &info.txErrors);
          
          if ( (r == 4) && !strcasecmp(iface, expectIface) ) {
            
            interface.rx = (info.rx - m_lastNetTrafficInfo[index].rx) / 1024 * 8; // kbps
            interface.tx = (info.tx - m_lastNetTrafficInfo[index].tx) / 1024 * 8; // kbps
            interface.rxErrors = (info.rxErrors - m_lastNetTrafficInfo[index].rxErrors); // packets
            interface.txErrors = (info.txErrors - m_lastNetTrafficInfo[index].txErrors); // packets
  
            m_lastNetTrafficInfo[index] = info;
            rc = 0;
          }
          else {
            MIRO_LOG_OSTR(LL_ERROR, "Error parsing net-traffic info:" << expectIface);
          }
          break;
        }
      }
      if (rc == -1)
        MIRO_LOG_OSTR(LL_WARNING, expectIface << " not found!");
    }
    else {
      MIRO_LOG_OSTR(LL_ERROR,"Cannot read " << proc << ": " << strerror(errno));
    }
    
    return rc;
  }
  
  int
  NetTrafficInfo::sampleInfo(DataVector& ifs)
  {
    int rc = 0;
    unsigned int const numInterfaces = m_params.interfaces.size();

    ifs.resize( numInterfaces );
    for (unsigned int i = 0; i < numInterfaces; ++i) {
      rc = getNetTraffic(ifs[i], i);
      if (rc != 0)
        break;
    }
    return rc;
  } 
}
