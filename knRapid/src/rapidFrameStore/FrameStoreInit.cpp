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
#include "FrameStoreInit.h"
#include "FrameExtras.h"
#include "RapidFrameStoreParameters.h"

#ifdef RTIDDS_FOUND
#  include "rapidIo/BaseTypesIo.h"

#  include "rapidDds/FrameStoreConfig.h"
#  include "rapidDds/FrameStoreConfigSupport.h"
#endif 

#include "miro/ConfigDocument.h"
#include "miro/RobotParameters.h"
#include "miro/Log.h"

#include "knFrameStore/FrameStore.h"
#include "knMath/EulerAngles.h"
#include "knMath/Quaternion.h"

#include <ace/OS_NS_sys_time.h>

#include <sstream>
#include <cstring>

namespace rapid
{
  using namespace std;
  using namespace kn;

  FrameStoreInit::FrameStoreInit(Miro::ConfigDocument& xmlConfig,
                                 FrameStore * fs,
				 string const& assetName,
				 string const& siteFrame) :
    m_assetName(assetName),
    m_siteFrame(siteFrame),
    m_frameStore((fs == NULL)? new FrameStore() : fs),
    m_owner(fs == NULL),
    m_serialId(0)
  {
    addGeoCenter();
    // can't add all grid-frames due to config-message size
    //    addGridFrames();
    addXmlFrames(xmlConfig);
  }

  FrameStoreInit::~FrameStoreInit() throw()
  {
    if (m_owner)
      delete m_frameStore;
  }

  void
  FrameStoreInit::addFrame(std::string const& name, FrameBaseParameters const& frame, kn::Matrix3x3 const& rotation)
  {
    FrameHandle parent = NULL;

    if (frame.parent != "" && frame.parent != "/") {
      parent = m_frameStore->lookup(frame.parent);
      if (parent == NULL) {
        MIRO_LOG_OSTR(LL_CRITICAL, "Unable to find Parent Frame: " << frame.parent << " for " << name);
        return;
      }
    }

    // create rotation matrix
    ATrans3 t(Eigen::Translation3d(frame.x, frame.y, frame.z) * Eigen::AngleAxisd(rotation));
    FrameHandle h = m_frameStore->add(name, parent, t);

    if (!frame.extras.empty()) {
      FrameExtras * extras = new FrameExtras(frame.extras);
      m_frameStore->set_extras(h, extras);
    }
  }

  void
  FrameStoreInit::addRpyFrame(std::string const& name, FrameRpyParameters const& frame)
  {
    // create rotation matrix
    Matrix3x3 r = kn::eulerXyzToRotationMatrix(frame.roll, frame.pitch, frame.yaw);

    this->addFrame(name, frame, r);
  }

  void
  FrameStoreInit::addMFrame(std::string const& name, FrameMParameters const& frame)
  {
    // create rotation matrix
    double m[9] = {frame.r11, frame.r12, frame.r13,
                   frame.r21, frame.r22, frame.r23,
                   frame.r31, frame.r32, frame.r33
                  };
    Matrix3x3 r(m);
    this->addFrame(name, frame, r);
  }

  void
  FrameStoreInit::addQFrame(std::string const& name, FrameQParameters const& frame)
  {
    // create  rotation matrix
    Quaternion q(frame.qW, frame.qX, frame.qY, frame.qZ);
    q.normalize(); // @TODO: is this necessary?
    
    this->addFrame(name, frame, q.toRotationMatrix());
  }


  FrameStoreConfig *
  FrameStoreInit::createFrameStoreConfig()
  {
    FrameStoreConfig * config = NULL;

#ifdef RTIDDS_FOUND
    config = FrameStoreConfigTypeSupport::create_data();

    Miro::RobotParameters * params = Miro::RobotParameters::instance();

    // populate header
    strncpy(config->hdr.srcName, params->name.c_str(), 32);
    strncpy(config->hdr.assetName, params->name.c_str(), 32);
    config->hdr.serial = m_serialId++;

    ACE_Time_Value const timestamp = ACE_OS::gettimeofday();
    ACE_UINT64 uSec;
    timestamp.to_usec(uSec);
    config->hdr.timeStamp = ACE_INT64(uSec);


    FrameStore::FrameTree tree;
    m_frameStore->clone_tree(tree);

    FrameStore::FrameTree::const_iterator first, last = tree.end();
    for (first = tree.begin(); first != last; ++first) {
      addToConfig(config, *first);
    }
#endif

    return config;
  }

