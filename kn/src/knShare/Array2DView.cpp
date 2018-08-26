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
#include "Array2DView.h"

#include <algorithm>
#include <cassert>

namespace
{
  static int const s_logTable[31] = { 0x00000001, 0x00000002, 0x00000004, 0x00000008,
                                      0x00000010, 0x00000020, 0x00000040, 0x00000080,
                                      0x00000100, 0x00000200, 0x00000400, 0x00000800,
                                      0x00001000, 0x00002000, 0x00004000, 0x00008000,
                                      0x00010000, 0x00020000, 0x00040000, 0x00080000,
                                      0x00100000, 0x00200000, 0x00400000, 0x00800000,
                                      0x01000000, 0x02000000, 0x04000000, 0x08000000,
                                      0x10000000, 0x20000000, 0x40000000 };
}

namespace kn
{
  Array2DViewBase::Array2DViewBase() :
    m_sizeX(0),
    m_sizeY(0),
    m_sizeLog2(0),
    m_indexMask(0),
    m_numCells(0)
  {}

  Array2DViewBase::Array2DViewBase(size_t x, size_t y) :
    m_sizeX(0),
    m_sizeY(0)
  {
    resize(x, y);
  }
  
  int
  Array2DViewBase::iLog2(int a) 
  { 
    int const * iter = lower_bound(&s_logTable[0], &s_logTable[32], a);
    int dist = iter - s_logTable;
    if ((int)a != *iter) {
      if (iter != &s_logTable[32]) {
        ++dist;
      }
      else {
        return -1;
      }
    }
    return dist;
  }

  void
  Array2DViewBase::resize(size_t x, size_t y)
  {
    if (x != m_sizeX || y != m_sizeY) {
     
      if (x > 0 && y > 0) {
        int sizeLog2 = iLog2(x);
        assert(sizeLog2 >= 0);
        
        m_sizeX = x;
        m_sizeY = y;
        m_sizeLog2 = sizeLog2;
        m_indexMask = (1 << sizeLog2) - 1;
        m_numCells = (1 << sizeLog2) * m_sizeY;
      }
      else {
        m_sizeX = 0;
        m_sizeY = 0;
        m_sizeLog2 = 0;
        m_indexMask = 0;
        m_numCells = 0;
      }
    }
  }
}
