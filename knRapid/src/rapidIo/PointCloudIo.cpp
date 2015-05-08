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
#include "PointCloudIo.h"
#include "HeaderIo.h"
#include "BaseTypesIo.h"
#include "rapidIo/RapidIoParameters.h"

#include "rapidDds/PointCloudConfig.h"

#include <iostream>

namespace 
{  
  struct XyzModePair {
    rapid::PointSampleXyzMode mode;
    char const * const name;
  };

  XyzModePair const xyzModesMap[] = {
    { rapid::PS_XYZ, "PS_XYZ" },
    { rapid::PS_XYt, "PS_XYt" },
    { rapid::PS_Rae, "PS_Rae" }
  };

  unsigned int const NUM_XYZ_MODES = sizeof(xyzModesMap) / sizeof(XyzModePair);

  struct AttributeModePair {
    rapid::PointSampleAttributeMode mode;
    char const * const name;
  };

  AttributeModePair const attributeModesMap[] = {
    { rapid::PS_UNUSED,       "PS_UNUSED"      },
    { rapid::PS_INTENSITY,    "PS_INTENSITY"    },
    { rapid::PS_LAYER,        "PS_LAYER"        },
    { rapid::PS_ECHO,         "PS_ECHO"         },
    { rapid::PS_LAYER4_ECHO4, "PS_LAYER4_ECHO4" },
    { rapid::PS_PULSE,        "PS_PULSE"        }
  };

  unsigned int const NUM_ATTRIBUTE_MODES = sizeof(attributeModesMap) / sizeof(AttributeModePair);
}

namespace rapid
{  
  std::ostream& operator<< (std::ostream& ostr, rapid::PointCloudConfig const& rhs)
  {
    ostr << "PointCloudConfig: {"
         << rhs.hdr << ", "
         << rhs.referenceFrame << ", "
         << xyzModesMap[rhs.xyzMode].name << ", ["
         << attributeModesMap[rhs.attributesMode[0]].name << ", "
         << attributeModesMap[rhs.attributesMode[1]].name << "], "
         << rhs.attributes
         << "}";
    return ostr;
  }

  void operator<<= (PointCloudConfig& config, PointCloudConfigParameters const& params)
  {
    config.hdr <<= params.hdr;
    
    strncpy(config.referenceFrame, params.referenceFrame.c_str(), 127);
    config.referenceFrame[127] = 0;

    // xyzMode
    config.xyzMode = PS_XYZ;
    for (unsigned int i = 0; i < NUM_XYZ_MODES; ++i) {
      if (strcmp(xyzModesMap[i].name, params.xyzMode.c_str()) == 0) {
        config.xyzMode = xyzModesMap[i].mode;
        break;
      }
    }

    config.attributesMode[0] = PS_UNUSED;
    for (unsigned int i = 0; i < NUM_ATTRIBUTE_MODES; ++i) {
      if (strcmp(attributeModesMap[i].name, params.attributeMode0.c_str()) == 0) {
        config.attributesMode[0] = attributeModesMap[i].mode;
        break;
      }
    }

    config.attributesMode[1] = PS_UNUSED;
    for (unsigned int i = 0; i < NUM_ATTRIBUTE_MODES; ++i) {
      if (strcmp(attributeModesMap[i].name, params.attributeMode1.c_str()) == 0) {
        config.attributesMode[1] = attributeModesMap[i].mode;
        break;
      }
    }


    // attributeModesxs
    config.attributes <<= params.attributes;
  }

} // namespace rapid
