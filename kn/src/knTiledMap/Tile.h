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
#ifndef kn_Tile_h
#define kn_Tile_h

#include "TileBase.h"

namespace kn
{
  template<typename C, unsigned int TSL2>
  class Tile : public SizedTile<Tile<C, TSL2>, TSL2>
  {
    typedef Tile<C, TSL2> This;
    //! Shorthand for the super class.
    typedef SizedTile<This, TSL2> Super;

  public:
    //! Type for representing a cell.
    typedef C Cell;
    //! Type for representing a tile identifier.
    typedef int TileId;

    using Super::TileSizeLog2;
    using Super::TileSize;
    using Super::IndexMask;
    using Super::NumCells;

    //! Tile constructor. - Passing in the tile identifier.
    explicit Tile(TileId id) : Super(id) {}
    //! Cell access by a/b-index.
    Cell& cell(int a, int b) {
      return m_cells[Super::index(a, b)];
    }
    //! Cell access by a/b-index.
    Cell const& cell(int a, int b) const {
      return m_cells[Super::index(a, b)];
    }
    //! Set cell by a/b-index and value.
    void setCell(int a, int b, Cell const& cell )  {
      m_cells[Super::index(a, b)] = cell;
    }
    //! Set a range of consecutive cells.
    template<typename InputIterator>
    void setCells(int a, int b, InputIterator first, InputIterator last) {
      Cell * dest = m_cells + Super::index(a, b);
      for (; first != last; ++first, ++dest) {
        *dest = *first;
      }
    }
    /** Accessor to cell array.
     *
     * Cells are organized in row-order.
     */
    Cell * cells() { return m_cells; }
    /** Read-only accessor to cell array.
     *
     * Cells are organized in row-order.
     */
    Cell const * cells() const { return m_cells; }

  private:
    friend class SizedTile<This, TSL2>;

    template<typename CellOperator>
    void forEachCellImpl(CellOperator& op) {
      Cell * first, last = m_cells + NumCells;
      for (first = m_cells; first != last; ++first) {
        op(*first);
      }
    }

    template<typename CellOperator>
    void forEachCellImpl(CellOperator& op) const {
      Cell * first, last = m_cells + NumCells;
      for (first = m_cells; first != last; ++first) {
        op(*first);
      }
    }

    //! Array of all cells of the tile.
    Cell m_cells[NumCells];
  };
}
#endif // kn_Tile_h
