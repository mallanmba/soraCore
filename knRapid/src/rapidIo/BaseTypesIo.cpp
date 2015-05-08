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
#include "BaseTypesIo.h"

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cassert>

namespace
{
  char const * const typeNames[] = {
    "BOOL",
    "DOUBLE",
    "FLOAT",
    "INT",
    "LONGLONG",
    "STRING",
    "VEC3d",
    "MAT33f"
  };
  int const NUM_TYPE_NAMES = sizeof(typeNames) / sizeof(char const * const);
}

namespace rapid
{
  using namespace std;

  ostream& operator<< (ostream& ostr, KeyTypePair const& rhs)
  {
    assert (0 <= rhs.type && rhs.type < NUM_TYPE_NAMES);
    ostr << "{" 
         << rhs.key << ", "
         << typeNames[rhs.type]
         << "}";
    return ostr;
  }

  ostream& operator<< (ostream& ostr, ParameterUnion const& rhs)
  {
    assert (0 <= rhs._d && rhs._d < NUM_TYPE_NAMES);

    ostr << "{" 
         << typeNames[rhs._d] << ", ";

    switch(rhs._d) {
    case rapid::RAPID_BOOL:
      ostr << (rhs._u.b ? "true" : "false");
      break;
    case rapid::RAPID_DOUBLE:
      ostr << rhs._u.d;
      break;
    case rapid::RAPID_FLOAT:
      ostr << rhs._u.f;
      break;
    case rapid::RAPID_INT:
      ostr << rhs._u.i;
      break;
    case rapid::RAPID_LONGLONG:
      ostr << rhs._u.ll;
      break;
    case rapid::RAPID_STRING:
      ostr << rhs._u.s;
      break;
    case rapid::RAPID_VEC3d:
      ostr << "{";
      for (int i = 0; i < 3; ++i) {
        if (i > 0) {
          ostr << " ";
        }
        ostr << rhs._u.vec3d[i];
      }
      ostr << "}";
      break;
    case rapid::RAPID_MAT33f:
      ostr << "{";
      for (int i = 0; i < 9; ++i) {
        if (i > 0) {
          ostr << " ";
        }
        ostr << rhs._u.mat33f[i];
      }
      ostr << "}";
      break;
    }
    ostr << "}";
    return ostr;
  }

  namespace
  {
    template<typename S>
    void printSequence(ostream& ostr, S const& rhs) {
      ostr << "{";
      for (DDS_Long i = 0; i < rhs.length(); ++i) {
        if (i > 0) {
          ostr << ", ";
        }
        ostr << rhs[i];
      }
      ostr << "}";
    }
  }

  ostream& operator<< (ostream& ostr, ParameterSequence16 const& rhs)
  {
    printSequence(ostr, rhs);
    return ostr;
  }

  ostream& operator<< (ostream& ostr, KeyTypeValueTriple const& rhs)
  {
    ostr << "{" 
         << rhs.key << ", "
         << rhs.value << "}";
    return ostr;
  }

  ostream& operator<< (ostream& ostr, KeyTypeSequence64 const& rhs)
  {
    printSequence(ostr, rhs);
    return ostr;
  }

  ostream& operator<< (ostream& ostr, KeyTypeValueSequence64 const& rhs)
  {
    printSequence(ostr, rhs);
    return ostr;
  }

  ostream& operator<< (ostream& ostr, String16Sequence32 const& rhs)
  {
    printSequence(ostr, rhs);
    return ostr;
  }

  ostream& operator<< (ostream& ostr, String32Sequence32 const& rhs)
  {
    printSequence(ostr, rhs);
    return ostr;
  }
  ostream& operator<< (ostream& ostr, String128Sequence64 const& rhs)
  {
    printSequence(ostr, rhs);
    return ostr;
  }



  void operator<<= (rapid::KeyTypePair& dst, rapid::KeyType const& src)
  {
    strncpy(dst.key, src.key.c_str(), 32);
    dst.key[31] = 0;
      
    // default is string
    if (src.type == "DOUBLE") {
      dst.type = RAPID_DOUBLE;
    }
    else if (src.type == "FLOAT") {
      dst.type = RAPID_FLOAT;
    }
    else if (src.type == "INT") {
      dst.type = RAPID_INT;
    }
    else if (src.type == "LONGLONG") {
      dst.type = RAPID_LONGLONG;
    }
    else if (src.type == "BOOL") {
      dst.type = RAPID_BOOL;
    }
    else {
      dst.type = RAPID_STRING;
    }  
  }
  
  void operator<<= (rapid::KeyType& dst, rapid::KeyTypePair const& src)
  {
    dst.key = src.key;

    switch (src.type) {
    case RAPID_STRING:
      dst.type = "STRING";
      break;
    case RAPID_DOUBLE:
      dst.type = "DOUBLE";
      break;
    case RAPID_FLOAT:
      dst.type = "FLOAT";
      break;
    case RAPID_INT:
      dst.type = "INT";
      break;
    case RAPID_BOOL:
      dst.type = "BOOL";
      break;
    case RAPID_VEC3d:
      dst.type = "VEC3d";
      break;
    case RAPID_MAT33f:
      dst.type = "MAT33f";
      break;
    case RAPID_LONGLONG:
      dst.type = "LONGLONG";
      break;
    }
  }
  
  void operator<<= (rapid::KeyTypeSequence64& dst, rapid::KeyTypeVector const& src)
  {
    dst.ensure_length(src.size(), src.size());
      
    for (int i = 0; i < dst.length(); ++i) {
      dst[i] <<= src[i];
    }
  }
  
