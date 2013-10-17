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
#include "SystemInfoSvc.h"
#include "SystemInfoSvcParameters.h"

#include "knSystemInfo/SystemInfo.h"

#include "rapidExtDds/ExtConstants.h"
#include "rapidExtDds/SystemInfoSample.h"
#include "rapidExtDds/SystemInfoSampleSupport.h"
#include "rapidExtDds/SystemInfoConfig.h"
#include "rapidExtDds/SystemInfoConfigSupport.h"
#include "rapidUtil/RapidHelper.h"

#include "miro/Log.h"
#include "miro/Configuration.h"
#include "miro/TimeHelper.h"
#include "knDds/DdsTypedSupplier.h"

#include <ace/OS_NS_string.h>
#include <ace/Dynamic_Service.h>
#include <ace/Get_Opt.h>
#include <ace/ACE.h>

namespace kn
{
  using namespace std;
  using namespace rapid;

  SystemInfoSvc::SystemInfoSvc() :
    m_params(SystemInfoSvcParameters::instance()),
    m_configSupplier(NULL),
    m_sampleSupplier(NULL),
    m_systemInfo(NULL),
    m_timerId(-1),
    m_verbose(0),
    m_errorCounter(0)
  {
    MIRO_LOG_CTOR("kn::SystemInfoSvc");
  }

  SystemInfoSvc::~SystemInfoSvc()
  {
    MIRO_LOG_DTOR("kn::SystemInfoSvc");
  }

  int
  SystemInfoSvc::init(int argc, ACE_TCHAR *argv[])
  {
    MIRO_LOG(LL_NOTICE, "kn::SystemInfoSvc::init()");

    // parsing the arguments
    if (parseArgs(argc, argv) != 0)
      return -1;

    m_configSupplier = 
      new ConfigSupplier(rapid::ext::SYSTEMINFO_CONFIG_TOPIC + m_params->topicSuffix, 
                         "", "RapidConfigQos");
    m_sampleSupplier =
      new SampleSupplier(rapid::ext::SYSTEMINFO_SAMPLE_TOPIC + m_params->topicSuffix,
                         "", "RapidSampleQos");
    m_systemInfo = new SystemInfo(*m_params);

    rapid::ext::SystemInfoConfig& config = m_configSupplier->event();
    rapid::ext::SystemInfoSample& sample = m_sampleSupplier->event();

    // init hdr's
    RapidHelper::initHeader(config.hdr);
    RapidHelper::initHeader(sample.hdr);

    // initialize systeminfo's
    if (m_systemInfo->update() != 0)
      return -1;

    // register the timer for system status polling
    m_timerId = 
      reactor()->schedule_timer(this, 
                                NULL,                      // no arg passed to handler
                                m_params->updateInterval,  // initial delay
                                m_params->updateInterval); // subsequent delay period
    if (m_timerId == -1) {
      MIRO_LOG(LL_ERROR, "ERROR: SystemInfoSvc::init() failed to register poll timer.");
      return -1;
    }

    // @TODO
    // init config
    collectConfigData(config);
    m_configSupplier->sendEvent();

    this->activate();
  
    return 0;
  }

  int 
  SystemInfoSvc::info(ACE_TCHAR **bufferp, size_t len) const
  {
    MIRO_LOG(LL_NOTICE, "kn::SystemInfoSvc::info()");

    static const char i[] = "Rapid System Info Service \n";

    if (*bufferp == 0)
      *bufferp = ACE::strnew(i);
    else 
      ACE_OS_String::strncpy(*bufferp, i, len);

    return ACE_OS_String::strlen(*bufferp);
  }
   
  int 
  SystemInfoSvc::fini()
  {
    // deregister the update timer
    if (m_timerId != -1)
      reactor()->cancel_timer(m_timerId);
    m_timerId = -1;
    
    ACE_Thread_Manager * mgr = this->thr_mgr();
    if (mgr != NULL) {
      mgr->cancel_task(this);
      this->wait();
    }

    m_errorCounter = 0;
    
    delete m_systemInfo;
    delete m_sampleSupplier;
    delete m_configSupplier;

    MIRO_LOG(LL_NOTICE, "kn::SystemInfoSvc::fini() done");

    return 0;
  }
  
  int
  SystemInfoSvc::handle_timeout(const ACE_Time_Value& now, const void* clientArg)
  {
    int rc = m_systemInfo->update();

    if (rc == 0) {
      rapid::ext::SystemInfoSample& sample = m_sampleSupplier->event();

      RapidHelper::updateHeader(sample.hdr);
      collectSampleData(sample);
      m_sampleSupplier->sendEvent();
      m_errorCounter = 0;
    }
    else {
      if (m_errorCounter % 10 == 0) {
        MIRO_LOG(LL_ERROR, "SystemInfoSvc: failed to obtain system state.");
      }
      ++m_errorCounter;


      if (m_errorCounter > 100) {
        MIRO_LOG(LL_CRITICAL, "SystemInfoSvc: countinously failed to obtain system state. Shutting down system info.");
      }
    }

    return (m_errorCounter > 100)? -1 : 0;
  }
    