  void
  FrameStoreInit::addGeoCenter()
  {
    // add common root node: center of planetary body: the earth
    //    FrameHandle earth =
    m_frameStore->add("Earth", NULL, ATrans3::Identity());
  }

  void
  FrameStoreInit::addGridFrames()
  {
    FrameHandle earth = m_frameStore->lookup("/Earth");

    assert (earth != NULL);

    for (int zone = 1; zone <= 60; ++zone) {
      for (char band = 'C'; band <= 'X'; ++band) {

        // there is no band I nor O
        if (band == 'I' || band == 'O')
          continue;

        // X32, X34 & X36 are omitted
        if ((band == 'X') &&
                    (zone == 32 || zone == 34 || zone == 36)) {
          continue;
        }

        // @TODO: calculate transform of utmGrid frames

        stringstream gridName;
        gridName << "UtmGrid";
        gridName.width(2);
        gridName.fill('0');
        gridName << zone << band;
        m_frameStore->add(gridName.str(), earth, ATrans3::Identity());
      }
    }
  }

  void
  FrameStoreInit::addToConfig(FrameStoreConfig * config,
                              FrameTreeNode const& frame) const
  {
#ifdef RTIDDS_FOUND
    unsigned int index = config->frames.length();
    config->frames.length(index + 1);

    strncpy(config->frames[index].name, frame.data().name().c_str(), 32);
    if (frame.parent() != NULL) {
      string parentName;
      vector<FrameTreeNode *> const& ancestry = frame.parent()->ancestry();
      vector<FrameTreeNode *>::const_iterator first, last = ancestry.end();
      for (first = ancestry.begin(); first != last; ++first) {
        parentName += "/" + (*first)->data().name();
      }
      strncpy(config->frames[index].parent, parentName.c_str(), 256);
    }
    aTransToTransform3D(config->frames[index].transform, frame.data().transform());

    FrameExtras const * e = dynamic_cast<FrameExtras const *>(frame.data().extras());
    if (e != NULL) {
      config->frames[index].extras <<= e->extras();
    }
#endif
  }

  void
  FrameStoreInit::aTransToTransform3D(Transform3D& trans3d, ATrans3 const& atrans) throw()
  {
#ifdef RTIDDS_FOUND
    for (unsigned int i = 0; i < 3; ++i) {
      trans3d.xyz[i] = atrans.translation()[i];
      for (unsigned int j = 0; j < 3; ++j) {
        trans3d.rot[(i * 3 + j)] = atrans.rotation()(i, j);
      }
    }
#endif
  }

  void
  FrameStoreInit::addXmlFrames(Miro::ConfigDocument& xmlConfig)
  {
    // get all frames defined in the config file
    xmlConfig.setSection("Frames");
    typedef Miro::ConfigDocument::StringVector StringVector;
    StringVector frames = xmlConfig.getInstances("rapid::FrameRpyParameters");

    // add all frames specified in RPY
    StringVector::iterator first, last = frames.end();
    for (first = frames.begin(); first != last; ++first) {
      FrameRpyParameters frame;
      xmlConfig.getType("rapid::FrameRpyParameters", *first, frame);
      keyFrameSubstitute(frame.parent); 
      addRpyFrame(keyFrameSubstitute(*first), frame);
    }

    // add all frames specified in Quaternios
    frames = xmlConfig.getInstances("rapid::FrameQParameters");
    last = frames.end();
    for (first = frames.begin(); first != last; ++first) {
      FrameQParameters frame;
      xmlConfig.getType("rapid::FrameQParameters", *first, frame);
      keyFrameSubstitute(frame.parent); 
      addQFrame(keyFrameSubstitute(*first), frame);
    }
  }

  std::string const&
  FrameStoreInit::keyFrameSubstitute(std::string& name)
  {
    if (name == "$ASSET_NAME")
      name = m_assetName;
    else if (name == "$SITE_FRAME")
      name = m_siteFrame;

    return name;
  }
}
