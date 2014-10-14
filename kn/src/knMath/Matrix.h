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

// see http://eigen.tuxfamily.org/dox-devel/group__TopicStlContainers.html#vector
// about std::vector and eigen aligned types
#include <Eigen/StdVector>
#include <Eigen/Geometry>

#include <vector>
namespace kn
{
  /** @ingroup knMath */
  typedef Eigen::Matrix3d Matrix3x3;
  /** @ingroup knMath */
  typedef Eigen::Matrix2d Matrix2x2;
  /** @ingroup knMath */
  typedef Eigen::MatrixXd Matrix;

  /** @ingroup knMath */
  typedef Eigen::MatrixXd MathMatrixDouble;      

	typedef Eigen::Matrix2i Matrix2x2i;
	typedef Eigen::Matrix3i Matrix3x3i;
	typedef Eigen::MatrixXi Matrixi;

  /** @ingroup knMath */
  typedef std::vector<Matrix2x2, Eigen::aligned_allocator<Matrix2x2> > Matrix2x2Vector;
  /** @ingroup knMath */
  typedef std::vector<Matrix3x3, Eigen::aligned_allocator<Matrix3x3> > Matrix3x3Vector;

  //Eigen 3.2+ defines .hasNaN() and .allFinite() (briefly called isFinite), but
  //until we're using at least that version everywhere, we need our own
  //To keep life simple, these are defined generically but will only compile
  //of course on Eigen types
  template<class MatType>
    inline bool matrixHasNaN(const MatType &mat) 
    {
      //cute parallel trick copied from Eigen source: NaN doesn't equal anything
      return !((mat.array()==mat.array()).all());
    }

  template<class MatType>
    inline bool matrixIsFinite(const MatType &mat)
    {
      //cute parallel trick copied from Eigen source: inf-inf = nan, nan-nan=nan
      return !(matrixHasNaN(mat-mat));
    }
}

#endif // knMatrix_h
