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
#ifndef kn_DdsBuiltInIo_h
#define kn_DdsBuiltInIo_h

#include "knDdsUtil_Export.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>
#include <ndds/ndds_utility_cpp.h>

#include <string>
#include <iosfwd>

namespace kn
{
  struct knDdsUtil_Export PrintIp
  {
    PrintIp(int i);
    PrintIp(char const * buffer);

    unsigned char ip[4];
  };
  
  knDdsUtil_Export std::ostream& operator<<(std::ostream& ostr, PrintIp const& rhs);  
  knDdsUtil_Export std::ostream& operator<<(std::ostream& ostr, DDS_Locator_t const& rhs);
  knDdsUtil_Export std::ostream& operator<<(std::ostream& ostr, DDS_ProductVersion_t const& rhs);
  knDdsUtil_Export std::string guidString(DDS_BuiltinTopicKey_t const& key);
}


#endif
