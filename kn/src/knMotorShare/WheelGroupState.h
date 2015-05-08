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
#ifndef kn_WheelGroupState_h
#define kn_WheelGroupState_h

#include "MotorGroupFuture.h"

namespace kn
{
  class WheelGroupState;
  knMotorShare_Export std::ostream& operator<< (std::ostream& ostr, WheelGroupState const& rhs);

  /**
   * @ingroup knMotorShare
   * @brief Sample of wheel group state as expected at a future time.
   */
  class knMotorShare_Export WheelGroupState : public MotorGroupFuture
  {
  public:
    double curvature;
    double curvatureRate;
    double speed;
    double crabAngle;
    double crabRate;

    //! Default constructor.
    WheelGroupState() {}
    //! Initializing constructor.
    WheelGroupState(ACE_Time_Value const& targetTime,
                    DoubleVector const& motorPositions,
                    DoubleVector const& motorSpeeds,
                    double curvature,
                    double curvatureRate,
                    double speed,
                    double crabAngle,
                    double crabRate) :
      MotorGroupFuture(targetTime, motorPositions, motorSpeeds),
      curvature(curvature),
      curvatureRate(curvatureRate),
      speed(speed),
      crabAngle(crabAngle),
      crabRate(crabRate)
    {}
  };
}
#endif // kn_WheelGroupState_h
