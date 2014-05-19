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
#ifndef rapidFloat32Provider_h
#define rapidFloat32Provider_h

#include "rapidExtArcIo_Export.h"
//#include "RapidExtArcIoParameters.h"
#include "Float32Io.h"

#include "rapidUtil/Provider_T.h"


#include "rapidExtArcDds/Float32Config.h"
#include "rapidExtArcDds/Float32ConfigSupport.h"
#include "rapidExtArcDds/Float32Sample.h"
#include "rapidExtArcDds/Float32SampleSupport.h"

class ACE_Time_Value;

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class Float32TopicPairParameters;

      typedef Provider_T<rapid::ext::arc::Float32Config,
                         rapid::ext::arc::Float32Sample,
                         Float32TopicPairParameters> Float32ProviderBase;
      
      class rapidExtArcIo_Export Float32Provider : Float32ProviderBase
      {
      public:
        Float32Provider(Float32TopicPairParameters const& params, const std::string& entityName);
        
        //     void publish(const ACE_Time_Value &time, const int status, const rapid::FloatSequence32 &d);
        void publish(const ACE_Time_Value &time, const int status, const std::vector<float>& d);
      };
    }
  }
}
#endif // rapidFloat32Provider_h
