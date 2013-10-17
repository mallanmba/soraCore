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
#ifndef rapid_JointIo_h
#define rapid_JointIo_h

#include "rapidIo_Export.h"

#include <iosfwd>

namespace rapid
{
  class JointConfigParameters;
  class JointDef;
  class JointDefSeq;
  class JointConfig;
  
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, rapid::JointDef const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, rapid::JointDefSeq const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, rapid::JointConfig const& rhs);

  rapidIo_Export extern void operator<<=(JointConfig& config, JointConfigParameters const& params);
}

#endif // rapid_JointIo_h
