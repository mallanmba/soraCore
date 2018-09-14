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
#ifndef kn_Time_h
#define kn_Time_h

#include "knShare_Export.h"

#include "Chrono.h"

#include <iosfwd>

namespace kn
{
  /** @ingroup knShare */
  typedef system_clock Clock;
  /** @ingroup knShare */
  typedef system_clock::duration Duration;
  /** @ingroup knShare */
  typedef system_clock::time_point TimePoint;
  /** @ingroup knShare */
  typedef duration_values<Duration> DurationValues;

  /** @ingroup knShare */
  typedef duration<double> DurationD;
  
  /** @ingroup knShare */
  inline
  Duration absDiff(const TimePoint & time1, const TimePoint & time2)
  {
    if (time1 > time2) {
      return time1 - time2;
    }
    return time2 - time1;
  }
  
  class Time6;
  /** @ingroup knShare */
  knShare_Export std::ostream& operator<<(std::ostream& ostr, Time6 const& timestamp);
  
  /** @ingroup knShare */
  class knShare_Export Time6
  {
  public:
    Time6(Duration const& t) :
      m_timestamp(t)
    {}
    Time6(TimePoint const& t) :
      m_timestamp(t.time_since_epoch())
    {}
    
  protected:
    Duration m_timestamp;
    
    friend knShare_Export std::ostream& operator<<(std::ostream& ostr, Time6 const& timestamp);
  };

  inline double tv2d(TimePoint const& time)
  {
    duration<double> durationInSeconds(time.time_since_epoch());

    return durationInSeconds.count();
  }
  inline double tv2d(Duration const& d)
  {
    duration<double> durationInSeconds(d);

    return durationInSeconds.count();
  }

}

#endif
