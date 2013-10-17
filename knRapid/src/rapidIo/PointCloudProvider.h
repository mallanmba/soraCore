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
#ifndef rapid_PointCloudProvider_h
#define rapid_PointCloudProvider_h

#include "rapidIo_Export.h"
#include "RapidIoParameters.h"
#include "PointCloudIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidDds/PointCloudConfig.h"
#include "rapidDds/PointCloudConfigSupport.h"
#include "rapidDds/PointCloudSample.h"
#include "rapidDds/PointCloudSampleSupport.h"

#include "knMath/Vector.h"   


namespace rapid
{
  class PointCloudTopicPairParameters;
  typedef Provider_T<PointCloudConfig,
                     PointCloudSample,
                     PointCloudTopicPairParameters> PointCloudProviderBase;

  
  class rapidIo_Export PointCloudProvider : public PointCloudProviderBase
  {
  public:
    PointCloudProvider(PointCloudTopicPairParameters const& params );
    
    void setScale(kn::Vector3 const& scale) throw() {
      m_scale = scale;
    }
    void setOrigin(kn::Vector3 const& origin) throw() {
      m_origin = origin;
    }

  private:
    PointCloudTopicPairParameters m_params;

    kn::Vector3 m_origin;
    kn::Vector3 m_scale; 

  }; // class PointCloudProvider

} // namespace rapid


#endif // rapid_PointCloudProvider_h
