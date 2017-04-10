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
#include "WheelGroupFuture.h"
#include "knMath/Matrix.h"

#include <iostream>

namespace kn
{
  std::ostream& operator<< (std::ostream& ostr, WheelGroupFuture const& rhs)
  {
    Eigen::Rotation2Dd theta(0.);
    theta.fromRotationMatrix(rhs.offset.rotation());
    ostr << "{";
    ostr << static_cast<WheelGroupState const&>(rhs);
    ostr << ", ("
         << rhs.offset.translation().x() << ", " << rhs.offset.translation().y()
         << ", " << (theta.angle() * 180./M_PI)
         << " deg)}";

    return ostr;
  }
}
