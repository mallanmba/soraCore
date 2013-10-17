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
#ifndef kn_VEStopProvider_h
#define kn_VEStopProvider_h

#include "rapidExtIo_Export.h"
#include "VEStopIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidExtDds/VEStopState.h"
#include "rapidExtDds/VEStopStateSupport.h"
#include "rapidExtDds/VEStopConfig.h"
#include "rapidExtDds/VEStopConfigSupport.h"

namespace rapid
{
  namespace ext
  {
    class VEStopTopicPairParameters;
    typedef Provider_T<rapid::ext::VEStopConfig,
                       rapid::ext::VEStopState,
                       VEStopTopicPairParameters> VEStopProviderBase;
  
    class rapidExtIo_Export VEStopProvider : public VEStopProviderBase
    {
    public:
      VEStopProvider(VEStopTopicPairParameters const& params);
      virtual ~VEStopProvider() throw();
    };
  }
}
#endif // kn_VEStopProvider_h
