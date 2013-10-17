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
#include "MotorGroupFuture.h"

#include <iostream>
#include <cmath>

namespace kn
{
  std::ostream& operator<< (std::ostream& ostr, MotorGroupFuture const& rhs)
  {

    // print ace time value w/o Miro timeHelper
    ostr << "{"
         << rhs.targetTime.sec() << ".";
    ostr.width(6);
    ostr.fill('0');
    ostr << ::abs(rhs.targetTime.usec()) << ", {";

    {
      MotorGroupFuture::DoubleVector::const_iterator first, last = rhs.motorPositions.end();
      for (first = rhs.motorPositions.begin(); first != last; ++first) {
        if (first != rhs.motorPositions.begin()) {
          ostr << ", ";
        }
        ostr << *first;
      }
    }
    ostr << "}, {";
    {
      MotorGroupFuture::DoubleVector::const_iterator first, last = rhs.motorSpeeds.end();
      for (first = rhs.motorSpeeds.begin(); first != last; ++first) {
        if (first != rhs.motorSpeeds.begin()) {
          ostr << ", ";
        }
        ostr << *first;
      }
      ostr << "}";
    }
    ostr << "}";
    return ostr;
  }
}
