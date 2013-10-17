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
#ifndef kn_Trajectory2DProvider_h
#define kn_Trajectory2DProvider_h

#include "rapidExtIo_Export.h"
#include "Trajectory2DIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidExtDds/Trajectory2DSample.h"
#include "rapidExtDds/Trajectory2DSampleSupport.h"
#include "rapidExtDds/Trajectory2DConfig.h"
#include "rapidExtDds/Trajectory2DConfigSupport.h"

namespace rapid
{
  namespace ext
  {
    class Trajectory2DTopicPairParameters;
    typedef Provider_T<rapid::ext::Trajectory2DConfig,
                       rapid::ext::Trajectory2DSample,
                       Trajectory2DTopicPairParameters> Trajectory2DProviderBase;
  
    class rapidExtIo_Export Trajectory2DProvider : public Trajectory2DProviderBase
    {
    public:
      Trajectory2DProvider(Trajectory2DTopicPairParameters const& params);
      virtual ~Trajectory2DProvider() throw();
    };
  }
}
#endif // kn_Trajectory2DProvider_h
