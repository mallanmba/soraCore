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
#ifndef kn_TileBase_h
#define kn_TileBase_h

#include <ace/Time_Value.h>
#include <ace/OS_NS_sys_time.h>

namespace kn
{

  class TileBase
  {
  public:
    TileBase() :
      m_lastReadAccess(ACE_OS::gettimeofday()),
      m_lastWriteAccess(ACE_Time_Value::zero)
    {}

    void setLastReadAccess(ACE_Time_Value const& stamp) {
      m_lastReadAccess = stamp;
    }
    void setLastWriteAccess(ACE_Time_Value const& stamp) {
      m_lastWriteAccess = stamp;
    }

    ACE_Time_Value const& lastReadAccess() const {
      return m_lastReadAccess;
    }
    ACE_Time_Value const& lastWriteAccess() const {
      return m_lastWriteAccess;
    }

  private:
    ACE_Time_Value m_lastReadAccess;
    ACE_Time_Value m_lastWriteAccess;
  };

  template<class D, unsigned int TSL2>
  class SizedTile : public TileBase
  {
    typedef D Derived;
  public:
    typedef int TileId;

    static unsigned int const TileSizeLog2 = TSL2;
    static unsigned int const TileSize = 1 << TSL2;
    static unsigned int const NumCells = 1 << (TSL2 * 2);
    static int const IndexMask = TileSize - 1;

    SizedTile(TileId id) :
      m_tileId(id)
    {}

    TileId id() const { return m_tileId; }
    void setId(TileId id) { m_tileId = id; }

    bool indexInTile(int x, int y) const {
      return m_tileId == createId(x, y);
    }

    int originX() const { return originX(m_tileId); }
    int originY() const { return originY(m_tileId); }

    int idX() const { return idX(m_tileId); }
    int idY() const { return idY(m_tileId); }

    template<typename CellOperator>
    void forEachCell(CellOperator& op) {
      static_cast<Derived *>(this)->forEachCellImpl(op);
    }

    static TileId createId(int x, int y) { 
      return ((x >> TileSizeLog2) & 0xffff) | ((y << (16 - TileSizeLog2)) & 0xffff0000);
    }

    static TileId createId(int idx) { 
      return idx >> TileSizeLog2;
    }

    static TileId mergeIdXY(int xPart, int yPart) { 
      return (xPart & 0xffff) | (yPart << 16);
    }

    static int originX(int id) { return (int)((short)(id)) << TileSizeLog2; }
    static int originY(int id) { return (id >> (16 - TileSizeLog2)) & ~IndexMask; }

    static int idX(int id) { return (int)((short)(id)); }
    static int idY(int id) { return id >> 16; }

    static int index(int x, int y) { return ((y & IndexMask) << TileSizeLog2) | (x & IndexMask); }

  private:
    TileId m_tileId;
  };

}
#endif // kn_TileBase_h
