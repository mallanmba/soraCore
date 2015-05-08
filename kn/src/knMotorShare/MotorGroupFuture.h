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
#ifndef kn_MotorGroupFuture_h
#define kn_MotorGroupFuture_h

#include "knMotorShare_Export.h"

#include "ace/Time_Value.h"

#include <vector>
#include <iosfwd>

namespace kn
{
  class MotorGroupFuture;
  knMotorShare_Export std::ostream& operator<< (std::ostream& ostr, MotorGroupFuture const& rhs);

  /**
   * @ingroup knMotorShare
   * @brief Sample of motor group state as expected at a future time.
   */
  class knMotorShare_Export MotorGroupFuture
  {
  public:
    typedef std::vector<double> DoubleVector;

    //! The time of the expected future state.
    ACE_Time_Value targetTime;
    DoubleVector motorPositions;
    DoubleVector motorSpeeds;

    //! Default constructor.
    MotorGroupFuture() {}
    //! Initializing constructor.
    MotorGroupFuture(ACE_Time_Value const& targetTime,
                     DoubleVector const& motorPositions,
                     DoubleVector const& motorSpeeds) :
      targetTime(targetTime),
      motorPositions(motorPositions),
      motorSpeeds(motorSpeeds)
    {}
  };
}
#endif // kn_MotorGroupFuture_h
