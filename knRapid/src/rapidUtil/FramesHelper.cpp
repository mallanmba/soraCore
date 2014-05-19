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
#include "FramesHelper.h"

#include "rapidDds/CommandConstants.h"

#include "knFrameStore/FrameStoreSingleton.h"

#include "miro/RobotParameters.h"

namespace
{
  kn::FrameHandle s_robot;
  kn::FrameHandle s_site;
  kn::FrameHandle s_utm;
}

namespace rapid
{
  using namespace std;
  using namespace kn;

  FrameHandle
  FramesHelper::robotFrame()
  {
    if (s_robot == FrameHandle::NULL_HANDLE) {
      FrameStore * fs = FrameStoreSingleton::instance();
      // this does not require locking, as the result is always identical
      s_robot = fs->lookup(Miro::RobotParameters::instance()->name);
    }
    return s_robot;
  }

  FrameHandle
  FramesHelper::siteFrame()
  {
    if (s_site == FrameHandle::NULL_HANDLE) {
      FrameStore * fs = FrameStoreSingleton::instance();
      FrameHandle robot = robotFrame();
      // this does not require locking, as the result is always identical
      if (robot != FrameHandle::NULL_HANDLE)
        s_site = fs->parent(robot);
    }
    return s_site;
  }
  
  FrameHandle
  FramesHelper::utmFrame()
  {
    if (s_utm == FrameHandle::NULL_HANDLE) {
      FrameStore * fs = FrameStoreSingleton::instance();
      FrameHandle frame = siteFrame();
      while ((frame != FrameHandle::NULL_HANDLE) && (!fs->is_root(frame))) {
        if (fs->name(frame).compare(0, sizeof("UtmGrid") - 1, "UtmGrid") == 0) {
          break;
        }
        frame = fs->parent(frame);
      }
      s_utm = frame;
    }
    return s_utm;
  }
  

  // we use local copies of those string constants here
  // to avoid a link-dependency on libRapidDds
  // for now knSvcsShare should not depend on rapid

  FrameHandle
  FramesHelper::rapidFrameNameLookup(string const& path)
  {
    FrameHandle handle = FrameHandle::NULL_HANDLE;

    if (path.compare(FRAME_NAME_ROVER) == 0) {
      handle = robotFrame();
    }
    else if (path.compare(FRAME_NAME_SITE) == 0) {
      handle = siteFrame();
    }
    else if (path.compare(FRAME_NAME_UTM) == 0) {
      handle = utmFrame();
    }
    else {
      FrameStore * fs = FrameStoreSingleton::instance();
      handle = fs->lookup(path);
    }
    
    return handle;
  }
}

