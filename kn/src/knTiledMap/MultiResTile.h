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
  template<typename C, unsigned int TSL2>
  class MultiResTile : public SizedTile<Tile<C, TSL2>, TSL2>
  {
    typedef Tile<C, TSL2> This;
    //! Shorthand for the super class.
    typedef SizedTile<This, TSL2> Super;

  public:
    typedef C Cell;
    typedef int TileId;

    typedef std::vector<Cell> CellVector;

    using Super::TileSizeLog2;
    using Super::TileSize;
    using Super::IndexMask;
    using Super::NumCells;

    explicit MultiResTile(TileId id) :
      Super(id),
      m_subSampleLog2(TileSizeLog2),
      m_cells(Super::TileSize >> m_subSampleLog2)
    {}

    void setSubsamplingLog2(unsigned int subSampleLog2)
    {
      if (subSampleLog2 > TileSizeLog2)
        throw std::logic_error("subsampling factor > cell size");

      m_subSampleLog2 = subSampleLog2;
      m_cells.clear(); // reinitialize all cells to default values
      m_cells.resize(Super::NumCells >> (2 * m_subSampleLog2));
    }

    unsigned int subsamplingLog2() const {
      return m_subSampleLog2;
    }

    unsigned int subsampling() const {
      return 1 << m_subSampleLog2;
    }

    Cell& cell(int x, int y) {
      return m_cells[index(x, y)];
    }
    Cell const& cell(int x, int y) const {
      return m_cells[index(x, y)];
    }
    void setCell(int x, int y, Cell const& cell )  {
      m_cells[index(x, y)] = cell;
    }

    CellVector& cells() { return m_cells; }
    CellVector const& cells() const { return m_cells; }

    int index(int x, int y) { return ((((y >> m_subSampleLog2) & (IndexMask >> m_subSampleLog2)) << TileSizeLog2) | (x & IndexMask)) >> m_subSampleLog2; }
  private:
    unsigned int m_subSampleLog2;
    CellVector m_cells;
  };
}
#endif // kn_MultiResTile_h
