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
#include "PositionProvider.h"
#include "RapidIoParameters.h"

#include "rapidUtil/RapidHelper.h"

#include "rapidDds/RapidConstants.h"

#include "knMath/ATrans.h"
#include "knMath/EulerAngles.h"

#include <ace/Time_Value.h>
#include <ace/OS_NS_sys_time.h>

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

namespace rapid
{
  using namespace std;

  /**
   * ctor
   */
  PositionProvider::PositionProvider(PositionTopicPairParameters const& params) :
    PositionProviderBase(POSITION_CONFIG_TOPIC, POSITION_SAMPLE_TOPIC, params)
  {
  }

  //////////////////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////////////

  void PositionProvider::publish(const ACE_Time_Value &time, const int status, 
				 const kn::Vector3 &xyz, const kn::Vector3 &rpy)
  {
    rapid::PositionSample& sample = m_dataSupplier.event();
    
    rapid::RapidHelper::updateHeader(sample.hdr, time);
    sample.hdr.statusCode = status;

    setTransform3D(sample.pose, xyz, rpy);

    m_dataSupplier.sendEvent();

  }


  void PositionProvider::publish(const ACE_Time_Value &time, const int status, 
				 const kn::Vector3 &xyz, const kn::Vector3 &rpy,
				 const kn::Vector3 &vel, const kn::Vector3 &gyro, 
				 const std::vector<rapid::ParameterUnion> &values)
  {
    rapid::PositionSample& sample = m_dataSupplier.event();
    
    rapid::RapidHelper::updateHeader(sample.hdr, time);
    sample.hdr.statusCode = status;

    setTransform3D(sample.pose, xyz, rpy);
    setTransform3D(sample.velocity, vel, gyro);

    sample.values.ensure_length(values.size(), 64);
    for (size_t i = 0; i < values.size(); i++){
      sample.values[i] = values[i];
    }

    m_dataSupplier.sendEvent();

  }


  //////////////////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////////////

  void 
  PositionProvider::publish(const ACE_Time_Value &time, const int status,
			    const kn::Vector3 &xyz,  const kn::Quaternion &rpy)
  {
    rapid::PositionSample& sample = m_dataSupplier.event();
    
    rapid::RapidHelper::updateHeader(sample.hdr, time);
    sample.hdr.statusCode = status;
    
    setTransform3D(sample.pose, xyz, rpy);
    
    m_dataSupplier.sendEvent();
  }

  void 
  PositionProvider::publish(const ACE_Time_Value &time, const int status, 
                            kn::ATrans3 const& pose)
  {
    rapid::PositionSample& sample = m_dataSupplier.event();
    
    rapid::RapidHelper::updateHeader(sample.hdr, time);
    sample.hdr.statusCode = status;
    
    setTransform3D(sample.pose, pose);

    m_dataSupplier.sendEvent();
  }

  void 
  PositionProvider::publish(const ACE_Time_Value &time, const int status, 
			    const kn::Vector3 &xyz,  const kn::Quaternion &rpy, 
			    const kn::Vector3 &vel, const kn::Quaternion &gyro, 
			    const std::vector<rapid::ParameterUnion> &values)
  {
    rapid::PositionSample& sample = m_dataSupplier.event();
    
    rapid::RapidHelper::updateHeader(sample.hdr, time);
    sample.hdr.statusCode = status;
    
    setTransform3D(sample.pose, xyz, rpy);
    setTransform3D(sample.velocity, vel, gyro);

    sample.values.ensure_length(values.size(), 64);
    for (size_t i = 0; i < values.size(); i++){
      sample.values[i] = values[i];
    }

    m_dataSupplier.sendEvent();
  }


  void
  PositionProvider::setTransform3D(rapid::Transform3D &transform,
                                   const kn::Vector3 &xyz, const kn::Vector3 &rot)
  {
    for (unsigned int i = 0; i < 3; ++i) {
      transform.xyz[i] = xyz[i]; 
    }

    for (unsigned int i = 0; i < 3; ++i) {
      transform.rot[i] = rot[i]; 
    }
  }

  void
  PositionProvider::setTransform3D(rapid::Transform3D &transform,
				   const kn::Vector3 &xyz, const kn::Quaternion &rot)
  {
    for (unsigned int i = 0; i < 3; ++i) {
      transform.xyz[i] = xyz[i]; 
    }

    kn::Matrix3x3 rotationMatrix = rot.matrix();
    
    int index = 0;
    for (unsigned int row = 0; row < 3; ++row) {
      for (unsigned int col = 0; col < 3; ++col, ++index) {
        transform.rot[index] = rotationMatrix(row,col);
      }
    }
  }
  void
  PositionProvider::setTransform3D(rapid::Transform3D &transform, kn::ATrans3 const& pose)
  {
    kn::Vector3 const& xyz = pose.translation();
    kn::Matrix3x3 const& rot = pose.rotation();

    for (unsigned int i = 0; i < 3; ++i) {
      transform.xyz[i] = xyz[i]; 
    }

    int index = 0;
    for (unsigned int row = 0; row < 3; ++row) {
      for (unsigned int col = 0; col < 3; ++col, ++index) {
        transform.rot[index] = rot(row,col);
      }
    }
  }
}
