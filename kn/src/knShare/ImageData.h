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
#ifndef kn_ImageData_h
#define kn_ImageData_h

#include "knShare_Export.h"
#include "knConfig.h"

#include <ace/Time_Value.h>

#include <string>

#include <stdint.h>

namespace kn 
{
  class knShare_Export ImageData
  {
  public:
    virtual ~ImageData() throw();
    
    virtual void dump(const std::string &fn) const = 0;
    virtual void writePgm(const std::string &fn) const = 0;
    virtual unsigned char *data() const = 0;
    virtual uint32_t width()  const = 0;
    virtual uint32_t height() const = 0;
    virtual uint32_t depth() const = 0; /* in bits per pixel */
    virtual ACE_Time_Value timestamp() const = 0;
    virtual bool valid() const = 0;
  }; // namespace kn
}
#endif // kn_ImageData_h
