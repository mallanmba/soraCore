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
#include "Float32Provider.h"
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
      Float32Provider::Float32Provider(Float32TopicPairParameters const& params, const std::string& entityName) :
        Float32ProviderBase(FLOAT32_CONFIG_TOPIC, FLOAT32_SAMPLE_TOPIC, params, entityName)
      {}
      
      
      void 
      //   Float32Provider::publish(const ACE_Time_Value& time, const int status, const rapid::FloatSequence32 &d)
      Float32Provider::publish(const ACE_Time_Value& time, const int status, const std::vector<float>& d)
      {
        Float32Sample& sample = m_dataSupplier.event();
        
        rapid::RapidHelper::updateHeader(sample.hdr, time);
        sample.hdr.statusCode = status;
        
        sample.data.length(d.size());
        
        // loop through d, assign values to data
        for (size_t i = 0; i < d.size(); i++){
          sample.data[i] = d[i];
        }
        
        m_dataSupplier.sendEvent();
      }
    }
  }
}

