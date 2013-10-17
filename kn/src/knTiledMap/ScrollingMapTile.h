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
#ifndef kn_ScrollingMapTile_h
#define kn_ScrollingMapTile_h

#include "Tile.h"

#include <ace/Time_Value.h>

#include <algorithm>

namespace kn
{
  template<typename C, unsigned int TSL2>
  class ScrollingMapTile : public SizedTile<ScrollingMapTile<C, TSL2>, TSL2>
  {
    typedef ScrollingMapTile<C, TSL2> This;
    typedef SizedTile<This, TSL2> Super;
    
  public:
    typedef C Cell;
    typedef int TileId;

    using Super::TileSizeLog2;
    using Super::TileSize;
    using Super::IndexMask;

    ScrollingMapTile(unsigned int numTilesLog2) :
      Super(0),
      NumTilesLog2(numTilesLog2),
      NumTiles(1 << NumTilesLog2),
      BaseMapSizeLog2(TSL2 + numTilesLog2),
      BaseMapSize(1 << BaseMapSizeLog2),
      BaseMapIndexMask(BaseMapSize - 1),
      m_cells(NULL)
    {}

    void setTile(TileId id, Cell * buffer)
    {
      this->setId(id);
      
      {
        int x = this->originX() & BaseMapIndexMask;
        int y = this->originY() & BaseMapIndexMask; 
      
        m_cells = buffer + (y << BaseMapSizeLog2) + x;
      }
     
      clear();
    }

    Cell * row(unsigned int y) {
      return &m_cells[((y & IndexMask) << BaseMapSizeLog2)];
    }
    Cell const * row(unsigned int y) const {
      return &m_cells[((y & IndexMask) << BaseMapSizeLog2)];
    }
    Cell& cell(unsigned int x, unsigned int y) {
      return m_cells[((y & IndexMask) << BaseMapSizeLog2) | (x & IndexMask)];
    }
    Cell const& cell(unsigned int x, unsigned int y) const {
      return m_cells[((y & IndexMask) << BaseMapSizeLog2) | (x & IndexMask)];
    }
    void setCell(unsigned int x, unsigned int y, Cell const& cell ) {
      m_cells[((y & IndexMask) << TileSizeLog2) | (x & IndexMask)] = cell;
    }
    template<typename CellIterator>
    void setCells(unsigned int x, unsigned int y, CellIterator first, CellIterator last) const {
      Cell * dest = ((y & IndexMask) << TileSizeLog2) | (x & IndexMask);
      for (; first != last; ++first, ++dest) {
        *dest = *first;
      }
    }

    Cell * cells() { return m_cells; }
    Cell const * cells() const { return m_cells; }

    void clear() {
      Cell emptyCell;
      Cell * first;
      Cell * last = m_cells + (TileSize << BaseMapSizeLog2);
      for (first = m_cells; first != last; first += BaseMapSize) {
        std::fill(first, first + TileSize, emptyCell);
      }
    }
   

  private:
    unsigned int const NumTilesLog2;
    unsigned int const NumTiles;

    unsigned int const BaseMapSizeLog2;
    unsigned int const BaseMapSize;
    unsigned int const BaseMapIndexMask;

    Cell * m_cells;
  };
}
#endif // kn_ScrollingMapTile_h
