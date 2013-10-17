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
#include "CommandImpl.h"
#include "CommandExceptions.h"

#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"

#include <cassert>

namespace rapid
{
  using namespace std;

  /**
   * ctor
   */
  CommandImpl::CommandImpl(string const& name,
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
  CommandImpl::~CommandImpl() throw()
  {
  }

  char const * 
  CommandImpl::type() const throw() 
  { 
    return m_type->name; 
  }

  void
  CommandImpl::exportSubsystemDescription(Subsystem& description) const throw()
  {
    strcpy(description.name, m_name.c_str());
    strcpy(description.subsystemTypeName, m_type->name);
  }

  void
  CommandImpl::exportSubsystemType(SubsystemType& type) const throw()
  {
    SubsystemTypeTypeSupport::copy_data(&type, m_type);
  }

  int
  CommandImpl::validateCommandSyntax(char const * name, ParameterSequence16 const& arguments) const
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
    
    cerr << "unkown method" << endl;
    return -1;
  }

  bool
  CommandImpl::isAbortable(char const * name) const
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

  CommandImpl::FuturePtr
  CommandImpl::abort() 
  {
    boost::throw_exception(rapid::EOperationNotSupported(string("Abort is not supported for interface: ") + type()));

    return FuturePtr();
  }

  CommandImpl::FuturePtr 
  CommandImpl::suspend() 
  {
    boost::throw_exception(rapid::EOperationNotSupported(string("Suspend is not supported for interface: ") + type()));

    return FuturePtr();
  }

  CommandImpl::FuturePtr
  CommandImpl::resume() 
  {
    boost::throw_exception(rapid::EOperationNotSupported(string("Resume is not supported for interface: ") + type()));

    return FuturePtr();
  }
}

// does this evaluate to true on any of our target platforms?
#if defined (ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION)
template kn::Singleton<kn::RapidSubsystemRepository> * kn::Singleton<kn::RapidSubsystemRepository>::s_instance;
#endif /* ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION */
