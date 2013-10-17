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
#ifndef kn_WifiInfo_h
#define kn_WifiInfo_h

#include <vector>

namespace kn
{    
  class WirelessParameters;
  class WirelessInfoParameters;

  /** Acquires wireless interface(s) information */
  class WirelessInfo
  {
  public:
    struct Data
    {
      unsigned int linkQuality;
      unsigned int signalLevel;
      unsigned int noiseLevel;
      
      /** From ioctl(sockDescr, SIOCGIWFREQ).  Units are GHz 
       * for the K10 system, but may vary on other platforms. */
      float frequency;
      
      /** From ioctl(sockDescr, SIOCGIWRATE). Units are Mb/s 
       * for the K10 system, but may vary on other platforms. */
      float bitrate;
    };
    typedef std::vector<Data> DataVector;

    WirelessInfo(WirelessInfoParameters const& params);
    
    /** Acquires information for all configured wireless interfaces
     * \param wifiInfo is populated with all wifi info \ref gri::WifiInfoSeq
     * \returns number of interface info acquire failures */
    int sampleInfo(DataVector& interfaces) const;

  private:
    /** Acquires frequency and rate information through ioctl(sockDescr, ... )
     * \param iface specifies unique interface identifier
     * \param freq is populated with iface's current frequency
     * \param rate is populated with iface's current bitrate
     * \returns int \retval 0: success \retval -1: error */
    int getFreqAndRateInfo(Data& data, char const * name) const;

    /** Acquires information for a single wireless interface
     * \param expectDevice contains the interface name
     * \param proc contains the proc location to read from
     * \param info is populated with interface info \ref gri::WifiInfoSeq indexed by i
     * \param i index
     * \returns int \retval 0: success \retval 1: error */
    int getInterfaceInfo(Data& data, WirelessParameters const& params) const;
    

    WirelessInfoParameters const& m_params;

    static const int BUFFER_SIZE = 256;
  };
}

#endif // kn_WifiInfo_h
