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
#include "MemImageData.h"

#include <fstream>
#include <stdexcept>
#include <cstring>

namespace kn {

  MemImageData::MemImageData(MemImageData const& rhs) :
    m_data(rhs.valid()? new unsigned char[rhs.m_width * rhs.m_height * ((rhs.m_depth + 7) / 8)] : NULL),
    m_width(rhs.m_width),
    m_height(rhs.m_height),
    m_depth(rhs.m_depth),
    m_timestamp(rhs.m_timestamp)
  {
    memcpy(m_data.get(), rhs.m_data.get(), m_width * m_height * ((m_depth + 7) / 8));
  }

  MemImageData::MemImageData(uint32_t width, uint32_t height,uint32_t depth, ACE_Time_Value const& timestamp) :
    m_data(new unsigned char[width * height * ((depth + 7) / 8)]),
    m_width(width),
    m_height(height),
    m_depth(depth),
    m_timestamp(timestamp)
  {
  }
    
  MemImageData::~MemImageData() throw()
  {
  }

  MemImageData& MemImageData::operator=(MemImageData const& rhs)
  {
    if (this != &rhs) {
      size_t size =  m_width * m_height * ((m_depth + 7) / 8);
      size_t rhsSize = rhs.m_width * rhs.m_height * ((rhs.m_depth + 7) / 8);

      if (size != rhsSize) {
        m_data.reset(rhs.valid()? new unsigned char[rhsSize] : NULL);
      }

      m_width = rhs.m_width;
      m_height = rhs.m_height;
      m_depth = rhs.m_depth;
      m_timestamp = rhs.m_timestamp;
      
      if (m_data.get() != NULL) {
        memcpy(m_data.get(), rhs.m_data.get(), rhsSize);
      }
    }
    return *this;
  }

  void  
  MemImageData::dump(const std::string &fn) const 
  {
  }
  
  unsigned char * 
  MemImageData::data() const 
  { 
    return m_data.get(); 
  }
  uint32_t  
  MemImageData::width()  const 
  { 
    return m_width;
  }
  uint32_t  
  MemImageData::height() const 
  { 
    return m_height; 
  }
  uint32_t  
  MemImageData::depth() const 
  { 
    return m_depth; 
  }
  
  ACE_Time_Value  
  MemImageData::timestamp() const 
  { 
    return m_timestamp; 
    
  }
  bool  
  MemImageData::valid() const 
  { 
    return m_data.get() != NULL; 
  }

  void 
  MemImageData::writePgm(const std::string &fn) const
  {
    if (m_depth != 8 && m_depth != 16) {
      throw std::invalid_argument("Tried to dump pgm of unsupported color format (only mono16 and mono8 are supported)");
    }

    std::ofstream file(fn.c_str(), std::ios::binary);
    if (!file.is_open()) {
      throw std::runtime_error(std::string("Failed to open image file to write: ") + fn);
    }

    file << "P5\n" << width() << " " << height() << " ";
    switch (m_depth) {
    case 16: 
      file << "65535";
      break;
    case 8:
      file << "255";  
      break;
    default:
      assert(false);
    }

    file << "\n";
    file.write(reinterpret_cast<const char*>(m_data.get()),  m_width * m_height * ((m_depth + 7) / 8));
  }

  void 
  MemImageData::writeTiff(const std::string &fn) const
  {
    
  }
}
