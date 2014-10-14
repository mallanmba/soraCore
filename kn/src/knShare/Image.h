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
#ifndef kn_Image_h
#define kn_Image_h

#include "knShare_Export.h"
#include "knConfig.h"
#include "ImageData.h"
#include "SmartPtr.h"

#include <string>
#include <vector>

#include <stdint.h>

namespace kn {

  /** @ingroup knShare */
  class knShare_Export Image
  {
  public:
    //! Pointer to image data
    unsigned char *data() const;
    //! Image width
    uint32_t width()  const;
    //! Image height
    uint32_t height() const;
    //! Image depth
    uint32_t depth() const; /* in bits per pixel */
    //! Timestamp when image was acquired
    ACE_Time_Value timestamp() const;
    //! Is image valid
    bool valid() const;
    
    //! Write raw data to file
    void dump(const std::string &fn) const;
    //! Save image as pgm
    void writePgm(const std::string &fn) const;
    //! Save image as tiff
    void writeTiff(const std::string &fn) const;

    //! Set image data
    void set(ImageData * data) {m_data.reset(data);}
    
    //! Default constructor.
    Image() {}
    //! Initialize image
    Image(ImageData * data);
    
  private:
    shared_ptr<ImageData> m_data;
  };

  /** @ingroup knShare */
  typedef std::vector<Image> ImageVector;
} // namespace kn

#endif // kn_Image_h
