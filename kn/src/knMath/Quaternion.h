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
#ifndef knQuaternion_h
#define knQuaternion_h

// see http://eigen.tuxfamily.org/dox-devel/group__TopicStlContainers.html#vector
// about std::vector and eigen aligned types
#include <Eigen/StdVector>
#include <Eigen/Geometry>
#include <vector>
#include <cmath>

namespace kn
{
  /** @ingroup knMath */
  typedef Eigen::Quaterniond Quaternion;
  /** @ingroup knMath */
  typedef std::vector<Quaternion, Eigen::aligned_allocator<Quaternion> > QuaternionVector;

  //////////////////////////////////////////////////////////////////
  /** @ingroup knMath
   * @brief Compute spherical linear interpolation (SLERP) rotation.
   * 
   *    q(t) between q1 and q2 s.t. q(0) = q1 and q(1) = q2. 
   */
  inline
  Quaternion slerp(Quaternion const& q1, Quaternion const& q2, double t)
  {
    Quaternion q0 = q2 * q1.conjugate();
    double cosHalfTheta = fabs(q0.w());
    if (cosHalfTheta > 0.99999999999) 
      return q1;
    else {
      double sinHalfTheta = sqrt(1 - cosHalfTheta * cosHalfTheta);
      double halfTheta = acos(cosHalfTheta);
      double imagRatio = sin(t * halfTheta) / sinHalfTheta;
      
      q0.w() = cos(t * halfTheta);
      q0.x() *= imagRatio;
      q0.y() *= imagRatio;
      q0.z() *= imagRatio;
      
      return q0 * q1;
    }
  }
}

#endif // knQuaternion_h
