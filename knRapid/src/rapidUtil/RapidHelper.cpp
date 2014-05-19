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
#include "RapidHelper.h"

#include "rapidDds/Header.h"

#include "miro/TimeHelper.h"
#include "miro/RobotParameters.h"

#include <cmath>

namespace rapid
{
  using namespace std;

  void
  RapidHelper::initHeader(rapid::Header& header, const std::string& source, const std::string& name, 
                          const ACE_Time_Value& timestamp, int32_t status, int32_t serial)
  {
    strncpy(header.srcName, source.empty()? Miro::RobotParameters::instance()->name.c_str() : source.c_str(), 32);
    header.srcName[31] = 0;
    strncpy(header.assetName, name.empty()? Miro::RobotParameters::instance()->name.c_str() : name.c_str(), 32);
    header.assetName[31] = 0;
    updateHeader(header, timestamp, status, serial);
  }

  void
  RapidHelper::initHeader(rapid::Header& header,
                          std::string const& source, std::string const& name,
                          kn::TimePoint const& timestamp, int32_t status, int32_t serial)
  {
      strncpy(header.srcName, source.empty()? Miro::RobotParameters::instance()->name.c_str() : source.c_str(), 32);
      header.srcName[31] = 0;
      strncpy(header.assetName, name.empty()? Miro::RobotParameters::instance()->name.c_str() : name.c_str(), 32);
      header.assetName[31] = 0;
      updateHeader(header, timestamp, status, serial);
  }
  
  void
  RapidHelper::updateHeader(rapid::Header& header,
                            ACE_Time_Value const& timestamp, int32_t status, int32_t serial)
  {
    if (serial == 0) {
      serial = header.serial;
    }
    else if (serial < 0) {
      serial = timestamp.sec();
    }
    header.timeStamp = aceTimeValue2RapidTime(timestamp);
    header.statusCode = status;
    header.serial = serial;
  }
  
  void
  RapidHelper::updateHeader(rapid::Header& header,
                            kn::TimePoint const& timestamp, int32_t status, int32_t serial)
  {
      if (serial == 0) {
          serial = header.serial;
      }
      else if (serial < 0) {
          serial = kn::duration_cast<kn::seconds>(timestamp.time_since_epoch()).count();
      }
      header.timeStamp = knTimePoint2RapidTime(timestamp);
      header.statusCode = status;
      header.serial = serial;
  }
} // namespace rapid
