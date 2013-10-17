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
#include "NoticeIo.h"

#include "RapidExtTraclabsIoParameters.h"
#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidExtTraclabsDds/NoticeConfig.h"

#include <iostream>

namespace rapid
{
  namespace ext
  {
    namespace traclabs
    {
      std::ostream& operator<< (std::ostream& ostr, NoticeConfig const& rhs)
      {
        ostr << "NoticeConfig: {" 
             << rhs.hdr << ", {";
        for (DDS_Long i = 0; i < rhs.items.length(); ++i) {
          if (i > 0) {
            ostr << ", ";
          }
          ostr << "{" << rhs.items[i].itemId 
               << ", " << rhs.items[i].itemDescription << "}";
        }
        ostr << ","
             << rhs.valueKeys
             << "}";

        return ostr;
      }

      void operator<<= (NoticeConfig& config, NoticeConfigParameters const& params)
      {
        config.hdr <<= params.hdr;
        
        // state machine description
        config.items.length(params.items.size());
        for (int i = 0; i < config.items.length(); ++i) {
          strncpy(config.items[i].itemId, params.items[i].itemId.c_str(), 15);
          config.items[i].itemId[15] = 0;
          strncpy(config.items[i].itemDescription, params.items[i].itemDescription.c_str(), 63);
          config.items[i].itemDescription[63] = 0;
        }  

        config.valueKeys <<= params.valueKeys;
      }
    }
  }
}
