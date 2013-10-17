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
#include "RangeScanIo.h"
#include "rapidExtIo/RapidExtIoParameters.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidUtil/RapidHelper.h"

#include "rapidExtDds/RangeScanConfig.h"

#include <iostream>

namespace 
{
  struct RangeScanDirectionPair
  {
    rapid::ext::RangeScanDirection direction;
    char const * const name;
  };
  
  RangeScanDirectionPair const scanDirections[] = {
    { rapid::ext::SCAN_HORIZONTAL, "SCAN_HORIZONTAL"},
    { rapid::ext::SCAN_VERTICAL, "SCAN_VERTICAL" }
  };
  unsigned int const NUM_RTRANS_INTERPRETATIONS = sizeof(scanDirections) / sizeof(RangeScanDirectionPair);

  void printPerScanLineSetting(std::ostream& ostr, rapid::ShortSequence64 const& values, float scaling)
  {
    ostr << "{" << scaling << ": [";
    for (int i = 0; i < values.length(); ++i) {
      if (i > 0) {
        ostr << ", ";
      }
      ostr << values[i];
    }
    ostr << "]}";
  }
}

namespace rapid
{
  namespace ext
  {
    using namespace std;

    std::ostream& operator<< (std::ostream& ostr, RangeScanConfig const& rhs)
    {
      ostr << "RangeScanConfig: {" 
           << rhs.hdr << ", " 
           << rhs.referenceFrame << ", " << endl;
      ostr << "  scanLengths [";
      for (int i = 0; i < rhs.scanLengths.length(); ++i) {
        if (i > 0) {
          ostr << ", ";
        }
        ostr << rhs.scanLengths[i];
      }
      ostr << "], " << endl
           << "  " << scanDirections[rhs.scanDirection].name << endl
           << "  scanAzimuth: ";
      printPerScanLineSetting(ostr, rhs.scanAzimuth, rhs.scanAzimuthScale);
      ostr << ", " << endl
           << "  scanElevation: ";
      printPerScanLineSetting(ostr, rhs.scanElevation, rhs.scanElevationScale);
      ostr << ", " << endl
           << "  " << rhs.rangeScale << ", " << rhs.intensityScale << endl
           << "}";
      return ostr;
    }
    
    static void operator<<=(ShortSequence64& lhs, std::vector<short> const& rhs) 
    {
      assert(rhs.size() <= 64);
      lhs.ensure_length(rhs.size(), 64);
      for (int i = 0; i < lhs.length(); ++i) {
        lhs[i] = rhs[i];
      }
    }

    void operator<<= (RangeScanConfig& config, RangeScanConfigParameters const& params)
    {
      config.hdr <<= params.hdr;
      
      strncpy(config.referenceFrame, params.referenceFrame.c_str(), 127);
      config.referenceFrame[127] = 0;
      
      config.scanLengths <<= params.scanLengths;

      config.scanAzimuth <<= params.scanAzimuth;
      config.scanAzimuthScale = params.scanAzimuthScale;

      config.scanElevation <<= params.scanElevation;
      config.scanElevationScale = params.scanElevationScale;

      config.rangeScale = params.rangeScale;
      config.intensityScale = params.intensityScale;
    }
  }
} // namespace rapid
