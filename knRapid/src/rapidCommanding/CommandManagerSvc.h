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
#ifndef rapid_CommandManagerSvc_h
#define rapid_CommandManagerSvc_h

#include "rapidCommanding_Export.h"

#include <ace/Service_Object.h>
#include <ace/Service_Config.h>

#include "knShare/SmartPtr.h"

#include <vector>

namespace rapid
{
  // forward declarations
  class CommandManagerSvcParameters;
  class CommandManager;

  /**
   * RAPID CommandManagerSvc should be one of the last services initialized 
   * @see init()
   */
  class rapidCommanding_Export CommandManagerSvc : public ACE_Service_Object
  {
  public:
    CommandManagerSvc();

    virtual int init(int argc, ACE_TCHAR *argv[]);
    virtual int info(ACE_TCHAR **src, size_t len) const;
    virtual int fini();

  private:
    // private methods
    int parseArgs(int& argc, char* argv[]);

    // private data
    CommandManagerSvcParameters * m_params;
    int m_verbose;

    kn::shared_ptr<CommandManager> m_cmdMgr;

    CommandManagerSvc(CommandManagerSvc const&);
    CommandManagerSvc& operator = (CommandManagerSvc const&);
  };
}

// Declare dynamic services.
ACE_STATIC_SVC_DECLARE_EXPORT(rapidCommanding, rapid_CommandManagerSvc)
ACE_FACTORY_DECLARE (rapidCommanding, rapid_CommandManagerSvc)

#endif // rapid_CommandManagerSvc_h