  void operator<<= (rapid::KeyTypeVector& dst, rapid::KeyTypeSequence64 const& src)
  {
    dst.resize(src.length());
    
    for (unsigned int i = 0; i < dst.size(); ++i) {
      dst[i] <<= src[i];
    }
  }

  void operator<<= (rapid::ParameterUnion& dst, rapid::TypeValue const& src)
  {
    stringstream value(src.value);
    
    // default is string
    if (src.type == "DOUBLE") {
      dst._d = RAPID_DOUBLE;
      value >> dst._u.d;
    }
    else if (src.type == "FLOAT") {
      dst._d = RAPID_FLOAT;
      value >> dst._u.f;
    }
    else if (src.type == "INT") {
      dst._d = RAPID_INT;
      value >> dst._u.i;
    }
    else if (src.type == "LONGLONG") {
      dst._d = RAPID_LONGLONG;
      value >> dst._u.ll;
    }
    else if (src.type == "BOOL") {
      dst._d = RAPID_BOOL;
      dst._u.b = (value.str() == "true");
    }
    else if (src.type == "VEC3d") {
      dst._d = RAPID_VEC3d;
      for (int i = 0; i < 3; ++i) {
        value >> dst._u.vec3d[i];
      }
    }
    else if (src.type == "MAT33f") {
      dst._d = RAPID_MAT33f;
      for (int i = 0; i < 9; ++i) {
        value >> dst._u.mat33f[i];
      }
    }
    else {
      dst._d = RAPID_STRING;
      strncpy(dst._u.s, value.str().c_str(), 127);
      dst._u.s[127] = 0;
    }
  
  }
  
  void operator<<= (rapid::ParameterSequence16& dst, std::vector<rapid::TypeValue> const& src)
  {
    dst.ensure_length(src.size(), 16);
    
    for (int i = 0; i < dst.length(); ++i) {
      dst[i] <<= src[i];
    }
  }

  void operator>>= (rapid::ParameterSequence16 const& src, std::vector<rapid::TypeValue>& dst)
  {
    dst.resize(src.length());
    
    for (size_t i = 0; i < dst.size(); ++i) {
      dst[i] <<= src[i];
    }
  }


  void operator<<= (rapid::TypeValue& dst, rapid::ParameterUnion const& src)
  {
    stringstream value;
    
    switch (src._d) {
    case RAPID_STRING:
      dst.type = "STRING";
      value << src._u.s;
      break;
    case RAPID_DOUBLE:
      dst.type = "DOUBLE";
      value << src._u.d;
      break;
    case RAPID_FLOAT:
      dst.type = "FLOAT";
      value << src._u.f;
      break;
    case RAPID_INT:
      dst.type = "INT";
      value << src._u.i;
      break;
    case RAPID_BOOL:
      dst.type = "BOOL";
      value << (src._u.b ? "true" : "false");
      break;
    case RAPID_VEC3d:
      dst.type = "VEC3d";
      for (int i = 0; i < 3; ++i) {
        if (i > 0) {
          value << " ";
        }
        value << src._u.vec3d[i];
      }
      break;
    case RAPID_MAT33f:
      dst.type = "MAT33f";
      for (int i = 0; i < 9; ++i) {
        if (i > 0) {
          value << " ";
        }
        value << src._u.mat33f[i];
      }
      break;
    case RAPID_LONGLONG:
      dst.type = "LONGLONG";
      value << src._u.ll;
      break;
    }
    dst.value = value.str();  
  }
  
  void operator<<= (rapid::KeyTypeValueTriple& dst, rapid::KeyTypeValue const& src)
  {
    strncpy(dst.key, src.key.c_str(), 32);
    dst.key[31] = 0;

    dst.value <<= src;
  }
  
  void operator<<= (rapid::KeyTypeValue& dst, rapid::KeyTypeValueTriple const& src)
  {
    dst.key = src.key;
    dst <<= src.value;
  }
  
  void operator<<= (rapid::KeyTypeValueSequence16& dst, rapid::KeyTypeValueVector const& src)
  {
    dst.ensure_length(src.size(), src.size());
      
    for (int i = 0; i < dst.length(); ++i) {
      dst[i] <<= src[i];
    }
  }
  
  void operator<<= (rapid::KeyTypeValueVector& dst, rapid::KeyTypeValueSequence16 const& src)
  {
    dst.resize(src.length());
    
    for (unsigned int i = 0; i < dst.size(); ++i) {
      dst[i] <<= src[i];
    }
  }

  void operator<<= (rapid::LongSequence32& dst, std::vector<int> const& src)
  {
    dst.ensure_length(src.size(), 32);
    
    for (int i = 0; i < dst.length(); ++i) {
      dst[i] = src[i];
    }
  }

  void operator<<= (rapid::FloatSequence32& dst, std::vector<double> const& src)
  {
    dst.ensure_length(src.size(), 32);
    
    for (int i = 0; i < dst.length(); ++i) {
      dst[i] = src[i];
    }
  }

  void operator<<= (rapid::String16Sequence16& dst, std::vector<std::string> const& src)
  {
    dst.ensure_length(src.size(), 16);
    
    for (int i = 0; i < dst.length(); ++i) {
      strncpy(dst[i], src[i].c_str(), 15);
      dst[i][15] = 0;
    }
  }
  void operator<<= (rapid::String128Sequence64& dst, std::vector<std::string> const& src)
  {
    dst.ensure_length(src.size(), 64);
    
    for (int i = 0; i < dst.length(); ++i) {
      strncpy(dst[i], src[i].c_str(), 127);
      dst[i][127] = 0;
    }
  }
} // namespace rapid
