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
#ifndef rapid_KeyTypeValue_h
#define rapid_KeyTypeValue_h

#include "rapidIo_Export.h"

#include <vector>
#include <string>
#include <iosfwd>

namespace rapid
{
  class rapidIo_Export KeyType
  {
  public:
    std::string key;
    std::string type;

    KeyType() {}
    KeyType(std::string const& k,
            std::string const& t);
  };

  rapidIo_Export std::ostream& operator << (std::ostream& ostr, KeyType const& rhs);

  typedef std::vector<KeyType> KeyTypeVector;

  class rapidIo_Export TypeValue
  {
  public:
    std::string type;
    std::string value;

    TypeValue() {}
    TypeValue(std::string const& t,
              std::string const& v);
  };

  rapidIo_Export std::ostream& operator << (std::ostream& ostr, TypeValue const& rhs);

  typedef std::vector<TypeValue> TypeValueVector;

  class rapidIo_Export KeyTypeValue : public TypeValue
  {
  public:
    std::string key;

    KeyTypeValue() {}
    KeyTypeValue(std::string const& k,
                 std::string const& t,
                 std::string const& v);
  };

  rapidIo_Export std::ostream& operator << (std::ostream& ostr, KeyTypeValue const& rhs);

  typedef std::vector<KeyTypeValue> KeyTypeValueVector;
}

#endif // rapid_KeyTypeValue_h
