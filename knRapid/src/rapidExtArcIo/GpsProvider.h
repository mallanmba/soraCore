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
#ifndef rapidGpsProvider_h
#define rapidGpsProvider_h

#include "rapidExtArcIo_Export.h"
#include "GpsIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidExtArcDds/GpsConfig.h"
#include "rapidExtArcDds/GpsConfigSupport.h"
#include "rapidExtArcDds/GpsSample.h"
#include "rapidExtArcDds/GpsSampleSupport.h"

class ACE_Time_Value;

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class GpsTopicPairParameters;

      typedef Provider_T<GpsConfig, GpsSample, GpsTopicPairParameters> GpsProviderBase;
  
      class rapidExtArcIo_Export GpsProvider : public GpsProviderBase
      {
      public:
        GpsProvider(GpsTopicPairParameters const& params, const std::string& entityName);
        
        void publish(const ACE_Time_Value& time, 
                     const int status,
                     const double xyz[],
                     const double sigmaXyz[],
                     const short utmZone,
                     const short utmDesig,
                     const long mode,
                     const int numSats,
                     const long long diffAge,
                     const long long solAge);
      };
    }
  }
}
#endif // rapidGpsProvider_h
