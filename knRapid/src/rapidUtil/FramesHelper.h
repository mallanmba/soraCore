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
#ifndef rapid_FrameStoreHelper_h
#define rapid_FrameStoreHelper_h

#include "rapidUtil_Export.h"

#include "knFrameStore/FrameHandle.h"

#include <string>

namespace rapid
{
  class rapidUtil_Export FramesHelper
  {
  public:
    static kn::FrameHandle robotFrame();
    static kn::FrameHandle siteFrame();
    static kn::FrameHandle utmFrame();

    static kn::FrameHandle rapidFrameNameLookup(std::string const& path);
  };
}

#endif // FrameStoreSingleton_h
