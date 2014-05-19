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
#ifndef kn_FrameStoreUpdaterSvc_h
#define kn_FrameStoreUpdaterSvc_h

#include "knFrameStoreSvc_Export.h"

#include <ace/Service_Config.h>
#include <ace/Task.h>

#include <string>

// forward declarations
namespace kn
{
  // forward declarations
  class FrameStore;
  class FrameStoreUpdaterSvcParameters;

  class knFrameStoreSvc_Export FrameStoreUpdaterSvc : public ACE_Task_Base
  {
  public:
    FrameStoreUpdaterSvc();
    virtual ~FrameStoreUpdaterSvc();

    virtual int init(int argc, ACE_TCHAR *argv[]);
    virtual int info(ACE_TCHAR **src, size_t len) const;
    virtual int fini();

    virtual int svc();

  private:
    int parseArgs(int& argc, char * argv[]);
    
    // this holds which listeners to start etc
    std::string m_configName;
    FrameStoreUpdaterSvcParameters * m_params;
    int m_verbose;

    kn::FrameStore * m_frameStore;

    FrameStoreUpdaterSvc(FrameStoreUpdaterSvc const&);
    FrameStoreUpdaterSvc& operator = (FrameStoreUpdaterSvc const&);
  };
}

// Declare both static and dynamic services.
ACE_STATIC_SVC_DECLARE_EXPORT(knFrameStoreSvc, kn_FrameStoreUpdaterSvc)
ACE_FACTORY_DECLARE(knFrameStoreSvc, kn_FrameStoreUpdaterSvc)

#endif // kn_FrameStoreUpdaterSvc_h
