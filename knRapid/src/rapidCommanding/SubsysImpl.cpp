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
#include "SubsysImpl.h"
#include "CommandExceptions.h"

#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"

#include <knShare/Log.h>

#include <cassert>

namespace rapid
{
  using namespace std;

  /**
   * ctor
   */
  SubsysImpl::SubsysImpl(string const& name,
                           SubsystemType const * type) :
    m_name(name),
    m_type(type)
  {
    assert(m_name.length() < 32);
    // @TODO: assert CommandDef's are sorted by name
  }

  /**
   * dtor
   */
  SubsysImpl::~SubsysImpl() throw()
  {
  }

  char const *
  SubsysImpl::type() const throw()
  {
    return m_type->name;
  }

  void
  SubsysImpl::exportSubsystemDescription(Subsystem& description) const throw()
  {
    strcpy(description.name, m_name.c_str());
    strcpy(description.subsystemTypeName, m_type->name);
  }

  void
  SubsysImpl::exportSubsystemType(SubsystemType& type) const throw()
  {
    SubsystemTypeTypeSupport::copy_data(&type, m_type);
  }

  /**
   * @returns index of command on success, or -1 on failure
   */
  int
  SubsysImpl::validateCommandSyntax(char const * name, ParameterSequence16 const& arguments) const
  {
    for (int i = 0; i < m_type->commands.length(); ++i) {

      // search for matching command name
      // @TODO: binary search is faster, requires sorted CommandDefs
      if (strcmp(m_type->commands[i].name, name) == 0) {
        // same number of arguments
        if (arguments.length() != m_type->commands[i].parameters.length()) {
          //cerr << "wrong number of arguments" << arguments.length() << endl;
          return -1; // failed
        }

        // same argument types
        for (int j = 0; j < m_type->commands[i].parameters.length(); ++j) {
          if (arguments[j]._d != m_type->commands[i].parameters[j].type) {
            //cerr << "wrong type of argument" << i << endl;
            return -1; // failed
          }
        }

        // success
        //cerr << "success" << endl;
        return i;
      }
    }

    KN_WARN("unkown method");
    return -1;
  }

  bool
  SubsysImpl::isAbortable(char const * name) const
  {
    for (int i = 0; i < m_type->commands.length(); ++i) {
      // search for matching command name
      // @TODO: binary search is faster, requires sorted CommandDefs
      if (strcmp(m_type->commands[i].name, name) == 0) {
        return m_type->commands[i].abortable;
      }
    }
    return false;
  }

  SubsysImpl::FuturePtr
  SubsysImpl::abort()
  {
    boost::throw_exception(rapid::EOperationNotSupported(string("Abort is not supported for interface: ") + type()));

    return FuturePtr();
  }

  SubsysImpl::FuturePtr
  SubsysImpl::suspend()
  {
    boost::throw_exception(rapid::EOperationNotSupported(string("Suspend is not supported for interface: ") + type()));

    return FuturePtr();
  }

  SubsysImpl::FuturePtr
  SubsysImpl::resume()
  {
    boost::throw_exception(rapid::EOperationNotSupported(string("Resume is not supported for interface: ") + type()));

    return FuturePtr();
  }
}
