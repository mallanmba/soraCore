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
#ifndef kn_Array2DView_h
#define kn_Array2DView_h

#include "knShare_Export.h"

#include <boost/shared_array.hpp>

#include <cstddef>

namespace kn
{
  using namespace std;

  /**
   * @ingroup knShare
   * @brief Base class for the @ref Array2DView template.
   *
   * This base-class just provides a set of member functions
   * and data members,
   * which are independent of the template parameter.
   *
   * Will hopefully save some compile time
   */
  class knShare_Export Array2DViewBase
  {
  public:
    //! Default constructor initialized class to array of size zero.
    /** 
     * Can't be easily implemented with default params for initializing constructor,
     * due to internal logic of calculating size.
     */
    Array2DViewBase();
    //! Initializing constructor.
    /**
     * Takes size in x & y as parameters. 
     */
    Array2DViewBase(size_t x, size_t y);

    //! 2D array access operator.
    size_t index(int x, int y) const { return (y << m_sizeLog2) | x; }

    size_t sizeX() const { return m_sizeX; }
    size_t sizeY() const { return m_sizeY; }
    //! Log2 size in X dimension.
    int sizeLog2() const { return m_sizeLog2; }
    size_t indexMask() const { return m_indexMask; }
    //! Total size of array representing the map.
    /**
     * Includes the hidden cells included from log2 alignment of x.
     */
    size_t numCells() const { return m_numCells; }

    static int iLog2(int x);

  protected:
    void resize(size_t x, size_t y);

  private:
    size_t m_sizeX;
    size_t m_sizeY;
    int m_sizeLog2;
    int m_indexMask;
    size_t m_numCells;
  };

  /**
   * @ingroup knShare
   * @brief Array 2D View with power of 2 allocated cols.
   * 
   * This is a not very space efficient representation, as it 
   * allocates up to 2 times the required memory. 
   * So use it carefully.
   *
   * This template allows for a very efficient implementation of a 
   * scrolling map type.
   */
  template<typename C>
  class Array2DView : public Array2DViewBase
  {
  public:
    //! Type for representing a cell.
    typedef C Cell;
    typedef boost::shared_array<Cell> CellArray;

    Array2DView()
    {}

    Array2DView(size_t x, size_t y) :
      Array2DViewBase(x, y)
    {
      if (sizeX() > 0 && sizeY() > 0) {
        m_cells.reset(new Cell[numCells()]);
      }
    }

    Array2DView clone() {
      Array2DView m(sizeX(), sizeY());
      memcpy(m.cells().get, m_cells.get(), m_numCells * sizeof(Cell));
      return m;
    }

    Cell& operator() (int x, int y) {
      return m_cells[index(x, y)];
    }

    Cell const& operator() (int x, int y) const {
      return m_cells[index(x, y)];
    }

    void resize(size_t x, size_t y) {
      if (x != sizeX() || y != sizeY()) {
        Array2DViewBase::resize(x, y);
        if (x > 0 && y > 0) {
          m_cells.reset(new Cell[numCells()]);
        }
        else {
          m_cells.reset();
        }
      }
    }

    //! Set cell by a/b-index and value.
    void setCell(int a, int b, Cell const& cell )  {
      m_cells[index(a, b)] = cell;
    }
    /** Accessor to cell array.
     *
     * Cells are organized in row-order.
     */
    CellArray& cells() { return m_cells; }
    /** Read-only accessor to cell array.
     *
     * Cells are organized in row-order.
     */
    CellArray const& cells() const { return m_cells; }

  private:
    template<typename CellOperator>
    void forEachCellImpl(CellOperator& op) {
      for (size_t y = 0; y < sizeY(); ++y) {
        size_t i = index(0, y);
        Cell * first, last = m_cells.get() + i + sizeX();
        for (first = m_cells.get() + i; first != last; ++first) {
          op(*first);
        }
      }
    }

    template<typename CellOperator>
    void forEachCellImpl(CellOperator& op) const {
      for (size_t y = 0; y < sizeY(); ++y) {
        size_t i = index(0, y);
        Cell const * first;
        Cell const * last = m_cells.get() + i + sizeX();
        for (first = m_cells.get() + i; first != last; ++first) {
          op(*first);
        }
      }
    }

  private:
    //! Array of all cells of the map.
    CellArray m_cells;
  };
}
#endif // kn_Array2DView_h
