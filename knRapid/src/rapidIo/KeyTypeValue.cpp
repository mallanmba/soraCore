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
#include "KeyTypeValue.h"

#include <iostream>

namespace rapid
{
  KeyType::KeyType(std::string const& k,
                   std::string const& t) :
    key(k),
    type(t)
  {}

  std::ostream& operator << (std::ostream& ostr, KeyType const& rhs)
  {
    ostr << "Key=" << rhs.key << std::endl
         << "Type=" << rhs.type << std:: endl;
    return ostr;
  }

  TypeValue::TypeValue(std::string const& t,
                       std::string const& v) :
    type(t),
    value(v)
  {}

  std::ostream& operator << (std::ostream& ostr, TypeValue const& rhs)
  {
    ostr << "Type=" << rhs.type << std:: endl
         << "Value=" << rhs.value << std::endl;
    return ostr;
  }

  KeyTypeValue::KeyTypeValue(std::string const& k,
                             std::string const& t,
                             std::string const& v) :
    TypeValue(t, v),
    key(k)
  {}

  std::ostream& operator << (std::ostream& ostr, KeyTypeValue const& rhs)
  {
    ostr << "Key=" << rhs.key << std::endl
         << "Type=" << rhs.type << std:: endl
         << "Value=" << rhs.value;
    return ostr;
  }
}
