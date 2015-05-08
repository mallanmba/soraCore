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
#include "CommandExceptions.h"

namespace rapid
{
  RAPID_EXCEPTION_DEFINE(ECommand);

  RAPID_EXCEPTION_DEFINE(EBadSyntax);
  RAPID_EXCEPTION_DEFINE(EExecFailed);
  RAPID_EXCEPTION_DEFINE(ECanceled);

  RAPID_EXCEPTION_DEFINE(EPermission);
  
  RAPID_EXCEPTION_DEFINE(EBadMacro);

  RAPID_EXCEPTION_DEFINE(ENotFound);
  RAPID_EXCEPTION_DEFINE(EDuplicate);
  RAPID_EXCEPTION_DEFINE(EVersionMismatch);
  RAPID_EXCEPTION_DEFINE(EOperationNotSupported);
}
