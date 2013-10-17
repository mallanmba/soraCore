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
#include "EphemerisProvider.h"
#include "RapidExtArcIoParameters.h"

#include "rapidExtArcDds/ExtArcConstants.h"

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      using namespace std;

      /**
       * ctor
       */
      // no changes to constructor
      EphemerisProvider::EphemerisProvider(EphemerisTopicPairParameters const& params) :
        EphemerisProviderBase(EPHEMERIS_CONFIG_TOPIC,EPHEMERIS_SAMPLE_TOPIC, params)
      {}
      
      void
      EphemerisProvider::publish(ACE_Time_Value const& solutionTime, double lat, double lon, rapid::Vec3f vec)
      {
        rapid::ext::arc::EphemerisSample& sample = m_dataSupplier.event();
        RapidHelper::updateHeader(sample.hdr);
        
        sample.solutionTime = RapidHelper::aceTimeValue2RapidTime(solutionTime);
        sample.lat = lat;
        sample.lon = lon;
        sample.vec[0] = vec[0];
        sample.vec[1] = vec[1];
        sample.vec[2] = vec[2];
        
        m_dataSupplier.sendEvent();
      }
    }
  }
}
