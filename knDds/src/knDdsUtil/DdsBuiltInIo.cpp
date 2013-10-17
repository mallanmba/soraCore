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
#include "DdsBuiltInIo.h"

#include <sstream>

#include <cstdlib>

namespace kn
{
  PrintIp::PrintIp(int i) {
    memcpy (&ip, &i, sizeof(i));
  }

  PrintIp::PrintIp(char const * buffer) {
    memcpy(&ip, buffer, sizeof(ip));
  }
  
  std::ostream& operator<<(std::ostream& ostr, PrintIp const& rhs) 
  {
    ostr << (int)rhs.ip[3] << "." << (int)rhs.ip[2] << "." << (int)rhs.ip[1] << "." << (int)rhs.ip[0];
    return ostr;
  }
  
  std::ostream& operator<<(std::ostream& ostr, DDS_Locator_t const& rhs) 
  {
    std::string kind = "<\?\?\?>";
    if (rhs.kind == DDS_LOCATOR_KIND_UDPv4) {
      kind = "UDPv4";
    }
    else if (rhs.kind == DDS_LOCATOR_KIND_UDPv6) {
      kind = "UDPv6";
    }
    else if (rhs.kind == 2) {
      kind = "SHMEM";
    }
    
    ostr << "protocol: " << rhs.kind << " - " << kind << " ";
    if (kind == "UDPv4") {
      int ip;
      memcpy(&ip, &rhs.address[12], sizeof(ip));
      ostr << PrintIp(ntohl(ip)) << ":" << rhs.port;
    }
    else /* if (kind == "UDPv6") */ {
      for (int j = 0; j < 16; ++j) {
        ostr.width(2);
        ostr.fill('0');
        ostr << std::hex <<(int) rhs.address[j] << " ";
      }
      ostr << std::dec;
    }
    
    return ostr;
  }
  
  std::ostream& operator<<(std::ostream& ostr, DDS_ProductVersion_t const& rhs) 
  {
    ostr << (int)rhs.major << "."
         << (int)rhs.minor << "."
         << (int)rhs.release << "."
         << (int)rhs.revision;
    return ostr;
  }
  
  std::string guidString(DDS_BuiltinTopicKey_t const& key)
  {
    std::stringstream guid;

    guid.width(8);
    guid.fill('0');
    guid << std::hex 
         << key.value[0] << "-";
    guid.width(8);
    guid.fill('0');
    guid << std::hex 
         << key.value[1] << "-";
    guid.width(8);
    guid.fill('0');
    guid << std::hex 
         << key.value[2] << "-";
    guid.width(8);
    guid.fill('0');
    guid << std::hex 
         << key.value[3] << std::dec;

    return guid.str();
  }
}
