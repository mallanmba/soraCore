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
#ifndef rapid_CommandImpl_h
#define rapid_CommandImpl_h

#include "rapidCommanding_Export.h"

#include "rapidDds/BaseTypes.h"
#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"

#include <ace/Time_Value.h>
#include <ace/OS_NS_sys_time.h>

#include "knShare/SmartPtr.h"
#include <boost/thread.hpp>

#include <string>

namespace rapid
{
  class Command;
  class Subsystem;
  class SubsystemType;

  class SubsysImpl;

  class rapidCommanding_Export SubsysImpl
  {
  public:
    typedef boost::BOOST_THREAD_FUTURE<void> Future;
    typedef kn::shared_ptr<Future> FuturePtr;

    SubsysImpl(std::string const& name,
                rapid::SubsystemType const * type);
    virtual ~SubsysImpl() throw();

    char const * name() const throw() { return m_name.c_str(); }
    char const * type() const throw();

    void exportSubsystemDescription(rapid::Subsystem& subsystem) const throw();
    void exportSubsystemType(rapid::SubsystemType& type) const throw();

    int validateCommandSyntax(char const * name, rapid::ParameterSequence16 const& arguments) const;
    bool isAbortable(char const * name) const;

    /**
     * return value is null for synchronous operations (command has already
     * completed by the time execute returns)
     * It is the responsibility of the execute method to publish Acks
     */
    virtual FuturePtr execute(rapid::Command const& cmd) = 0;

    virtual FuturePtr abort();
    virtual FuturePtr suspend();
    virtual FuturePtr resume();

  protected:
    template<typename T>
    static FuturePtr async(T const& t);

    std::string const m_name;
    rapid::SubsystemType const * const m_type;
  };

  template<typename T>
  inline
  SubsysImpl::FuturePtr
  SubsysImpl::async(T const& t)
  {
    boost::packaged_task<void> pt(t);
    FuturePtr f(new Future(pt.get_future()));
    boost::thread( boost::move(pt) ).detach();

    return f;
  }

}

#endif // rapid_CommandImpl_h
