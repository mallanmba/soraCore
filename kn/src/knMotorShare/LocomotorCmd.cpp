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
#include "LocomotorCmd.h"

#include <iostream>
#include <algorithm>
#include <cmath>

#include "knConfig.h"

namespace
{
  char const * const locModeNames[] = {
    "MODE_NO_OP",
    "MODE_EMERGENCY_STOP",
    "MODE_STOP",
    "MODE_ROTATE",
    "MODE_TRANSLATE",
    "MODE_CRAB",
    "MODE_ARC",
    "MODE_CRAB_ARC",
    "MODE_DRIVE_TO",
    "MODE_CLOTHOID",
    "MODE_FAST_STEER",
    "MODE_UNKNOWN"
  };

  int const NUM_LOC_MODE_NAMES = sizeof(locModeNames) / sizeof(char const * const) - 1;
}

namespace kn
{
  using namespace std;

  std::ostream& operator << (std::ostream& ostr, LocomotorCmd const& rhs)
  {
    ostr << rhs.locModeName() << ": [";
    switch (rhs.locMode) {
        break;
      case LOC_MODE_ROTATE:
        ostr << (rhs.headingChange * 180./M_PI) << "deg";
        break;
      case LOC_MODE_TRANSLATE:
        ostr << rhs.distance << "m";
        break;
      case LOC_MODE_CRAB:
        ostr << rhs.distance << "m, "
             << (rhs.direction * 180./M_PI) << "deg";
        break;
      case LOC_MODE_ARC:
        ostr << rhs.distance << "m, "
             << (rhs.headingChange * 180./M_PI) << "deg";
        break;
      case LOC_MODE_CRAB_ARC:
        ostr << rhs.distance << "m, "
             << (rhs.headingChange * 180./M_PI) << "deg, "
             << (rhs.direction * 180./M_PI) << "deg";
        break;
      case LOC_MODE_DRIVE_TO:
        break;
      case LOC_MODE_CLOTHOID:
        break;
      case LOC_MODE_FAST_STEER:
        ostr << rhs.targetSpeed << "m/s, "
             << rhs.targetCurvature << "1/rad, "
             << rhs.timeout << "s";
        break;
      case LOC_MODE_EMERGENCY_STOP:
      case LOC_MODE_STOP:
      case LOC_MODE_NOP:
      default:
        break;

    }

    ostr << "]";

    return ostr;
  }

  char const *
  LocomotorCmd::locModeName() const
  {
    return locModeName(locMode);
  }

  char const *
  LocomotorCmd::locModeName(int mode)
  {
    ++mode; // modes start at -1
    if (mode < 0 || mode >= NUM_LOC_MODE_NAMES)
      mode = NUM_LOC_MODE_NAMES - 1;
    return locModeNames[mode];
  }
}
