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
#ifndef knDds_DdsTypeRegistrator_h
#define knDds_DdsTypeRegistrator_h

#include "knDds_Export.h"

#include "DdsSupport.h"

#include "miro/Exception.h"
#include "miro/Repository.h"
#include "miro/Log.h"

#include <ndds/ndds_namespace_cpp.h>

namespace kn
{
  class  knDds_Export DdsTypeRegistratorBase
  {
  public:
    virtual ~DdsTypeRegistratorBase() throw();
    virtual void registerType(DDS::DomainParticipant * participant) throw(Miro::Exception) = 0;
  };

  template<typename T>
  class DdsTypeRegistrator : public DdsTypeRegistratorBase
  {
  public:
    virtual ~DdsTypeRegistrator() throw() {}
    virtual void registerType(DDS::DomainParticipant * participant) throw(Miro::Exception) {
      /* Register type before creating topic */
      char const * type = T::TypeSupport::get_type_name();
      MIRO_LOG_OSTR(LL_NOTICE, "registering type of name: " << type);
      DDS::ReturnCode_t rc = T::TypeSupport::register_type(participant, type);
      if (rc != DDS::RETCODE_OK) {
        throw Miro::Exception(std::string(type) + std::string(" - register_type error: ") + DdsSupport::getError(rc));
      }
    }
  };

  typedef Miro::Repository<DdsTypeRegistratorBase> DdsTypeRegistratorRepository;
}

KNDDS_SINGLETON_DECLARE(ACE_Singleton, kn::DdsTypeRegistratorRepository, ACE_SYNCH_RECURSIVE_MUTEX);
#endif
