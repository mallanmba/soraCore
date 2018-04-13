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
#ifndef rapid_MobilityImplBase_h
#define rapid_MobilityImplBase_h

#include "rapidCommanding_Export.h"
#include "SubsysImpl.h"

#include <string>

namespace rapid
{
  class rapidCommanding_Export MobilitySubsysImplBase : public SubsysImpl
  {
  public:
    MobilitySubsysImplBase();
    virtual ~MobilitySubsysImplBase() throw();

    virtual FuturePtr execute(rapid::Command const& cmd);

  protected:
    virtual FuturePtr simpleMove(rapid::Command const& cmd);
    virtual FuturePtr moveTo(rapid::Command const& cmd);
    virtual FuturePtr simpleMove6Dof(rapid::Command const& cmd);
    virtual FuturePtr moveTo6Dof(rapid::Command const& cmd);
    virtual FuturePtr abort();
    virtual FuturePtr moveGoal2D(rapid::Command const& cmd);

    static rapid::SubsystemType const * typeDescription();
  };
}
#endif // rapid_MobilityImplBase_h
