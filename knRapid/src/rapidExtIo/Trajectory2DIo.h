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
#ifndef rapid_Trajectory2DIo_h
#define rapid_Trajectory2DIo_h

#include "rapidExtIo_Export.h"

#include <iosfwd>

namespace rapid
{  
  namespace ext
  {
   class Trajectory2DConfigParameters;
   class Trajectory2DConfig;

    rapidExtIo_Export extern std::ostream& operator<< (std::ostream& ostr, Trajectory2DConfig const& rhs);

    rapidExtIo_Export void operator<<= (ext::Trajectory2DConfig& config, Trajectory2DConfigParameters const& params);
  }
}

#endif // rapid_Trajectory2DIo_h
