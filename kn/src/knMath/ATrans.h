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

#include <Eigen/Geometry>
#include <vector>
#include <iosfwd>

#include "knConfig.h"
#include "knMath_Export.h"

namespace kn
{
  typedef Eigen::Affine3d ATrans3;
  typedef Eigen::Affine2d ATrans2;
  typedef Eigen::AngleAxisd AngleAxis;
  typedef Eigen::Translation3d Translation3;

  typedef std::vector<ATrans2, Eigen::aligned_allocator<ATrans2> > ATrans2Vector;
  typedef std::vector<ATrans3, Eigen::aligned_allocator<ATrans3> > ATrans3Vector;

  ATrans3 aTrans2to3(ATrans2 const& rhs);
  ATrans2 aTrans3to2(ATrans3 const& rhs);

  struct ATrans2Out
  {
    ATrans2Out(ATrans2 const& atrans) :
      m_atrans(atrans)
    {}

    ATrans2 const& transform() const { return m_atrans; }

  private:
    ATrans2 const& m_atrans;
  };

  struct ATrans3Out
  {
    ATrans3Out(ATrans3 const& atrans) :
      m_atrans(atrans)
    {}

    ATrans3 const& transform() const { return m_atrans; }

  private:
    ATrans3 const& m_atrans;
  };

  knMath_Export std::ostream& operator<< (std::ostream& ostr, ATrans2Out const& rhs);
  knMath_Export std::ostream& operator<< (std::ostream& ostr, ATrans3Out const& rhs);

  inline
  ATrans2
  step(ATrans2 const& pose, double curvature, double speed, double interval, double epsilon = 0.0000001)
  {
    // set translation
    if (!isnan(curvature)) {
      double theta = 0.;
      Vector2 x(speed * interval, 0.);
      if (fabs(curvature) > epsilon) {
        theta = curvature * x.x();
        x.x() = sin(theta);
        x.y() = (1 - cos(theta));
        x /= curvature;
      }

      ATrans2 delta(Eigen::Translation2d(x) * Eigen::Rotation2D<double>(theta));
      return pose * delta;
    }

    return pose;
  }
}

#endif // knTransform_h
