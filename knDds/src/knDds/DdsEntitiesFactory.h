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
#ifndef miro_DdsEntitiesFactory_h
#define miro_DdsEntitiesFactory_h

#include "knDds_Export.h"
#include "knDds/KnDdsParameters.h"

#include <string>

namespace kn
{
  //! Factory for DomainParticipant's, Publisher's and Subscriber's
  /**
   * This factory instanciates a set of DomainParticipant, Publisher and Subscriber objects
   * an stores them in Repositories, based on the @DdsEntitesFactoryParameters.
   * The RTI provided xml-based Qos configuration is used to create the desired
   * quality of service properties.
   */
  class knDds_Export DdsEntitiesFactory
  {
  public:
    DdsEntitiesFactory(DdsEntitiesFactoryParameters const& params);
    ~DdsEntitiesFactory();

  protected:
    struct Data;

    static std::vector<std::string> parseDiscoveryPeersFile(std::string const& filename);


    DdsEntitiesFactoryParameters const m_params;
    Data * m_data;
  };
}

#endif // miro_DdsEntitiesFactory_h
