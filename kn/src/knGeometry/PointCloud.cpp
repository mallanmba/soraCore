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
#include "PointCloud.h"

#include "knFrameStore/FrameStoreSingleton.h"

#include <iostream>
#include <string>

namespace 
{
  char const * attributeFormats[] = {
    "PAF_NONE", 
    "PAF_INTENSITY8",
    "PAF_INTENSITY16_DISTANCE16"
  };
}
namespace kn 
{
  using namespace std;
  
  std::ostream& operator<<(std::ostream& ostr, PointCloud const& pc)
  {
    FrameStore * fs = FrameStoreSingleton::instance();
    std::string ref("<NULL>");
    if (pc.referenceFrame != FrameHandle::NULL_HANDLE) {
      ref = fs->name(pc.referenceFrame);
    }
    ostr << "{"
         << pc.timestamp << ", "
         << ref << ", "
         << attributeFormats[pc.attFormat] << ", "
         << pc.transform << ", "
         << pc.points.size() << ", "
         << pc.rowLens.size() 
         << "}";
    
    return ostr; 
  }
  
  void PointCloud::clear()
  {
    points.clear();
    rowLens.clear();
  }

}