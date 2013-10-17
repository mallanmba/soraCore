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
#ifndef kn_TileFactory_h
#define kn_TileFactory_h

#include <vector>
#include <climits>
#include <iostream>

namespace kn
{
  template<typename T>
  class DefaultTileFactory
  {
  public:
    DefaultTileFactory(unsigned int maxTiles = 1024 /* UINT_MAX */) :
      m_maxTiles(maxTiles),
      m_buffer(new char[maxTiles * sizeof(T)])
    {
      addTiles(reinterpret_cast<T *>(m_buffer), 
               reinterpret_cast<T *>(m_buffer + maxTiles* sizeof(T)));
    }
    ~DefaultTileFactory()
    {
      delete[] m_buffer;
    }

    T * createTile(int id) { 
      if (m_tileVector.empty()) {
        throw std::bad_alloc();
      }
      T * t = new (m_tileVector.back()) T(id); 
      m_tileVector.pop_back();

      std::cout << "tiles: new " << std::hex << id << std::dec << std::endl;
      return t;
    }
    void destroyTile(T * tile) {
      if (tile != NULL) {
        std::cout << "tiles: delete " << std::hex << tile->id() << std::dec << std::endl;
        tile->~T();
        m_tileVector.push_back(tile); 
      }
    }

    unsigned int capacity() const { return m_maxTiles; }
    unsigned int size() const { return m_maxTiles; }

  protected:
    typedef std::vector<T *> TileVector;
    typedef std::vector<char> Buffer;

    void addTiles(T * first, T * last) {
      m_tileVector.reserve(m_tileVector.size() + (last - first));
      for (; first != last; ++first) {
        m_tileVector.push_back(first);
      }
    }

    unsigned int const m_maxTiles;

    char * m_buffer;
    TileVector m_tileVector;
  };

}
#endif // kn_TileFactory_h
