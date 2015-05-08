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
  /**
   * @ingroup knTiledMap
   * @brief Default tile type template of scrolling tiled map types.
   * 
   * This class implements access to a map-tile which is located within a larger 2D array.
   * @note This class does not assume ownership of the cell buffer it points into.
   * 
   */
  class ScrollingMapTile : public SizedTile<ScrollingMapTile<C, TSL2>, TSL2>
  {
    //! Shorthand for this class.
    typedef ScrollingMapTile<C, TSL2> This;
    //! Shorthand for the super class.
    typedef SizedTile<This, TSL2> Super;
    
  public:
    //! The cell type of the tile.
    typedef C Cell;
    //! The tile identifier type.
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

    /**
     * @brief Reinitializing the tile.
     * 
     * This method is used on tile-scrolling to re-associated a tile 
     * with a new id/buffer pair. It clears the cells of the tile.
     * 
     * @param id New id of the tile.
     * @param buffer New cell-buffer of tile.
     */
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

    /**
     * @brief Row accessor.
     * 
     * @param y Row index.
     * 
     * @return Pointer to the 1D array representing the row.
     */
    Cell * row(unsigned int y) {
      return &m_cells[((y & IndexMask) << BaseMapSizeLog2)];
    }
    /**
     * @brief Read-only row accessor.
     * 
     * @param y Row index.
     * 
     * @return Const pointer to the 1D array representing the row.
     */
    Cell const * row(unsigned int y) const {
      return &m_cells[((y & IndexMask) << BaseMapSizeLog2)];
    }
    /**
     * @brief Cell access by 2D index.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * 
     * @return Reference to the cell.
     */
    Cell& cell(unsigned int a, unsigned int b) {
      return m_cells[((b & IndexMask) << BaseMapSizeLog2) | (a & IndexMask)];
    }
    /**
     * @brief Read-only cell access by 2D index.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * 
     * @return Read-only reference to the cell.
     */
    Cell const& cell(unsigned int a, unsigned int b) const {
      return m_cells[((b & IndexMask) << BaseMapSizeLog2) | (a & IndexMask)];
    }
    /**
     * @brief Cell setter.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * @param c New cell value.
     */
    void setCell(unsigned int a, unsigned int b, Cell const& c ) {
      m_cells[((b & IndexMask) << TileSizeLog2) | (a & IndexMask)] = c;
    }
    template<typename CellIterator>
    void setCells(unsigned int x, unsigned int y, CellIterator first, CellIterator last) const {
      Cell * dest = ((y & IndexMask) << TileSizeLog2) | (x & IndexMask);
      for (; first != last; ++first, ++dest) {
        *dest = *first;
      }
    }

    /** @brief Accessor to cell array.
     * 
     * Cells are organized in row-order.
     * @note Cells of a tile are not organized in a single continuous 1D array!
     * 
     * @return Pointer to the cell array.
     */
    Cell * cells() { return m_cells; }
    /** @brief Read-only accessor to cell array.
     * 
     * Cells are organized in row-order.
     * @note Cells of a tile are not organized in a single continuous 1D array!
     * 
     * @return Const-pointer to the cell array.
     */
    Cell const * cells() const { return m_cells; }

    //! Reset all cells of a tile to default values.
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
