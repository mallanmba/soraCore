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
#ifndef knVector_h
#define knVector_h

#include <Eigen/Geometry>

#include <vector>

namespace kn
{
  typedef Eigen::Vector3d Vector3;
  typedef Eigen::Vector2d Vector2;

  typedef Eigen::VectorXd MathVectorDouble;      

  typedef std::vector<Vector2, Eigen::aligned_allocator<Vector2> > Vector2Vector;
  typedef std::vector<Vector3, Eigen::aligned_allocator<Vector3> > Vector3Vector;
}

#endif // knVector_h
