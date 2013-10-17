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
#ifndef rapid_FsPositionUpdater_h
#define rapid_FsPositionUpdater_h

#include "rapidFrameStore_Export.h"

#include "knFrameStore/FrameStore.h"

#include <map>
#include <string>

namespace kn
{
  class DdsEventLoop;
}

namespace rapid
{
  class PositionConfig;
  class PositionSample;
  
  class FsPositionUpdaterParameters;

  /**
   * FrameStore position updater
   */
  class rapidFrameStore_Export FsPositionUpdater
  {
  public:
    FsPositionUpdater(kn::FrameStore& fs,
                      FsPositionUpdaterParameters const& m_params);
    ~FsPositionUpdater() throw();

    void connect(kn::DdsEventLoop& eventLoop);

    void operator()(PositionConfig const * config);
    void operator()(PositionSample const * sample);

  protected:
    typedef std::map<std::string, PositionConfig *> StringConfigMap;
    typedef std::map<std::string, kn::FrameHandle> StringFrameHandleMap;

    FsPositionUpdaterParameters const& m_params;
    kn::FrameStore& m_frameStore;

    StringConfigMap m_robotConfigs;
    StringFrameHandleMap m_robotFrames;
  };
}

#endif // rapid_FsPositionUpdater_h
