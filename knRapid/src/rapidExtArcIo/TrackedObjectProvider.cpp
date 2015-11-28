/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2015 United States Government as represented by the
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
#include "TrackedObjectProvider.h"

#include "rapidExtArcDds/ExtArcConstants.h"
#include "RapidExtArcIoParameters.h"

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      TrackedObjectProvider::TrackedObjectProvider(TrackedObjectTopicPairParameters const& params, const std::string& entityName)
        :
        TrackedObjectProviderBase(TRACKEDOBJECT_CONFIG_TOPIC,
                                  TRACKEDOBJECT_SAMPLE_TOPIC,
                                  params,
                                  entityName)
      {
        rapid::ext::arc::TrackedObjectConfig& config = m_configSupplier.event();
        config.poseEncoding     = (rapid::RotationEncoding)params.config.poseEncoding;
        config.velocityEncoding = (rapid::RotationEncoding)params.config.velocityEncoding;
        // classifications
        config.classifications.length(params.config.classifications.size());
        for(unsigned i = 0; i < params.config.classifications.size(); i++) {
          strncpy(config.classifications[i], params.config.classifications[i].c_str(), 16);
          config.classifications[i][15] = '\0';
        }
      }
    }
  }
}
