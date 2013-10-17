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
#ifndef kn_EulerAngles_h
#define kn_EulerAngles_h

#include "Matrix.h"
#include "Vector.h"

#include <cmath>

#include "knConfig.h"

namespace
{
static const double S_EPSILON = 0.0000001;

}

namespace kn
{
  // Returns: A double containing the z component of the euler angles [phi, omega, kappa]
  inline
  double 
  rotationMatrixToYaw(Matrix3x3 const& rotationMatrix)
  {
    return atan2(rotationMatrix(1,0), rotationMatrix(0,0));
  }

  // Returns: A Vector3 containing the euler angles [phi, omega, kappa] inline
  inline
  Vector3 
  rotationMatrixToEulerXyz(Matrix3x3 const& rotationMatrix)
  {
    double phi = 0.;
    double const omega = asin(-rotationMatrix(2,0));
    double kappa;

    if (fabs(omega - M_PI_2) < S_EPSILON) {
      kappa = atan2( rotationMatrix(1,2),  rotationMatrix(0,2));
    }
    if (fabs(omega + M_PI_2) < S_EPSILON ) {
      kappa = atan2(-rotationMatrix(1,2), -rotationMatrix(0,2));
    }
    else {
      phi   = atan2(rotationMatrix(2,1), rotationMatrix(2,2));
      kappa = atan2(rotationMatrix(1,0), rotationMatrix(0,0));
    }
    return Vector3(phi, omega, kappa);
  }

  inline
  Matrix3x3 
  eulerXyzToRotationMatrix(double roll, double pitch, double yaw)
  {
    Matrix3x3 m;
    m =  Eigen::AngleAxisd(yaw, Vector3::UnitZ())
      * Eigen::AngleAxisd(pitch, Vector3::UnitY())
      * Eigen::AngleAxisd(roll, Vector3::UnitX());
    return m;
  }

  inline
  Eigen::AngleAxisd
  rotation_z_axis(double angle)
  {
    return Eigen::AngleAxisd(angle, Eigen::Vector3d::UnitZ());
  }
}

#endif // kn_EulerAngles_h
