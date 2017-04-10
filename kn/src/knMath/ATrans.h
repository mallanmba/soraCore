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
#ifndef knTransform_h
#define knTransform_h

#include "Vector.h"

#include <iosfwd>
#include <limits>
#include <cmath>

#include "knConfig.h"
#include "knMath_Export.h"

//Warning!!
//ATrans3 can be initialized from 3x3 [rotation] matrices, implicitly with
// zero translation component.
//Further, associativity in composed transforms is somewhat unintuitive.
//Combined, these can silently break otherwise correct-looking expressions!
//  Consider generating a transform:
//    Vector3 pos = ...
//    Matrix3x3 rotation = ...
//    ATrans3 foo = Translation3(pos) * rotation
//  This will !!NOT!! correctly append a transform to an existing one:
//    ATrans3 foo = ...
//    Vector3 pos = ...
//    Matrix3x3 rotation = ...
//    ATrans3 bar = foo * Translation3(pos) * rotation
//  That will result in an ATrans equal to (foo*Translation3(pos)) being
//   computed, which is then used to transform the rotation matrix, producing
//   another rotation matrix, which is then assigned to the ATrans3, without
//   any translation component and with the wrong rotation component.
//  Instead, use:
//    bar = foo * Translation3(pos) * ATrans3(rotation)
//  or fix the associativity explicitly:
//    bar = foo * (Translation3(pos) * rotation)

namespace kn
{
  /** @ingroup knMath */
  typedef Eigen::Affine3d ATrans3;
  /** @ingroup knMath */
  typedef Eigen::Affine2d ATrans2;
  /** @ingroup knMath */
  typedef Eigen::AngleAxisd AngleAxis;
  /** @ingroup knMath */
  typedef Eigen::Translation3d Translation3;

  /** @ingroup knMath */
  typedef std::vector<ATrans2, Eigen::aligned_allocator<ATrans2> > ATrans2Vector;
  /** @ingroup knMath */
  typedef std::vector<ATrans3, Eigen::aligned_allocator<ATrans3> > ATrans3Vector;

  // not implemented:
  //  knMath_Export ATrans3 aTrans2to3(ATrans2 const& rhs);
  //  knMath_Export ATrans2 aTrans3to2(ATrans3 const& rhs);

  /** 
   * @ingroup knMath
   * @brief Helper class for @ref ATrans2 ostream operator.
   * 
   * As Eigen already defines output operators we can't just provide one for ATrans2.
   * But their formatting does not work well with roversw debug output.
   * 
   * So in order to print a kn ATrans2 to cout in roversw formatting, wrap it into this type.
   */
  struct ATrans2Out
  {
    ATrans2Out(ATrans2 const& atrans) :
      m_atrans(atrans)
    {}

    ATrans2 const& transform() const { return m_atrans; }

  private:
    ATrans2 const& m_atrans;
  };

  /** @ingroup knMath
   * 
   * @brief Helper class for @ref ATrans3 ostream operator.
   *
   * As Eigen already defines output operators we can't just provide one for ATrans3.
   * But their formatting does not work well with roversw debug output.
   * 
   * So in order to print a kn ATrans2 to cout in roversw formatting, wrap it into this type.
   */
  struct ATrans3Out
  {
    ATrans3Out(ATrans3 const& atrans) :
      m_atrans(atrans)
    {}

    ATrans3 const& transform() const { return m_atrans; }

  private:
    ATrans3 const& m_atrans;
  };

  /** @ingroup knMath */
  knMath_Export std::ostream& operator<< (std::ostream& ostr, ATrans2Out const& rhs);
  /** @ingroup knMath */
  knMath_Export std::ostream& operator<< (std::ostream& ostr, ATrans3Out const& rhs);

  /** @ingroup knMath */
  inline
  ATrans2
  step(ATrans2 const& pose, double curvature, double crab, double crabRate, double speed, double interval)
  {
    if (isnan(curvature)) {
      // Wheels are aligning, cannot calculate new pose
      return pose;
    }
    
    double theta = 0.;
    Vector2 x(speed * interval, 0.);

    if (fabs(speed) > std::numeric_limits<double>::epsilon()) {
      double effectiveCurvature = curvature + 2 * crabRate / speed;
      if (fabs(effectiveCurvature) > std::numeric_limits<double>::epsilon()) {
        theta = effectiveCurvature * x.x();
        x.x() = sin(theta);
        x.y() = (1 - cos(theta));
        x /= effectiveCurvature;
      }
    }
    
    if (fabs(crab) > std::numeric_limits<double>::epsilon()) {
      ATrans2 delta(Eigen::Rotation2D<double>(-crab) * Eigen::Translation2d(x) * Eigen::Rotation2D<double>(theta+crab));
      return pose * delta;
    }
    else {
      ATrans2 delta(Eigen::Translation2d(x) * Eigen::Rotation2D<double>(theta));
      return pose * delta;
    }
  }
}

#endif // knTransform_h
