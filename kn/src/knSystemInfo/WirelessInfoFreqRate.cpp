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

#include "miro/Log.h"

#include <netinet/in.h>
#include <linux/wireless.h>
#include <sys/ioctl.h>

namespace kn
{
  int
  WirelessInfo::getFreqAndRateInfo(Data& data, const char* iface) const
  {
    int sd;
    if ( (sd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
      MIRO_LOG_OSTR(LL_ERROR, "Error opening socket for device " << AF_INET);
      return -1;
    }   

    struct iwreq iwr;

    strncpy(iwr.ifr_name, iface, IFNAMSIZ); 

    if (ioctl(sd, SIOCGIWFREQ, &iwr) == -1) {
      MIRO_LOG_OSTR( LL_ERROR, "Error calling ioctl for wireless channel on device" << iface);
      close(sd);
      return -1;
    }
    
    if (ioctl(sd, SIOCGIWRATE, &iwr) == -1) {
      MIRO_LOG_OSTR( LL_ERROR, "Error calling ioctl for wireless rate on device " << iface);
      close(sd);
      return -1;
    }

    data.frequency = iwr.u.freq.m / 100000;
    data.bitrate = (iwr.u.bitrate.value / 1000000);
    
    return close(sd);
  }

}
