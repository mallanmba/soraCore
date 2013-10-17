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
#include "NavMapIo.h"
#include "RapidExtIoParameters.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidExtDds/NavMapConfig.h"

#include "miro/Exception.h"

#include <iostream>
#include <cassert>
#include <cstdlib>

namespace rapid
{
  namespace ext
  {
    using namespace std;

    
    std::ostream& operator<< (std::ostream& ostr, ext::NavMapConfig const& rhs)
    {
      ostr << "NavMapConfig: {" 
           << rhs.hdr << ", " 
           << rhs.referenceFrame << ", ["
           << rhs.offset[0] << ", " << rhs.offset[1] << "], [" 
           << rhs.cellSize[0] << ", " << rhs.cellSize[1] << "], ["
           << rhs.numCells[0] << ", " << rhs.numCells[1] << "],";
      cout << "{";
      for (int i = 0; i < rhs.shortLayerNames.length(); ++i) {
        if (i > 0) {
          ostr << ", ";
        }
        ostr << rhs.shortLayerNames[i];
      }
      cout << "}, {";
      for (int i = 0; i < rhs.octetLayerNames.length(); ++i) {
        if (i > 0) {
          ostr << ", ";
        }
        ostr << rhs.octetLayerNames[i];
      }

      cout << "}}";
      return ostr;
    }
    

    void operator<<=(NavMapConfig& config, NavMapConfigParameters const& params)
    {
      config.hdr <<= params.hdr;
      strncpy(config.referenceFrame, params.referenceFrame.c_str(), 127);
      config.referenceFrame[127] = 0;

      config.offset[0] = params.offsetX;
      config.offset[1] = params.offsetY;

      config.cellSize[0] = config.cellSize[1] = params.cellSizeXY;
      config.numCells[0] = config.numCells[1] = params.numCellsXY;

      config.shortLayerNames.length(params.shortLayers.size());
      for (int i = 0; i < config.shortLayerNames.length(); ++i) {
        strncpy(config.shortLayerNames[i], params.shortLayers[i].name.c_str(), 31);
        config.shortLayerNames[i][31] = 0;
      }
      config.octetLayerNames.length(params.octetLayers.size());
      for (int i = 0; i < config.octetLayerNames.length(); ++i) {
        strncpy(config.octetLayerNames[i], params.octetLayers[i].name.c_str(), 31);
        config.octetLayerNames[i][31] = 0;
      }
    }
  }
} // namespace rapid
