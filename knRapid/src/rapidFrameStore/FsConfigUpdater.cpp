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
#include "FsConfigUpdater.h"
#include "FrameExtras.h"

#include "rapidIo/BaseTypesIo.h"

#include "rapidDds/FrameStoreConfig.h"

#include "miro/Log.h"

#include "knMath/ATrans.h"

namespace rapid
{
  using namespace std;
  using namespace kn;

  FsConfigUpdater::FsConfigUpdater(FrameStore& fs) :
      m_frameStore(fs)
  {}

  void
  FsConfigUpdater::operator()(FrameStoreConfig const * config)
  {
    FrameStore fs;

    MIRO_LOG(LL_NOTICE, "FS Config update.");

    // generate a forest from the frame store config message
    for (int i = 0; i < config->frames.length(); ++i) {
      FrameDef const& frame =  config->frames[i];
      FrameHandle parent = FrameHandle::NULL_HANDLE;
      if (frame.parent != NULL && strlen(frame.parent) != 0)
        parent = fs.lookup(frame.parent);

      kn::ATrans3 atrans;
      for (unsigned int j = 0; j < 3; ++j) {
        atrans.translation()[j] = frame.transform.xyz[j];
        for (unsigned int k = 0; k < 3; ++k) {
          atrans.matrix()(j, k) = frame.transform.rot[(j * 3 + k)];
        }
      }

      FrameHandle h = fs.add(frame.name, parent, atrans);

      if (h == FrameHandle::NULL_HANDLE) {
        MIRO_LOG_OSTR(LL_ERROR, "FsConfigUpdater: failed to add frame: " << frame.name);
      }
      else if (frame.extras.length() != 0) {
        FrameExtras * fse = new FrameExtras();
	fs.set_extras(h, fse);
        fse->extras() <<= frame.extras;
      }
    }

    // merge all trees of the generated frame-store into the global one
    FrameStore::FrameHandleVector roots = fs.children();
    FrameStore::FrameHandleVector::const_iterator first, last = roots.end();
    for (first = roots.begin(); first != last; ++first) {
      FrameTreeNode * tree = fs.clone_tree(*first);
      m_frameStore.merge_tree(tree);
    }
  }
}
