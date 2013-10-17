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
#include "FsPositionUpdater.h"
#include "RapidFrameStoreParameters.h"

#include "rapidUtil/Transform3DHelper.h"
#include "rapidIo/PositionIo.h"

#include "rapidDds/PositionConfig.h"
#include "rapidDds/PositionConfigSupport.h"
#include "rapidDds/PositionSample.h"
#include "rapidDds/PositionSampleSupport.h"
#include "rapidDds/CommandConstants.h"
#include "rapidDds/RapidConstants.h"

#include "miro/Log.h"
#include "knDds/DdsEventLoop.h"

#include <cassert>

namespace rapid
{
  using namespace std;
  using namespace kn;

  FsPositionUpdater::FsPositionUpdater(FrameStore& fs,
                                       FsPositionUpdaterParameters const& params) :
    m_params(params),
    m_frameStore(fs)
  {
    PositionConfig * c = PositionConfigTypeSupport::create_data();
    for (unsigned int i = 0; i < m_params.configParameters.size(); ++i) {
      *c <<= m_params.configParameters[i];
      (*this)(c);
    }
    PositionConfigTypeSupport::delete_data(c);
    
  }


  FsPositionUpdater::~FsPositionUpdater() throw()
  {
    StringConfigMap::const_iterator first, last = m_robotConfigs.end();
    for (first = m_robotConfigs.begin(); first != last; ++first) {
      PositionConfigTypeSupport::delete_data_ex(first->second, true);
    }
  }

  void
  FsPositionUpdater::connect(kn::DdsEventLoop& eventLoop) 
  {
    eventLoop.connect<rapid::PositionSample>(this,  rapid::POSITION_SAMPLE_TOPIC +
                                             m_params.topicSuffix,
                                             m_params.parentNode,
                                             m_params.sampleProfile,
                                             m_params.library);
    
    if (m_params.configParameters.empty()) {
      eventLoop.connect<rapid::PositionConfig>(this,  rapid::POSITION_CONFIG_TOPIC +
                                               m_params.topicSuffix,
                                               m_params.parentNode,
                                               m_params.configProfile,
                                               m_params.library);
    }
  }

  void
  FsPositionUpdater::operator()(PositionConfig const * config)
  {
    MIRO_LOG(LL_NOTICE, "PositionConfig update.");

    PositionConfig * c = PositionConfigTypeSupport::create_data();
    PositionConfigTypeSupport::copy_data(c, config);

    m_robotConfigs[config->hdr.srcName] = c;

  }

  void
  FsPositionUpdater::operator()(PositionSample const * sample)
  {
    StringFrameHandleMap::const_iterator iter =
      m_robotFrames.find(sample->hdr.srcName);
    FrameHandle handle;

    // test if already found in framestore
    if (iter == m_robotFrames.end()) {

      StringConfigMap::const_iterator configIter =
        m_robotConfigs.find(sample->hdr.srcName);
      if (configIter == m_robotConfigs.end()) {
        MIRO_LOG_OSTR(LL_NOTICE,
                      "FsPositionUpdater - received sample for unknown robot: " <<
                      sample->hdr.srcName);
        return;
      }

      PositionConfig * config = configIter->second;
      if (strcmp(rapid::FRAME_NAME_SITE, config->frameName) == 0) {
        handle = m_frameStore.lookup(config->hdr.srcName);
        if (handle != FrameHandle::NULL_HANDLE)
          handle = m_frameStore.parent(handle);
      }
      else if (strcmp(rapid::FRAME_NAME_ROVER, config->frameName) == 0) {
        handle = m_frameStore.lookup(config->hdr.srcName);
      }
      else {
        handle = m_frameStore.lookup(config->frameName);
      }

      if (handle == FrameHandle::NULL_HANDLE) {
        MIRO_LOG_OSTR(LL_NOTICE,
                      "FsPositionUpdater - Error adding position frame for " <<
                      config->hdr.srcName << ":" << endl <<
                      "FsPositionUpdater - unknown frame name: " << config->frameName <<
                      " " << config->hdr.srcName);
        return;
      }

      MIRO_LOG_OSTR(LL_NOTICE,
                    "FsPositionUpdater - adding position frame for " <<
                    config->hdr.srcName << ":" << endl <<
                    m_frameStore.full_name(handle));

      m_robotFrames[config->hdr.srcName] = handle;
    }
    else {
      handle = iter->second;
    }

    StringConfigMap::const_iterator it = m_robotConfigs.find(sample->hdr.srcName);
    assert(it != m_robotConfigs.end());
    rapid::PositionConfig const * config = it->second;

    ATrans3 l;
    rapid::Transform3DHelper::transform3DToATrans3(l, sample->pose, config->poseEncoding);

    if (m_params.inverted) {
      ATrans3 i(l.inverse());
      l = i;
    }

    m_frameStore.set_transform(handle, FrameHandle::NULL_HANDLE, l);
  }
}
