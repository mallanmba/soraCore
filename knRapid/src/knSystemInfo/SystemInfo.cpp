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
#include "SystemInfo.h"
#include "SystemInfoParameters.h"

namespace kn
{
  using namespace std;

  SystemInfo::SystemInfo(SystemInfoParameters const& params) :
    m_params(params),
    m_batteryInfo(params.batteryInfo),
    m_cpuInfo(params.cpuInfo),
    m_filesystemInfo(params.filesystemInfo),
    m_memoryInfo(params.memoryInfo),
    m_netTrafficInfo(params.netTrafficInfo),
    m_thermalInfo(params.thermalInfo),
    m_wirelessInfo(params.wirelessInfo)
  {
  }

  int
  SystemInfo::update()
  {
    int rc = 0;

    if ( m_batteryInfo.sampleInfo(m_batteryData) != 0 ||
         m_cpuInfo.sampleInfo(m_cpuData) != 0 ||
         m_filesystemInfo.sampleInfo(m_filesystemData) != 0 ||
         m_memoryInfo.sampleInfo(m_memoryData) != 0 ||
         m_netTrafficInfo.sampleInfo(m_netTrafficData) != 0 ||
         m_thermalInfo.sampleInfo(m_thermalData) != 0 ||
         m_wirelessInfo.sampleInfo(m_wirelessData) ) {
      rc = -1;
    } 
    return rc;
  }
}
