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
#ifndef rapid_AccessControlImpl_h
#define rapid_AccessControlImpl_h

#include "SubsysImpl.h"

#include "rapidDds/AccessControlState.h"
#include "rapidDds/AccessControlStateSupport.h"
#include "rapidDds/Command.h"

#include "knDds/DdsTypedSupplier.h"

namespace rapid
{
  class AccessControlImplParameters;

  class AccessControlSubsysImpl : public SubsysImpl
  {
  public:
    AccessControlSubsysImpl(AccessControlImplParameters const& params);
    virtual ~AccessControlSubsysImpl() throw();

    virtual FuturePtr execute(rapid::Command const& cmd);

    bool isController(char const * user) const throw();
    char const * controller() const throw();

  protected:
    static rapid::SubsystemType const * typeDescription();

    int m_serialId;

    kn::DdsTypedSupplier<rapid::AccessControlState> m_statePublisher;
  };
}
#endif // rapid_AccessControlImpl_h
