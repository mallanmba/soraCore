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
#include "FsJointUpdater.h"
#include "RapidFrameStoreParameters.h"

#include "rapidIo/JointIo.h"

#include "rapidDds/JointConfig.h"
#include "rapidDds/JointConfigSupport.h"
#include "rapidDds/JointSample.h"
#include "rapidDds/JointSampleSupport.h"
#include "rapidDds/RapidConstants.h"

#include "miro/Log.h"
#include "knDds/DdsEventLoop.h"

#include "knMath/EulerAngles.h"

#include <algorithm>
#include <iterator>

namespace rapid
{
  using namespace std;
  using namespace kn;

  namespace {
    struct NameTypePair {
      char const * const name;
      FsJointUpdater::Axis param;
    };

    NameTypePair const updateAxis[] = {
      { "X",     FsJointUpdater::X },
      { "Y",     FsJointUpdater::Y },
      { "Z",     FsJointUpdater::Z },
      { "Roll",  FsJointUpdater::Roll },
      { "Pitch", FsJointUpdater::Pitch },
      { "Yaw",   FsJointUpdater::Yaw }
    };

    unsigned int NAME_TYPE_PAIRS = sizeof(updateAxis)/sizeof(NameTypePair);

    void
    updateRotation(kn::ATrans3& atrans, kn::Matrix3x3Vector const& updates)
    {
      Matrix3x3 r = Matrix3x3::Identity();
      kn::Matrix3x3Vector::const_reverse_iterator first, last = updates.rend();
      for (first = updates.rbegin(); first != last; ++first) {
        r = r.eval() * (*first);
      }

      for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
          atrans(y, x) = r(y, x);
        }
      }
    }
  }

  FsJointUpdater::FsJointUpdater(FrameStore& fs,
                                 FsJointUpdaterParameters const& params) :
    m_params(params),
    m_frameStore(fs)
  {

    JointConfigPtr c(JointConfigTypeSupport::create_data(), JointConfigTypeSupport::delete_data);
    for (unsigned int i = 0; i < m_params.configParameters.size(); ++i) {
      (*c) <<= m_params.configParameters[i];
      (*this)(c.get());
    }
  }

  FsJointUpdater::~FsJointUpdater() throw()
  {
  }

  void
  FsJointUpdater::connect(kn::DdsEventLoop& eventLoop) 
  {
    eventLoop.connect<JointSample>(this,  rapid::JOINT_SAMPLE_TOPIC +
                                   m_params.topicSuffix,
                                   m_params.parentNode,
                                   m_params.sampleProfile,
                                   m_params.library);
    
    if (m_params.configParameters.empty()) {
      eventLoop.connect<JointConfig>(this,  rapid::JOINT_CONFIG_TOPIC +
                                     m_params.topicSuffix,
                                     m_params.parentNode,
                                     m_params.configProfile,
                                     m_params.library);
    }
  }

  void
  FsJointUpdater::operator()(JointConfig const * config)
  {
    MIRO_LOG(LL_NOTICE, "JointConfig update.");

    JointConfigPtr c(JointConfigTypeSupport::create_data(), JointConfigTypeSupport::delete_data);
    JointConfigTypeSupport::copy_data(c.get(), config);

    m_robotConfigs[config->hdr.srcName] = c;
  }

  void
  FsJointUpdater::operator()(JointSample const * sample)
  {
    StringJointVectorMap::const_iterator iter =
      m_robotJoints.find(sample->hdr.srcName);
    if (iter == m_robotJoints.end()) {

      StringConfigMap::const_iterator configIter =
        m_robotConfigs.find(sample->hdr.srcName);
      if (configIter == m_robotConfigs.end()) {
        MIRO_LOG_OSTR(LL_NOTICE,
                      "FsJointUpdater - received sample for unknown robot: " <<
                      sample->hdr.srcName);
        return;
      }

      JointConfigPtr const& config = configIter->second;


      FsJointVector joints;
      joints.handles.reserve(config->jointDefinitions.length());
      joints.axis.reserve(config->jointDefinitions.length());

      for (int i = 0; i < config->jointDefinitions.length(); ++i) {
        // can't we cache this?
        FrameHandle handle = m_frameStore.lookup(config->jointDefinitions[i].frameName);

        if (handle == FrameHandle::NULL_HANDLE) {
          MIRO_LOG_OSTR(LL_NOTICE,
                        "FsJointUpdater - Error adding position frame for " <<
                        config->hdr.srcName << ":" << endl <<
                        "FsJointUpdater - unknown frame name: " <<
                        config->jointDefinitions[i].frameName);
          return;
        }

        MIRO_LOG_OSTR(LL_NOTICE,
                      "FsJointUpdater - adding position frame for " <<
                      config->hdr.srcName << ":" << endl <<
                      m_frameStore.full_name(handle));


        Axis a = FsJointUpdater::X;
        for (unsigned int j = 0; j < NAME_TYPE_PAIRS; j++) {
          if (strcmp(updateAxis[j].name, config->jointDefinitions[i].dof) == 0) {
            a = updateAxis[j].param;
            break;
          }
        }

        joints.handles.push_back(handle);
        joints.axis.push_back(a);
      }

      joints.uniqueHandles.reserve(joints.handles.size());
      unique_copy(joints.handles.begin(), joints.handles.end(), back_insert_iterator<FrameHandleVector>(joints.uniqueHandles));

      iter = m_robotJoints.insert(m_robotJoints.begin(),
                                  make_pair(string(config->hdr.srcName), joints));
    }

    FsJointVector const& joints(iter->second);

    if ((int)joints.handles.size() != sample->anglePos.length()) {
      MIRO_LOG_OSTR(LL_NOTICE,
                    "FsJointUpdater - received sample with non-matching joint number: " << sample->anglePos.length()  << ", " <<
                    sample->hdr.srcName << " suffix " << m_params.topicSuffix);

      return;
    }

    ATrans3Vector transforms;
    m_frameStore.get_frame_transforms(joints.uniqueHandles, transforms);

    ATrans3Vector::iterator atrans = transforms.begin();
    kn::Matrix3x3Vector updates;
    updates.reserve(3);

    FrameHandle prevFrame = joints.handles.front();
    for (unsigned int i = 0; i < joints.handles.size(); ++i) {

      // allow multiple consecutive updates to the same frame
      if (joints.handles[i] != prevFrame) {
        updateRotation(*atrans, updates);
        updates.clear();
        ++atrans;

	assert(atrans != transforms.end());
      }

      unsigned index = joints.axis[i];
      switch (joints.axis[i]) {
      case FsJointUpdater::X:
      case FsJointUpdater::Y:
      case FsJointUpdater::Z:
	atrans->translation()[index] = sample->anglePos[i];
	break;
      case FsJointUpdater::Roll:
        updates.push_back(kn::Matrix3x3(kn::AngleAxis(sample->anglePos[i], Vector3::UnitX())));
        break;
      case FsJointUpdater::Pitch:
        updates.push_back(kn::Matrix3x3(kn::AngleAxis(sample->anglePos[i], Vector3::UnitY())));
        break;
      case FsJointUpdater::Yaw:
        updates.push_back(kn::Matrix3x3(kn::AngleAxis(sample->anglePos[i], Vector3::UnitZ())));
        break;
      }

      prevFrame = joints.handles.front();
    }
    updateRotation(*atrans, updates);
    

    m_frameStore.set_frame_transforms(joints.uniqueHandles, transforms);
  }
}
