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
#include "GpsProvider.h"
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
      GpsProvider::GpsProvider(GpsTopicPairParameters const& params, const std::string& entityName) :
        GpsProviderBase(GPS_CONFIG_TOPIC,GPS_SAMPLE_TOPIC, params, entityName)
      {}
      
      void
      GpsProvider::publish(const ACE_Time_Value& time, 
                           const int status,
                           const double xyz[],
                           const double sigmaXyz[],
                           const short utmZone,
                           const short utmDesig,
                           const long mode,
                           const int numSats,
                           const long long diffAge,
                           const long long solAge)
      {
        rapid::ext::arc::GpsSample& sample = m_dataSupplier.event();
        
        rapid::RapidHelper::updateHeader(sample.hdr, time);
        sample.hdr.statusCode = status;
        
        sample.xyz[0] = xyz[0];
        sample.xyz[1] = xyz[1];
        sample.xyz[2] = xyz[2];
        
        sample.sigmaXyz[0] = sigmaXyz[0];
        sample.sigmaXyz[1] = sigmaXyz[1];
        sample.sigmaXyz[2] = sigmaXyz[2];
        
        sample.utmZone = utmZone;
        sample.utmDesig = utmDesig;
        sample.mode = mode;
        sample.numSats = numSats;
        sample.diffAge = diffAge;
        sample.solAge = solAge;
        
        m_dataSupplier.sendEvent();
      }
    }
  }
}
