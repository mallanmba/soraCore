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
#include "ATrans.h"
#include "EulerAngles.h"

#include <iostream>

namespace kn
{
  using namespace std;

  std::ostream& operator<< (std::ostream& ostr, ATrans2Out const& rhs)
  {
    Eigen::Rotation2Dd theta = 0.;
    theta.fromRotationMatrix(rhs.transform().rotation());
    ostr << "("
         << rhs.transform().translation().x() << ", " << rhs.transform().translation().y()
         << ", " << (theta.angle() * 180./M_PI)
         << " deg)";
    return ostr;
  }
  std::ostream& operator<< (std::ostream& ostr, ATrans3Out const& rhs)
  {
    Vector3 rpy = rotationMatrixToEulerXyz(rhs.transform().rotation());
    ostr << "(("
         << rhs.transform().translation().x() << ", " 
         << rhs.transform().translation().y() << ", " 
         <<  rhs.transform().translation().z()
         << "), (" 
         << rpy.x() * 180./M_PI << " deg, " 
         << rpy.y() * 180./M_PI << " deg, " 
         << rpy.z() * 180./M_PI << " deg))";
    return ostr;
  }
}
