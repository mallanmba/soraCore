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
#ifndef kn_RapidSystemInfoSvc_h
#define kn_RapidSystemInfoSvc_h

#include "knSystemInfoSvc_Export.h"

#include "miro/ReactorTask.h"

#include <ace/Service_Config.h>
#include <ace/Service_Object.h>

namespace rapid 
{
  namespace ext
  {
    class SystemInfoSample;
    class SystemInfoConfig;
  }
}
namespace kn 
{
  template<typename T> class DdsTypedSupplier;
  class SystemInfo;
  class SystemInfoSvcParameters;
  
  /** Publishes system information: laptop battery, ram/cpu/net usage, ect. to dds */ 
  class knSystemInfoSvc_Export SystemInfoSvc : public Miro::ReactorTask
  {
  public:
    SystemInfoSvc();
    virtual ~SystemInfoSvc();

    virtual int init(int argc, ACE_TCHAR *argv[]);
    virtual int info(ACE_TCHAR **src, size_t len) const;
    virtual int fini();

    virtual int handle_timeout(const ACE_Time_Value& now, const void *clientArg);
    
  private:
    typedef kn::DdsTypedSupplier<rapid::ext::SystemInfoConfig> ConfigSupplier;
    typedef kn::DdsTypedSupplier<rapid::ext::SystemInfoSample> SampleSupplier;

    int parseArgs(int& argc, char* argv[]);
    void collectConfigData(rapid::ext::SystemInfoConfig& config) const;
    void collectSampleData(rapid::ext::SystemInfoSample& sample) const;
    
    SystemInfoSvcParameters * m_params;

    ConfigSupplier * m_configSupplier;
    SampleSupplier * m_sampleSupplier;
    SystemInfo * m_systemInfo;

    long m_timerId;
    int m_verbose;

    int m_errorCounter;
    
    SystemInfoSvc(SystemInfoSvc const&);
    SystemInfoSvc& operator = (SystemInfoSvc const&);
  };
}

// Declare both static and dynamic services.
ACE_STATIC_SVC_DECLARE_EXPORT(knSystemInfoSvc, kn_SystemInfoSvc)
ACE_FACTORY_DECLARE (knSystemInfoSvc, SystemInfoSvc)

#endif // kn_svcs_SystemInfoSvc_h
