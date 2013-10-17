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
#ifndef rapid_RapidHelper_h
#define rapid_RapidHelper_h

#include "rapidUtil_Export.h"

#include "miro/Log.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <ace/Time_Value.h>
#include <ace/OS_NS_sys_time.h>

#include <iosfwd>
#include <string>

#include <cstdio>

namespace rapid
{
  class Header;

   namespace RapidHelper
   {
     rapidUtil_Export DDS::LongLong aceTimeValue2RapidTime(ACE_Time_Value const& time) throw();
     rapidUtil_Export ACE_Time_Value rapidTime2AceTimeValue(DDS::LongLong n) throw();
     
     rapidUtil_Export void initHeader(rapid::Header& header,
                                      std::string const& source = "",
                                      std::string const& name = "",
                                      ACE_Time_Value const& timestamp = ACE_OS::gettimeofday(),
                                      ACE_INT32 status = 0, ACE_INT32 serial = -1);
     rapidUtil_Export void updateHeader(rapid::Header& header,
                                        ACE_Time_Value const& timestamp = ACE_OS::gettimeofday(),
                                        ACE_INT32 status = 0, ACE_INT32 serial = 0);
   }
  
  inline
  DDS::LongLong
  RapidHelper::aceTimeValue2RapidTime(ACE_Time_Value const& time) throw()
  { 
    ACE_UINT64 t;
    time.to_usec(t);
    return t;
  }

  inline
  ACE_Time_Value
  RapidHelper::rapidTime2AceTimeValue(DDS::LongLong n) throw()
  {
    const long long thirtyYears = 946713600000000LL; // offset from 1970 to 2000 in microseconds
//  const long long oneYear     =  31536000000000LL; // one year in microseconds
    const long long oneWeek     =    604800000000LL; // one week in microseconds

    if(llabs(n) > oneWeek && llabs(n) < thirtyYears) { // chances are extremely good that we have a timestamp in milliseconds
      MIRO_LOG_OSTR(LL_WARNING, "RapidHelper: timestamp appears to be in milliseconds; multiplying by 1000: " << n);
      n *= 1000;
    }

    long long s = n / 1000000;
    suseconds_t u = (suseconds_t)(n - (s * 1000000));
    ACE_Time_Value t(s, u);

    // catch negative values
    if (n < 0) {
      // use slow, but correct version
      // we might loose precision here, though
      t.set(n / 1000000.);
    }
    return t;
  }
}

#endif // rapid_RapidHelper_h
