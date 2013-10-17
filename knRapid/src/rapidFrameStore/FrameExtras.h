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
#ifndef rapid_FrameExtras_h
#define rapid_FrameExtras_h

#include "rapidFrameStore_Export.h"

#include "rapidIo/KeyTypeValue.h"

#include "knFrameStore/Frame.h"

namespace rapid
{
  class rapidFrameStore_Export FrameExtras : public  kn::Frame::Extras
  {
  public:
    FrameExtras() {}
    FrameExtras(KeyTypeValueVector const& x) : m_extras(x) {}
    virtual ~FrameExtras() throw();
    virtual FrameExtras * clone();
    
    KeyTypeValueVector const& extras() const throw() { return m_extras; }
    KeyTypeValueVector& extras() throw() { return m_extras; }

  protected:
    KeyTypeValueVector m_extras;
  };
}

#endif // rapid_FrameExtras_h
