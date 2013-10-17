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
#ifndef knMatrix_h
#define knMatrix_h

#include <Eigen/Geometry>

#include <vector>
namespace kn
{
  typedef Eigen::Matrix3d Matrix3x3;
  typedef Eigen::Matrix2d Matrix2x2;

  typedef Eigen::MatrixXd MathMatrixDouble;      


  typedef std::vector<Matrix2x2, Eigen::aligned_allocator<Matrix2x2> > Matrix2x2Vector;
  typedef std::vector<Matrix3x3, Eigen::aligned_allocator<Matrix3x3> > Matrix3x3Vector;
}

#endif // knMatrix_h
