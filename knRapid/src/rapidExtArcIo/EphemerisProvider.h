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
#ifndef rapidEphemerisProvider_h
#define rapidEphemerisProvider_h

#include "rapidExtArcIo_Export.h"
#include "EphemerisIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidExtArcDds/EphemerisConfig.h"
#include "rapidExtArcDds/EphemerisConfigSupport.h"
#include "rapidExtArcDds/EphemerisSample.h"
#include "rapidExtArcDds/EphemerisSampleSupport.h"

class ACE_Time_Value;

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class EphemerisTopicPairParameters;

      typedef Provider_T<EphemerisConfig, EphemerisSample, EphemerisTopicPairParameters> EphemerisProviderBase;
  
      class rapidExtArcIo_Export EphemerisProvider : EphemerisProviderBase
      {
      public:
        EphemerisProvider(EphemerisTopicPairParameters const& params, const std::string& entityName);
        
        void publish(ACE_Time_Value const& solutionTime, double lat, double lon, rapid::Vec3f vec);
      };
    }
  }
}
#endif // rapidEphemerisProvider_h
