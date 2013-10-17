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
#ifndef kn_ProcessManagerProvider_h
#define kn_ProcessManagerProvider_h

#include "rapidExtIo_Export.h"
#include "ProcessManagerIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidExtDds/ProcessManagerState.h"
#include "rapidExtDds/ProcessManagerStateSupport.h"
#include "rapidExtDds/ProcessManagerConfig.h"
#include "rapidExtDds/ProcessManagerConfigSupport.h"

namespace rapid
{
  namespace ext
  {
    class ProcessManagerTopicPairParameters;
    typedef Provider_T<rapid::ext::ProcessManagerConfig,
                       rapid::ext::ProcessManagerState,
                       ProcessManagerTopicPairParameters> ProcessManagerProviderBase;
  
    class rapidExtIo_Export ProcessManagerProvider : public ProcessManagerProviderBase
    {
    public:
      ProcessManagerProvider(ProcessManagerTopicPairParameters const& params);
      virtual ~ProcessManagerProvider() throw();
    };
  }
}
#endif // kn_ProcessManagerProvider_h
