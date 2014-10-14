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
#ifndef knDistance_h
#define knDistance_h

#include "Vector.h"

namespace kn
{

  template <class VecType>
  VecType closestPointOnLine(VecType testPoint, VecType pt1, VecType pt2, double* progress = NULL) {
    VecType retVal;
    VecType A  = testPoint - pt1;
    VecType B  = pt2 - pt1;
    double  BLen = B.norm();
    VecType Bn = B / BLen;
    double  u  = A.dot(Bn);
    VecType V  = Bn * u;
    if(progress) {
      *progress = u;
    }
    if(u < 0) { // point is before beginning of line
      retVal = pt1;
    }
    else if(u > BLen) { // point is after end of line
      retVal = pt2;
    }
    else {
      retVal = pt1 + V;
    }
    return retVal;
  }

  /**
   * Find the point closest to testPoint on a line "pt1" to "pt2"
   * @param testPoint find point on line closest to this point
   * @param pt1 beginning vertex of line
   * @param pt2 end vertex of line
   * @param progress if non-null, set this to length along line the closest point is (range: 0-length of line)
   * @ingroup knMath
   */
  inline Vector2 closestPointOnLine2D(Vector2 testPoint, Vector2 pt1, Vector2 pt2, double* progress = NULL)
  {
    return closestPointOnLine<Vector2>(testPoint, pt1, pt2, progress);
  }

  /**
   * Find the point closest to testPoint on a line "pt1" to "pt2"
   * @param testPoint find point on line closest to this point
   * @param pt1 beginning vertex of line
   * @param pt2 end vertex of line
   * @param progress if non-null, set this to length along line the closest point is (range: 0-length of line)
   * @ingroup knMath
   */
  inline Vector3 closestPointOnLine3D(Vector3 testPoint, Vector3 pt1, Vector3 pt2, double* progress = NULL)
  {
    return closestPointOnLine<Vector3>(testPoint, pt1, pt2, progress);
  }

}

#endif // knDistance_h
