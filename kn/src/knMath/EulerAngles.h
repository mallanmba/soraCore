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

/**
 **** EULER ANGLE CONVENTION ****
 *
 * Unless otherwise specified, euler angles are in these equivalent conventions:
 *  - X-Y-Z fixed
 *    Rotate around the original X axis, then the original Y axis, then the
 *    original Z axis.
 *
 *  - Z-Y-X local
 *    Rotate around the original Z axis, then the new Y axis, then the new-new
 *    X axis.
 *
 *  This is a common convention for ground vehicles, unlike the reversed
 *  convention common in aerospace.
 *
 *  Angles are provided as (theta_x,theta_y,theta_z) = (roll,pitch,yaw)
 *
 *  Note that some of this code is copied from vision workbench, which itself
 *  provides inconsistent statements of its convention.
 */

namespace kn
{
  namespace
  {
    static const double S_EPSILON = 0.0000001;  
  }
  
  /**
   * @ingroup knMath
   * @brief Extract yaw angle from rotation matrix.
   * 
   * @param rotationMatrix The rotation matrix.
   * @return A double containing the z component of the euler angles [phi, omega, kappa]
   * */
  inline
  double 
  rotationMatrixToYaw(Matrix3x3 const& rotationMatrix)
  {
    return atan2(rotationMatrix(1,0), rotationMatrix(0,0));
  }

  inline
  double
  rotationMatrixToYaw(Matrix2x2 const& rotationMatrix)
  {
    return atan2(rotationMatrix.coeff(1,0), rotationMatrix.coeff(0,0));

  }

  inline
  double
  angleOfVector2d(Eigen::Vector2d const& v) {
    return atan2(v.y(), v.x());
  }

  inline
  Eigen::Matrix2d rotationFromUnitVector(Eigen::Vector2d const& v) {
    Eigen::Matrix2d r;
    r << v.x(), -v.y(), v.y(), v.x();
    return r;
  }

  /** @ingroup knMath
   * 
   * @brief Convert rotation matrix to euler angles.
   * 
   * @param rotationMatrix The rotation matrix.
   * @return A Vector3 containing the euler angles [phi, omega, kappa] 
  */
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

  //Warning!!
  //ATrans3(...) * eulerXyzToRotationMatrix() returns the provided rotation
  //  matrix, rotated by the rotation component of the ATrans(), which can
  //  all to easily be accidentally then assigned to another ATrans, losing
  //  the translation
  //If you want an ATrans out of this, use eulerXyzToRotation instead
  /** 
   * @ingroup knMath
   * @brief Construct rotation matrix from euler angles.
   * @param roll Angle of rotation around x-axis.
   * @param pitch Angle of rotation around y-axis.
   * @param yaw Angle of rotation around z-axis.
   * @return Rotation matrix
   */
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

  /**
   * @ingroup knMath
   * @brief Construct rotation around z-axis.
   * @param yaw Rotation around z-axis.
   * @return Rotation element.
   */
  inline
  Eigen::Isometry3d
  eulerXyzToRotation(double roll, double pitch, double yaw)
  {
    return Eigen::Isometry3d(Eigen::AngleAxisd(yaw, Vector3::UnitZ())
      * Eigen::AngleAxisd(pitch, Vector3::UnitY())
      * Eigen::AngleAxisd(roll, Vector3::UnitX()));
  }

  inline
  Eigen::AngleAxisd
  rotation_z_axis(double yaw)
  {
    return Eigen::AngleAxisd(yaw, Eigen::Vector3d::UnitZ());
  }
}

#endif // kn_EulerAngles_h
