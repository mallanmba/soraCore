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
#ifndef kn_JointProvider_h
#define kn_JointProvider_h

#include "rapidIo_Export.h"
#include "JointIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidDds/JointSample.h"
#include "rapidDds/JointSampleSupport.h"
#include "rapidDds/JointConfig.h"
#include "rapidDds/JointConfigSupport.h"

namespace rapid
{
  class JointTopicPairParameters;
  typedef Provider_T<rapid::JointConfig,
                     rapid::JointSample,
                     JointTopicPairParameters> JointProviderBase;

  class rapidIo_Export JointProvider : public JointProviderBase
  {
  public:
    JointProvider(JointTopicPairParameters const& params, const std::string& entityName);
    virtual ~JointProvider() throw();
  };
}
#endif // kn_JointProvider_h
