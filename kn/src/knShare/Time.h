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

#include <ace/Time_Value.h>
#include <boost/chrono.hpp>

namespace kn
{
  typedef boost::chrono::system_clock Clock;
  typedef boost::chrono::system_clock::duration Duration;
  typedef boost::chrono::system_clock::time_point TimePoint;

  typedef boost::chrono::duration<double> DurationD;

  inline
  ACE_Time_Value toAceTime(Duration const& d) {
    timeval v;
    v.tv_sec = (d.count() * Duration::period::num) / Duration::period::den;
    v.tv_usec = ((d.count() * Duration::period::num) % Duration::period::den) * 1000000 / Duration::period::den;
  
    return ACE_Time_Value(v);
  }

  inline
  ACE_Time_Value toAceTime(TimePoint const& t) {
    return toAceTime(t.time_since_epoch());
  }

  inline
  Duration fromAceTime(ACE_Time_Value const& t) 
  {
    Duration::rep d = t.sec() * Duration::period::den + t.usec() * (Duration::period::den / 1000000);
    
    return Duration(d);
  }
}

#endif
