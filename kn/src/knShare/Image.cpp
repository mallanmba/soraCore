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
#include "Image.h"

#include <iostream>

namespace kn {

  unsigned char *Image::data() const {
    return m_data->data();
  }

  uint32_t Image::width()  const {
    return m_data->width();
  }

  uint32_t Image::height() const {
    return m_data->height();
  }

  uint32_t Image::depth() const {
    return m_data->depth();
  }

  ACE_Time_Value Image::timestamp() const {
    return m_data->timestamp();
  }

  bool Image::valid() const {
    return m_data && m_data->valid();
  }

  void Image::dump(const std::string &fn) const
  {
    m_data->dump(fn);
  }
  
  void Image::writePgm(const std::string &fn) const
  {
    m_data->writePgm(fn);
  }

  void Image::writeTiff(const std::string &fn) const
  {
    m_data->writeTiff(fn);
  }

  Image::Image(ImageData * data) :
    m_data(data)
  {  
  }

} // namespace kn
