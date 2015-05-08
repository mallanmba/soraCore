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
#ifndef kn_MultiResTile_h
#define kn_MultiResTile_h

#include "TileBase.h"

#include <vector>
#include <stdexcept>

namespace kn
{
  /**
   * @ingroup knTiledMap
   * @brief Tile-type for the standard tiled-map, with cells that can be of 2^^n multiples of the base cell size.
   * 
   * @note The underlying cell storage is a standard vector, so far. 
   * It will not release memory once allocated, so this class provides no memory savings for maps that 
   * start at full resolution and are compacted down later-on. - But it works very well the other way round.
   */
  template<typename C, unsigned int TSL2>
  class MultiResTile : public SizedTile<Tile<C, TSL2>, TSL2>
  {
    //! Shorthand for this class.
    typedef Tile<C, TSL2> This;
    //! Shorthand for the super class.
    typedef SizedTile<This, TSL2> Super;

  public:
    //! The cell type of the tile.
    typedef C Cell;
    //! The tile identifier type.
    typedef int TileId;
    /** @brief 1D cell-array type of the tile. 
     * 
     * Used as the internal representation of the tile.
     */
    typedef std::vector<Cell> CellVector;

    using Super::TileSizeLog2;
    using Super::TileSize;
    using Super::IndexMask;
    using Super::NumCells;

    /**
     * @brief Tile constructor. - Passing in the tile identifier.
     * 
     * @param id The identifier of the constructed tile.
     * 
     */
    explicit MultiResTile(TileId id) :
      Super(id),
      m_subSampleLog2(TileSizeLog2),
      m_cells(Super::TileSize >> m_subSampleLog2)
    {}

    /**
     * @brief Setter of the subsampling factor.
     * 
     * Subsampling is done in power-of-two increments.
     * 
     * @param subSampleLog2  log2 of the subsampling factor.
     */
    void setSubsamplingLog2(unsigned int subSampleLog2)
    {
      if (subSampleLog2 > TileSizeLog2)
        throw std::logic_error("subsampling factor > cell size");

      m_subSampleLog2 = subSampleLog2;
      m_cells.clear(); // reinitialize all cells to default values
      m_cells.resize(Super::NumCells >> (2 * m_subSampleLog2));
    }

    /**
     * @brief Getter of the subsampling factor.
     * 
     * @return unsigned int Log2 of the subsampling factor.
     */
    unsigned int subsamplingLog2() const {
      return m_subSampleLog2;
    }

    /**
     * @brief Getter of the subsampling factor.
     * 
     * @return unsigned int The subsampling factor.
     */
    unsigned int subsampling() const {
      return 1 << m_subSampleLog2;
    }

    /**
     * @brief Cell access by 2D index.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * 
     * @return Cell& Reference to the cell.
     */
    Cell& cell(int a, int b) {
      return m_cells[index(a, b)];
    }
    /**
     * @brief Read-only cell access by 2D index.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * 
     * @return Cell const& Read-only reference to the cell.
     */
    Cell const& cell(int a, int b) const {
      return m_cells[index(a, b)];
    }
    /**
     * @brief Cell setter.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * @param c New cell value.
     */
    void setCell(int a, int b, Cell const& c)  {
      m_cells[index(a, b)] = c;
    }

    /**
     * @brief Accessor to the 1D cell array.
     * 
     * Cells are organized in row-order.
     * @return CellVector& The cell array.
     */
    CellVector& cells() { return m_cells; }
    /**
     * @brief Read-only accessor to the 1D cell array.
     * 
     * Cells are organized in row-order.
     * @return CellVector const& The cell array.
     */
    CellVector const& cells() const { return m_cells; }

    /**
     * @brief Index into the cell-array from global coordinates.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * 
     * @return int Index into 1D cell-array.
     */
    int index(int a, int b) { return ((((b >> m_subSampleLog2) & (IndexMask >> m_subSampleLog2)) << TileSizeLog2) | (a & IndexMask)) >> m_subSampleLog2; }

  private:
    unsigned int m_subSampleLog2;
    CellVector m_cells;
  };
}
#endif // kn_MultiResTile_h
