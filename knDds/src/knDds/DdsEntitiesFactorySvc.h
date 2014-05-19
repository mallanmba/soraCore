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
#ifndef knDds_DdsEntitiesFactorySvc_h
#define knDds_DdsEntitiesFactorySvc_h

#include "knDds_Export.h"

#include <ace/Service_Config.h>
#include <ace/Service_Object.h>

namespace kn
{
  class DdsEntitiesFactory;
  class DdsEntitiesFactorySvcParameters;

  //! Factory for DomainParticipant's, Publisher's and Subscriber's
  /**
   * This service instanciates a set of DomainParticipant, Publisher and Subscriber objects
   * an stores them in Repositories, based on the @DdsEntitesFactorySvcParameters.
   * The RTI provided xml-based Qos configuration is used to create the desired
   * quality of service properties.
   * The parameter defaults create a setup consistent with the RAPID standard's 
   * notion of partitions and Qos settings.
   */
  class knDds_Export DdsEntitiesFactorySvc : public ACE_Service_Object
  {
  public:
    DdsEntitiesFactorySvc();
    virtual ~DdsEntitiesFactorySvc();

    virtual int init(int argc, ACE_TCHAR *argv[]);
    virtual int info(ACE_TCHAR **src, size_t len) const;
    virtual int fini();

    int init(DdsEntitiesFactorySvcParameters const * params);

  private:
    int parseArgs(int& argc, char* argv[]);

    DdsEntitiesFactory * m_factory;

    // hidden default copy dtor and assignement operator.
    DdsEntitiesFactorySvc(DdsEntitiesFactorySvc const&);
    DdsEntitiesFactorySvc& operator = (DdsEntitiesFactorySvc const&);
  };
}

// Declare both static and dynamic services.
ACE_FACTORY_DECLARE(knDds, DdsEntitiesFactorySvc)

#endif // knDds_DdsEntitiesFactorySvc_h
