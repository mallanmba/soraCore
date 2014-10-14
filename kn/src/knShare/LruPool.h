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
  /** @ingroup knShare */
  template<class T>
  class LruPool
  {
  public:
    typedef T Type;
    typedef shared_ptr<T> TypePtr;

    LruPool(size_t minPoolSize, int maxPoolSize = 0, bool reclaim = false) :
      m_minPoolSize(minPoolSize),
      m_maxPoolSize(maxPoolSize),
      m_reclaim(reclaim),
      m_maxUtilization(0)
    {
      if (minPoolSize == 0) {
        throw std::invalid_argument("minPoolSize > 0 required.");
      }
      
      m_objects.reserve(minPoolSize);
      for (size_t i = 0; i < minPoolSize; ++i) {
        m_objects.push_back(TypePtr(new Type()));
      }
    }
    
    TypePtr lruObject() {
      TypePtr obj;
      size_t i = 0;
      if (m_objects.front().unique()) {
        obj = m_objects.front();
      }
      else {
        for (i = 1; i < m_objects.size(); ++i) {
          std::swap(m_objects[0], m_objects[i]);
          if (m_objects.front().unique()) {
            obj = m_objects.front();
            break;
          }
        }
        
        if (!obj) {
          if (m_objects.size() < m_maxPoolSize) {
            m_objects.push_back(TypePtr(new Type()));
            obj = m_objects.back();
          }
          else {
            throw std::runtime_error(std::string("Lru pool exhausted."));
          }
        }
      }
      m_maxUtilization = std::max(m_maxUtilization, i + 1);
      
      // reclaim if neccessary and possible
      if (m_reclaim) {
        size_t j;
        for (j = m_objects.size(); j > m_minPoolSize; --j) {
          if (!m_objects[j - 1].unique()) {
            break;
          }
        }
        m_objects.resize(j);
      }
      return obj;
    }
    
    size_t maxUtilization() const {
      return m_maxUtilization;
    }
    
    size_t size() const {
      return m_objects.size();
    }
    
  private:
    typedef std::vector<TypePtr> TypePtrVector;
    
    size_t m_minPoolSize;
    size_t m_maxPoolSize;
    bool m_reclaim;
    TypePtrVector m_objects;    

    // statistics
    size_t m_maxUtilization;
  };
}
#endif // kn_LruPool_h