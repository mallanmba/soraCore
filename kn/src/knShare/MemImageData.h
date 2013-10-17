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
#ifndef kn_MemImageData_h
#define kn_MemImageData_h

#include "knShare_Export.h"
#include "ImageData.h"

#include <boost/scoped_array.hpp>

namespace kn 
{
  class knShare_Export MemImageData : public ImageData
  {
  public:
    MemImageData() :
      m_data(NULL),
      m_width(0),
      m_height(0),
      m_depth(0),
      m_timestamp(ACE_Time_Value::zero)
    {}

    MemImageData(MemImageData const& rhs);
    MemImageData(uint32_t width, uint32_t height,uint32_t depth, ACE_Time_Value const& timestamp);
    virtual ~MemImageData() throw();
    
    MemImageData& operator=(MemImageData const& rhs);

    virtual void dump(const std::string &fn) const {};
    virtual void writePgm(const std::string &fn) const;
    virtual unsigned char *data() const { return m_data.get(); }
    virtual uint32_t width()  const { return m_width; }
    virtual uint32_t height() const { return m_height; }
    virtual uint32_t depth() const { return m_depth; }
    virtual ACE_Time_Value timestamp() const { return m_timestamp; }
    virtual bool valid() const { return m_data.get() != NULL; }

  protected:
    boost::scoped_array<unsigned char> m_data;
    uint32_t m_width;
    uint32_t m_height;
    uint32_t m_depth;
    ACE_Time_Value m_timestamp;
  }; // namespace kn
}
#endif // kn_MemImageData_h
