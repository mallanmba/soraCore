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

// see http://eigen.tuxfamily.org/dox-devel/group__TopicStlContainers.html#vector
// about std::vector and eigen aligned types
#include <Eigen/StdVector>
#include <Eigen/Geometry>

#include <vector>

namespace kn
{
  /**
   * @defgroup knMath Math
   * @brief The Math module of kn provides a set of typedef's and some helper classes to the Eigen math library.
   *
   * The core idea behind this module is to down-select the vast set of capabilities of Eigen data-types,
   * to a number of "obviously preferred ones.
   */

  typedef Eigen::VectorXd Vector;

  /** @ingroup knMath */
  typedef Eigen::Vector3d Vector3;
  /** @ingroup knMath */
  typedef Eigen::Vector3f Vector3f;
  /** @ingroup knMath */
  typedef Eigen::Vector2d Vector2;
  typedef Eigen::VectorXd Vector;

  typedef Eigen::Vector2i Vector2i;
  typedef Eigen::Vector3i Vector3i;

  /** @ingroup knMath */
  typedef Eigen::VectorXd MathVectorDouble;

  /** @ingroup knMath */
  typedef std::vector<Vector2, Eigen::aligned_allocator<Vector2> > Vector2Vector;
  /** @ingroup knMath */
  typedef std::vector<Vector3, Eigen::aligned_allocator<Vector3> > Vector3Vector;
  /** @ingroup knMath */
  typedef std::vector<Vector3f, Eigen::aligned_allocator<Vector3f> > Vector3fVector;

  //Eigen 3.2+ defines .hasNaN() and .allFinite() (briefly called isFinite), but
  //until we're using at least that version everywhere, we need our own
  //To keep life simple, these are defined generically but will only compile
  //of course on Eigen types
  template<class VecType>
  inline bool vectorHasNaN(const VecType &vec)
  {
    //cute parallel trick copied from Eigen source: NaN doesn't equal anything
    return !((vec.array()==vec.array()).all());
  }

  template<class VecType>
  inline bool vectorIsFinite(const VecType &vec)
  {
    //cute parallel trick copied from Eigen source: inf-inf = nan, nan-nan=nan
    return !(vectorHasNaN(vec-vec));
  }

}

#endif // knVector_h
