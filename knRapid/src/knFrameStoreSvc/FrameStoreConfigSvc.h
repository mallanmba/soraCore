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
#ifndef kn_FrameStoreConfigSvc_h
#define kn_FrameStoreConfigSvc_h

#include "knFrameStoreSvc_Export.h"

#include <ace/Service_Config.h>
#include <ace/Service_Object.h>


// forward declarations
namespace rapid
{
  class FrameStoreConfig;
}
namespace kn
{
  template<typename T>
  class DdsTypedSupplier;

  // forward declarations
  struct FrameStoreConfigSvcParameters;

  //! Class for publishing the FrameStoreConfig message.
  /**
   * The configuration is read from xml-file and the FrameStoreConfig
   * message is generated using the rapid::FrameStoreInit helper class.
   * Optionally the rover-frame is hooked up to a site-frame.
   * The result is than published on the agreed upon name to the 
   * dds domain using the reliable and durable (transient) Qos
   * profile by default.
   */
  class knFrameStoreSvc_Export FrameStoreConfigSvc : public ACE_Service_Object
  {
  public:
    FrameStoreConfigSvc();
    virtual ~FrameStoreConfigSvc();

    virtual int init(int argc, ACE_TCHAR *argv[]);
    virtual int info(ACE_TCHAR **src, size_t len) const;
    virtual int fini();

  private:
    typedef kn::DdsTypedSupplier<rapid::FrameStoreConfig> FsConfigPublisher;

    int parseArgs(int& argc, char * argv[]);

    // this holds which listeners to start etc
    FrameStoreConfigSvcParameters * m_params;
    int m_verbose;

    FsConfigPublisher * m_fsConfigPublisher;

    FrameStoreConfigSvc(FrameStoreConfigSvc const&);
    FrameStoreConfigSvc& operator = (FrameStoreConfigSvc const&);
  };
}

// Declare both static and dynamic services.
ACE_STATIC_SVC_DECLARE_EXPORT(knFrameStoreSvc, kn_FrameStoreConfigSvc)
ACE_FACTORY_DECLARE(knFrameStoreSvc, kn_FrameStoreConfigSvc)

#endif // kn_FrameStoreConfigSvc_h