  int
  SystemInfoSvc::parseArgs(int& argc, char* argv[])
  {
    int rc = 0;
    int c;

    // initialize parameters with global instance
    m_params = SystemInfoSvcParameters::instance();
    // reset defaults
    SystemInfoSvcParameters default_params;
    *m_params = default_params;

    // initialize parameters from config file
    Miro::ConfigDocument * config = Miro::Configuration::document();
    config->setSection("Rapid");
    config->getParameters("kn::SystemInfoSvcParameters", *m_params);

    // initialize parameters from command line
    ACE_Get_Opt get_opts (argc, argv, "r:v?");
  
    while ((c = get_opts()) != -1) {
      switch (c) {
        case 'r':
          m_params->refreshInterval.set(atof(get_opts.optarg));
        case 'v':
	        ++m_verbose;
	        break;
        case '?':
        default:
          cerr << "usage: " << argv[0] << "[-r interval] [-vV?]" << endl
              << "  -r [interval] how often to refresh info (default: 1s)" << endl
              << "  -v verbose mode" << endl
              << "  -? help: emit this text and stop" << endl;
          rc = 1;
      }
    }
    
    if (m_verbose) {
      cerr << "SystemInfoSvc parameters:" << endl
           << *m_params << endl;
    }
    return rc;
  }

  void 
  SystemInfoSvc::collectConfigData(rapid::ext::SystemInfoConfig& config) const
  {
    config.batteries.length(m_params->batteryInfo.batteries.size());
    for (int i = 0; i < config.batteries.length(); ++i) {
      strncpy(config.batteries[i].name, m_params->batteryInfo.batteries[i].name.c_str(), 32);
      config.batteries[i].name[31] = 0;
      config.batteries[i].percentageLow = m_params->batteryInfo.batteries[i].percentageLow;
      config.batteries[i].percentageCritical = m_params->batteryInfo.batteries[i].percentageCritical;
    }

    config.cpus.numCpus = m_params->cpuInfo.numCpus;
    config.cpus.busyHigh = m_params->cpuInfo.busyHigh;
    config.cpus.busyCritical = m_params->cpuInfo.busyCritical;

    config.memory.total = m_systemInfo->memoryInfo().totalMemory();
    config.memory.memoryLow = m_params->memoryInfo.memoryLow;
    config.memory.memoryCritical = m_params->memoryInfo.memoryCritical;


    config.filesystems.length(m_params->filesystemInfo.volumes.size());
    for (int i = 0; i < config.filesystems.length(); ++i) {
      strncpy(config.filesystems[i].name, m_params->filesystemInfo.volumes[i].name.c_str(), 32);
      config.filesystems[i].name[31] = 0;
      config.filesystems[i].capacity = m_systemInfo->filesystemData()[i].capacity;
      config.filesystems[i].availableLow = m_params->filesystemInfo.volumes[i].availableLow;
      config.filesystems[i].availableCritical = m_params->filesystemInfo.volumes[i].availableCritical;
    }

    config.netInterfaces.length(m_params->netTrafficInfo.interfaces.size());
    for (int i = 0; i < config.netInterfaces.length(); ++i) {
      strncpy(config.netInterfaces[i].name, m_params->netTrafficInfo.interfaces[i].name.c_str(), 32);
      config.netInterfaces[i].name[31] = 0;
      config.netInterfaces[i].rxBandwidth = m_params->netTrafficInfo.interfaces[i].rxBandwidth;
      config.netInterfaces[i].txBandwidth = m_params->netTrafficInfo.interfaces[i].txBandwidth;
      config.netInterfaces[i].rxHigh = m_params->netTrafficInfo.interfaces[i].rxHigh;
      config.netInterfaces[i].txHigh = m_params->netTrafficInfo.interfaces[i].txHigh;
      config.netInterfaces[i].rxCritical = m_params->netTrafficInfo.interfaces[i].rxCritical;
      config.netInterfaces[i].txCritical = m_params->netTrafficInfo.interfaces[i].txCritical;
    }

    config.temperatures.length(m_params->thermalInfo.sensors.size());
    for (int i = 0; i < config.temperatures.length(); ++i) {
      strncpy(config.temperatures[i].location, m_params->thermalInfo.sensors[i].location.c_str(), 32);
      config.temperatures[i].location[31] = 0;
      config.temperatures[i].temperatureLow = m_params->thermalInfo.sensors[i].temperatureLow;
      config.temperatures[i].temperatureHigh = m_params->thermalInfo.sensors[i].temperatureHigh;
      config.temperatures[i].temperatureLowCritical = m_params->thermalInfo.sensors[i].temperatureLowCritical;
      config.temperatures[i].temperatureHighCritical = m_params->thermalInfo.sensors[i].temperatureHighCritical;
    }

    config.wifiInterfaces.length(m_params->wirelessInfo.interfaces.size());
    for (int i = 0; i < config.wifiInterfaces.length(); ++i) {
      strncpy(config.wifiInterfaces[i].name, m_params->wirelessInfo.interfaces[i].name.c_str(), 32);
      config.wifiInterfaces[i].name[31] = 0;
      config.wifiInterfaces[i].qualityLow = m_params->wirelessInfo.interfaces[i].qualityLow;
      config.wifiInterfaces[i].qualityCritical = m_params->wirelessInfo.interfaces[i].qualityCritical;
    }
  }
  
