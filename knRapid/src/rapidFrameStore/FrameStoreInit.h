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
#ifndef rapid_FrameStoreInit_h
#define rapid_FrameStoreInit_h

#include "rapidFrameStore_Export.h"

#include "knMath/ATrans.h"
#include "knMath/Matrix.h"

#include <string>

namespace Miro
{
  class ConfigDocument;
}

namespace kn
{
  class FrameStore;
  class Frame;
  template<typename D> class TreeNode;
}

/// RAPID : the Robot API Delegate
namespace rapid
{
  /// RAPID
  class FrameRpyParameters;
  class FrameMParameters;
  class FrameQParameters;
  class FrameBaseParameters;

  class FrameStoreConfig;
  class Transform3D;

  /**
   * RAPID FrameStore initializer
   */
  class rapidFrameStore_Export FrameStoreInit
  {
  public:
    FrameStoreInit(Miro::ConfigDocument& xmlConfig,
                   kn::FrameStore * fs = 0,
                   std::string const& assetName = "",
                   std::string const& siteFrame = "");
    ~FrameStoreInit() throw();

    kn::FrameStore * getFrameStore() const throw() {
      return m_frameStore;
    }

    FrameStoreConfig * createFrameStoreConfig();

    void addRpyFrame(std::string const& name, FrameRpyParameters const& frame);
    void addMFrame(std::string const& name, FrameMParameters const& frame);
    void addQFrame(std::string const& name, FrameQParameters const& frame);

  protected:
    void addGeoCenter();
    void addGridFrames();
    void addXmlFrames(Miro::ConfigDocument& xmlConfig);
    void addFrame(std::string const& name, FrameBaseParameters const& frame, kn::Matrix3x3 const& rotation);

    void addToConfig(FrameStoreConfig * config,
                     kn::TreeNode<kn::Frame> const& frame) const;

    std::string const& keyFrameSubstitute(std::string& name);

    static void aTransToTransform3D(Transform3D& trans3d, kn::ATrans3 const& atrans) throw();

    std::string m_assetName;
    std::string m_siteFrame;
    
    kn::FrameStore * const m_frameStore;
    bool const m_owner;
    int m_serialId;
  };
}

#endif // rapid_FrameStore_h
