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
#include "HeaderIo.h"
#include "RapidIoParameters.h"

#include "rapidUtil/RapidHelper.h"

#include "rapidDds/Header.h"
#include "miro/TimeHelper.h"

#include <iostream>

namespace rapid
{
  using namespace std;

  std::ostream& operator<< (ostream& ostr, Header const& rhs)
  {
    ACE_Time_Value timestamp = RapidHelper::rapidTime2AceTimeValue(rhs.timeStamp);

    ostr << "{" << timestamp 
         << ", src=" << rhs.srcName
         << ", asset=" << rhs.assetName
         << ", status=" << rhs.statusCode
         << ", serial=" << rhs.serial
         << "}" << flush;
    return ostr;
  }

  void operator<<=(Header& lhs, HeaderParameters const& rhs)
  {
    RapidHelper::initHeader(lhs,
                            rhs.srcName,
                            rhs.assetName,
                            rhs.timeStamp,
                            rhs.statusCode,
                            rhs.serial);
  } 

  void operator>>=(Header const& lhs, HeaderParameters& rhs)
  {
    rhs.srcName = lhs.srcName;
    rhs.assetName = lhs.assetName;
    rhs.timeStamp = RapidHelper::rapidTime2AceTimeValue(lhs.timeStamp);
    rhs.statusCode = lhs.statusCode;
    rhs.serial = lhs.serial;
  }
} // namespace rapid
