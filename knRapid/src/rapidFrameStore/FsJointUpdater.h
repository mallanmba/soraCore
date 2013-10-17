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
#ifndef rapid_FsJointUpdater_h
#define rapid_FsJointUpdater_h

#include "rapidFrameStore_Export.h"

#include "knFrameStore/FrameStore.h"

#include <boost/shared_ptr.hpp>

#include <map>
#include <string>
#include <vector>

namespace kn
{
  class DdsEventLoop;
}

namespace rapid
{
  class JointConfig;
  class JointSample;

  class FsJointUpdaterParameters;

  /**
   * FrameStore Joints updater
   */
  class rapidFrameStore_Export FsJointUpdater
  {
  public:
    FsJointUpdater(kn::FrameStore& fs,
                   FsJointUpdaterParameters const& params);
    ~FsJointUpdater() throw();

    void connect(kn::DdsEventLoop& eventLoop);

    void operator()(JointConfig const * config);
    void operator()(JointSample const * sample);

    enum Axis { X, Y, Z, Roll, Pitch, Yaw };

  protected:
    typedef std::vector<kn::FrameHandle> FrameHandleVector;
    class FsJointVector
    {
    public:
      FrameHandleVector handles;
      std::vector<Axis> axis;
      FrameHandleVector uniqueHandles;
    };
    typedef boost::shared_ptr<JointConfig> JointConfigPtr;
    typedef std::map<std::string, FsJointVector> StringJointVectorMap;
    typedef std::map<std::string, JointConfigPtr> StringConfigMap;

    FsJointUpdaterParameters const& m_params;
    kn::FrameStore& m_frameStore;

    StringConfigMap m_robotConfigs;
    StringJointVectorMap m_robotJoints;
  };
}

#endif // rapid_FsJointUpdater_h
