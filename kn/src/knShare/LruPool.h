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
#ifndef kn_LruPool_h
#define kn_LruPool_h

#include "knShare/SmartPtr.h"

#include <vector>
#include <stdexcept>

namespace kn
{
  template<class T>
  class LruPool
  {
  public:
    typedef T Type;
    typedef shared_ptr<T> TypePtr;

    LruPool(size_t poolSize)
    {
      m_objects.reserve(poolSize);
      for (size_t i = 0; i < poolSize; ++i) {
        m_objects.push_back(TypePtr(new Type()));
      }
    }
    
    TypePtr lruObject() {
      TypePtr obj;
      if (m_objects.front().unique()) {
        obj = m_objects.front();
      }
      else {
        for (size_t i = 1; i < m_objects.size(); ++i) {
          std::swap(m_objects[0], m_objects[i]);
          if (m_objects.front().unique()) {
            obj = m_objects.front();
            break;
          }
        }
      }
      if (!obj) {
       throw std::runtime_error(std::string("Lru pool exhausted."));
      }
      return obj;
    }
    
  private:
    typedef std::vector<TypePtr> TypePtrVector;
    
    TypePtrVector m_objects;    
  };
}
#endif // kn_LruPool_h