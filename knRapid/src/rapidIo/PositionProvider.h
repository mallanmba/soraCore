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
#ifndef rapidPositionProvider_h
#define rapidPositionProvider_h

#include "rapidIo_Export.h"
#include "rapidIo/PositionIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidDds/PositionConfig.h"
#include "rapidDds/PositionConfigSupport.h"
#include "rapidDds/PositionSample.h"
#include "rapidDds/PositionSampleSupport.h"
#include "rapidDds/BaseTypes.h"

#include "knMath/Vector.h"
#include "knMath/Matrix.h"
#include "knMath/ATrans.h"
#include "knMath/Quaternion.h"

class ACE_Time_Value;

namespace rapid
{
  class PositionTopicPairParameters;

  typedef Provider_T<PositionConfig,
                     PositionSample,
                     PositionTopicPairParameters> PositionProviderBase;

  class rapidIo_Export PositionProvider : public PositionProviderBase
  {
  public:
    PositionProvider(PositionTopicPairParameters const& params);

    void 
    publish(const ACE_Time_Value &time, const int status, 
            kn::ATrans3 const& pose);
    void 
    publish(const ACE_Time_Value &time, const int status, 
            const kn::Vector3 &xyz, const kn::Vector3 &rpy);

    void 
    publish(const ACE_Time_Value &time, const int status, 
            const kn::Vector3 &xyz, const kn::Vector3 &rpy,
            const kn::Vector3 &vel, const kn::Vector3 &gyro, 
            const std::vector<rapid::ParameterUnion> &values = std::vector<rapid::ParameterUnion>());

    void 
    publish(const ACE_Time_Value &time, const int status,
            const kn::Vector3 &xyz,  const kn::Quaternion &rpy);
       
    void 
    publish(const ACE_Time_Value &time, const int status, 
            const kn::Vector3 &xyz,  const kn::Quaternion &rpy, 
            const kn::Vector3 &vel, const kn::Quaternion &gyro, 
            const std::vector<rapid::ParameterUnion> &values = std::vector<rapid::ParameterUnion>());
    
  protected:
    void
    setTransform3D(rapid::Transform3D &transform,
                   const kn::Vector3 &xyz, const kn::Vector3 &rot);
    void
    setTransform3D(rapid::Transform3D &transform, kn::ATrans3 const& rot);
    void
    setTransform3D(rapid::Transform3D &transform,
                   const kn::Vector3 &xyz, const kn::Quaternion &rot);
    
  };
}
#endif // rapidPositionProvider_h
