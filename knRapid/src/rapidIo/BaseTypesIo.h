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
#ifndef rapid_BaseTypesIo_h
#define rapid_BaseTypesIo_h

#include "rapidIo_Export.h"
#include "KeyTypeValue.h"

#include "rapidDds/BaseTypes.h"

#include <iosfwd>

namespace rapid
{
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, ParameterUnion const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, ParameterSequence16 const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, KeyTypePair const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, KeyTypeSequence16 const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, KeyTypeValueTriple const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, KeyTypeValueSequence16 const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, String16Sequence32 const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, String32Sequence32 const& rhs);
  rapidIo_Export extern std::ostream& operator<< (std::ostream& ostr, String128Sequence64 const& rhs);

  rapidIo_Export extern void operator <<= (rapid::KeyTypePair& dst, rapid::KeyType const& src);
  rapidIo_Export extern void operator <<= (rapid::KeyType& dst, rapid::KeyTypePair const& src);
  
  rapidIo_Export extern void operator <<= (rapid::ParameterUnion& dst, rapid::TypeValue const& src);
  rapidIo_Export extern void operator <<= (rapid::TypeValue& dst, rapid::ParameterUnion const& src);
  rapidIo_Export extern void operator <<= (rapid::ParameterSequence16& dst, TypeValueVector const& src);
  rapidIo_Export extern void operator >>= (rapid::ParameterSequence16 const& dst, TypeValueVector& src);
  
  rapidIo_Export extern void operator <<= (rapid::KeyTypeSequence64& dst, rapid::KeyTypeVector const& src);
  rapidIo_Export extern void operator <<= (rapid::KeyTypeVector& dst, rapid::KeyTypeSequence64 const& src);
  
  rapidIo_Export extern void operator <<= (rapid::KeyTypeValueTriple& dst, rapid::KeyTypeValue const& src);
  rapidIo_Export extern void operator <<= (rapid::KeyTypeValue& dst, rapid::KeyTypeValueTriple const& src);
  
  rapidIo_Export extern void operator <<= (rapid::KeyTypeValueSequence64& dst, rapid::KeyTypeValueVector const& src);
  rapidIo_Export extern void operator <<= (rapid::KeyTypeValueVector& dst, rapid::KeyTypeValueSequence64 const& src); 

  rapidIo_Export extern void operator <<= (rapid::LongSequence32& dst, std::vector<int> const& src);
  rapidIo_Export extern void operator <<= (rapid::FloatSequence32& dst, std::vector<double> const& src); 
  rapidIo_Export extern void operator <<= (rapid::String16Sequence16& dst, std::vector<std::string> const& src); 
  rapidIo_Export extern void operator <<= (rapid::String128Sequence64& dst, std::vector<std::string> const& src); 
}

#endif // rapid_BaseTypesIo_h
