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
#ifndef kn_SystemInfo_h
#define kn_SystemInfo_h

#include "knSystemInfo_Export.h"

#include "BatteryInfo.h"
#include "CpuInfo.h"
#include "FilesystemInfo.h"
#include "MemoryInfo.h"
#include "NetTrafficInfo.h"
#include "ThermalInfo.h"
#include "WirelessInfo.h"

namespace kn
{
  class SystemInfoParameters;

  class knSystemInfo_Export SystemInfo
  {
  public:
    SystemInfo(SystemInfoParameters const& params);

    SystemInfoParameters const& params() const throw() { return m_params; }

    BatteryInfo& batteryInfo() throw() { return m_batteryInfo; }
    CpuInfo& cpuInfo() throw() { return m_cpuInfo; }
    FilesystemInfo& filesystemInfo() throw() { return m_filesystemInfo; }
    MemoryInfo& memoryInfo() throw() { return m_memoryInfo; }
    NetTrafficInfo& netTrafficInfo() throw() { return m_netTrafficInfo; }
    ThermalInfo& thermalInfo() throw() { return m_thermalInfo; }
    WirelessInfo& wirelessInfo() throw() { return m_wirelessInfo; }
   
    BatteryInfo::DataVector const& batteryData() const throw() { return m_batteryData; }
    CpuInfo::DataVector const& cpuData() const throw() { return m_cpuData; }
    FilesystemInfo::DataVector const& filesystemData() const throw() { return m_filesystemData; }
    MemoryInfo::Data const& memoryData() const throw() { return m_memoryData; }
    NetTrafficInfo::DataVector const& netTrafficData() const throw() { return m_netTrafficData; }
    ThermalInfo::DataVector const& thermalData() const throw() { return m_thermalData; }
    WirelessInfo::DataVector const& wirelessData() const throw() { return m_wirelessData; }

    int update();

  private:
    SystemInfoParameters const& m_params;

    BatteryInfo m_batteryInfo;
    CpuInfo m_cpuInfo;
    FilesystemInfo m_filesystemInfo;
    MemoryInfo m_memoryInfo;
    NetTrafficInfo m_netTrafficInfo;
    ThermalInfo m_thermalInfo;
    WirelessInfo m_wirelessInfo;

    BatteryInfo::DataVector m_batteryData;
    CpuInfo::DataVector m_cpuData;
    FilesystemInfo::DataVector m_filesystemData;
    MemoryInfo::Data m_memoryData;
    NetTrafficInfo::DataVector m_netTrafficData;
    ThermalInfo::DataVector m_thermalData;
    WirelessInfo::DataVector m_wirelessData;
  };
}

#endif // kn_SystemInfo_h
