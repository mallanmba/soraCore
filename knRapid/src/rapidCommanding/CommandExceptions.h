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
#ifndef rapid_CommandExceptions_h
#define rapid_CommandExceptions_h

#include "rapidCommanding_Export.h"

#include <boost/exception/all.hpp>

#include <stdexcept>

#define RAPID_EXCEPTION_DECLARE(N) \
  class rapidCommanding_Export N : public std::logic_error, \
                               public virtual boost::exception \
  { \
  public: \
    explicit N(std::string const& _what);       \
  }
#define RAPID_EXCEPTION_DEFINE(N) \
  N :: N(std::string const& _what) : std::logic_error(_what) {}    \


namespace rapid
{
  RAPID_EXCEPTION_DECLARE(ECommand);

  RAPID_EXCEPTION_DECLARE(EBadSyntax);
  RAPID_EXCEPTION_DECLARE(EExecFailed);
  RAPID_EXCEPTION_DECLARE(ECanceled);
  
  RAPID_EXCEPTION_DECLARE(EPermission);
  
  RAPID_EXCEPTION_DECLARE(EBadMacro);

  RAPID_EXCEPTION_DECLARE(ENotFound);
  RAPID_EXCEPTION_DECLARE(EDuplicate);
  RAPID_EXCEPTION_DECLARE(EVersionMismatch);
  RAPID_EXCEPTION_DECLARE(EOperationNotSupported);
}

#endif // rapid_CommandExceptions_h