  void 
  SystemInfoSvc::collectSampleData(rapid::ext::SystemInfoSample& info) const
  {
    info.batteries.length(m_params->batteryInfo.batteries.size());
    for (int i = 0; i < info.batteries.length(); ++i) {
      BatteryInfo::Data const& data = m_systemInfo->batteryData()[i];
      rapid::ext::BatteryInfoSample& sample = info.batteries[i];

      sample.acStatus = m_systemInfo->batteryInfo().acStatus();
      sample.batteryStatus = data.batteryStatus;
      sample.percentage = data.percentage;
    }

    info.cpus.length(m_params->cpuInfo.numCpus);
    for (int i = 0; i < info.cpus.length(); ++i) {
      CpuInfo::Data const& data = m_systemInfo->cpuData()[i];
      rapid::ext::CpuInfoSample& sample = info.cpus[i];

      sample.user = data.user / 10000.;
      sample.nice = data.nice / 10000.;
      sample.system = data.system / 10000.;
      sample.busy = data.busy / 10000.;
      sample.idle = data.idle / 10000.;
    }

    info.filesystems.length(m_params->filesystemInfo.volumes.size());
    for (int i = 0; i < info.filesystems.length(); ++i) {
      FilesystemInfo::Data const& data = m_systemInfo->filesystemData()[i];
      rapid::ext::FilesystemInfoSample& sample = info.filesystems[i];

      sample.used = data.used;
      sample.available = data.available;
    }

    {
      MemoryInfo::Data const& data = m_systemInfo->memoryData();
      info.memory.buffers = data.buffers;
      info.memory.cached = data.cached;
      info.memory.free = data.free;
      info.memory.swap = data.swap;
    }

    info.netInterfaces.length(m_params->netTrafficInfo.interfaces.size());
    for (int i = 0; i < info.netInterfaces.length(); ++i) {
      NetTrafficInfo::Data const& data = m_systemInfo->netTrafficData()[i];
      rapid::ext::NetTrafficInfoSample& sample = info.netInterfaces[i];

      sample.rx = data.rx ;
      sample.tx = data.tx ;
      sample.rxErrors = data.rxErrors;
      sample.txErrors = data.txErrors;
     }

    info.temperatures.length(m_params->thermalInfo.sensors.size());
    for (int i = 0; i < info.temperatures.length(); ++i) {
      float data = m_systemInfo->thermalData()[i];
      rapid::ext::ThermalInfoSample& sample = info.temperatures[i];

      sample.temperature = data;
    }

    info.wifiInterfaces.length(m_params->wirelessInfo.interfaces.size());
    for (int i = 0; i < info.wifiInterfaces.length(); ++i) {
      WirelessInfo::Data const& data = m_systemInfo->wirelessData()[i];
      rapid::ext::WifiInfoSample& sample = info.wifiInterfaces[i];

      sample.linkQuality = data.linkQuality;
      sample.signalLevel = data.signalLevel;
      sample.noiseLevel = data.noiseLevel;
      
      sample.frequency = data.frequency;
      sample.bitrate = data.bitrate;
    }

  }
}

// Create an object that will insert the service into the list
// of statically linked services that the <ACE_Service_Config> will
// process at run-time.
ACE_FACTORY_NAMESPACE_DEFINE(knSystemInfoSvc,
                             kn_SystemInfoSvc,
                             kn::SystemInfoSvc);
ACE_STATIC_SVC_DEFINE(kn_SystemInfoSvc,
                      ACE_TEXT("SystemInfoSvc"),
                      ACE_SVC_OBJ_T,
                      &ACE_SVC_NAME(kn_SystemInfoSvc),
                      ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
                      0);
ACE_STATIC_SVC_REQUIRE(kn_SystemInfoSvc);
