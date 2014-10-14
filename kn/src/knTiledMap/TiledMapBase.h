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
#ifndef kn_TiledMapBase_h
#define kn_TiledMapBase_h

#include "Tile.h"

#include <ace/OS_NS_sys_time.h>

#include <cmath>

namespace kn
{

  /** 
   * @ingroup knTiledMap
   * @brief Base-type of the standard tiled map implementation.
   * 
   * This class introduces the concept of cell-size, providing a mapping from 
   * a continous 2D space to discrete indexes of cells.
   * Cell-boundaries are assumed to be aligned with the origin of the plane.
   * Cells are inclusiding the lower boundary and excluding the upper boundary.
   * So assuming a cell-size of 1., 0. and 0.999999 would matched to index 0 and 1.0 would match to index 1.
   *
   */
  template<class D, typename T> 
  class TiledMapBase
  {
    //! Derived type as used for CRTP.
    typedef D Derived;

   public:
    //! Tile type.
    typedef T Tile;
    //! Cell type.
    typedef typename T::Cell Cell;

    //! Helper class to apply an operation to each tile.
    template<typename CellOperator>
    struct EachCellOperator
    {
      EachCellOperator(CellOperator& op) :
        m_op(op)
      {}

      void operator() (typename Derived::Tile& tile) {
        tile.forEachCell(m_op);
      }

      void operator() (typename Derived::Tile const& tile) const {
        tile.forEachCell(m_op);
      }

    private:
      CellOperator& m_op;
    };

    /** 
     * @brief Base constructor.
     *
     * @param cellLength - specifies the side length of a cell.
     * This provides that basic mapping between the map-coordinates and the cell indexes:
     * coordinate == index * cellLength.
     */
    TiledMapBase(double cellLength) :
      m_cellLength(cellLength),
      m_cellLength_2(cellLength / 2.),
      m_indexScale(1./cellLength)
    {}

    /** 
     * @brief Random access operator to cells of the two-dimensional map.
     *
     * This method will create the tile containing the cell if it does not exist, yet.
     * @param x and @param y are specifying the location in the map-coordinate space.
     */
    Cell& operator()(double x, double y) {
      int iX = (int) std::floor(m_indexScale * x);
      int iY = (int) std::floor(m_indexScale * y);
      return static_cast<Derived*>(this)->tile(iX, iY).cell(iX, iY);
    }

    /** 
     * @brief Random access operator to cells of the two-dimensional map.
     *
     * This method will create the tile containing the cell if it does not exist, yet.
     * @param x and @param y are specifying the location in the map-coordinate space.
     */
    Cell const& operator()(double x, double y) const {
      int iX = (int) std::floor(m_indexScale * x);
      int iY = (int) std::floor(m_indexScale * y);
      return this->tile(iX, iY).cell(iX, iY);
    }

    /**
     * @brief Random access operator to cells of the two-dimensional map.
     *
     * This method will create the tile containing the cell if it does not exist, yet.
     * @param a and @param b are specifying the location in cell-index space.
     */
    Cell& cell(int a, int b) {
      return static_cast<Derived*>(this)->tile(a, b).cell(a, b);
    }
    
    /** 
     * @brief Random access operator to cells of the two-dimensional map.
     *
     * This method will create the tile containing the cell if it does not exist, yet.
     * @param a and @param b are specifying the location in cell-index space.
     */
    Cell const& cell(int a, int b) const {
      return static_cast<Derived const*>(this)->tile(a, b).cell(a, b);
    }
    
    /**
     * @brief Random access operator to tiles of the two-dimensional map.
     *
     * This method will create the tile if it does not exist, yet.
     * @param a and @param b are specifying the location in cell-index space.
     * @param timestamp Access time to be stored in the tile.
     * @return The tile that contains the cell-index.
     */
    Tile& tile(int a, int b, ACE_Time_Value const& timestamp = ACE_OS::gettimeofday()) {
      Tile * t = static_cast<Derived*>(this)->getTile(a, b);      
      t->setLastWriteAccess(timestamp);
      return *t;
    }

    /**
     * @brief Random access operator to tiles of the two-dimensional map.
     *
     * This method will create the tile if it does not exist, yet.
     * @param tileId is specifying the tile by its id.
     * @param timestamp Access time to be stored in the tile.
     * @return The tile that contains the cell-index.
     */
    Tile& tile(int tileId, ACE_Time_Value const& timestamp = ACE_OS::gettimeofday()) {
      Tile * t = static_cast<Derived*>(this)->getTile(tileId);      
      t->setLastWriteAccess(timestamp);
      return *t;
    }

    //! Apply operation to each tile.
    template<typename TileOperator>
    void forEachTile(TileOperator& op) {
      static_cast<Derived *>(this)->forEachTileImpl(op);
    }

    //! Apply operation to each tile.
    template<typename TileOperator>
    void forEachTile(TileOperator& op) const {
      static_cast<Derived const*>(this)->forEachTileImpl(op);
    }

    //! Apply operation to each cell.
    template<typename CellOperator>
    void forEachCell(CellOperator& op) {
      EachCellOperator<CellOperator> tileOp(op);
      static_cast<Derived *>(this)->forEachTileImpl(op);
    }

    //! Apply operation to each cell.
    template<typename CellOperator>
    void forEachCell(CellOperator& op) const {
      EachCellOperator<CellOperator> const tileOp(op);
      static_cast<Derived const *>(this)->forEachTileImpl(op);
    }

    //! Accessor for the cell-length.
    double cellLength() const { return m_cellLength; }
    /** 
     * @brief Compute the origin of the cell that contains the coordinate.
     *
     * As this is uniform for both axis, we only offer a single method for both.
     * @param coo Cell coordinate.
     * @return double Cell origin.
     */
    double cellOrigin(double coo) const { return floor(coo * m_indexScale) * m_cellLength; }
    /** 
     * @brief Compute the center of the cell that countains the coordinate.
     *
     * As this is uniform for both axis, we only offer a single method for both.
     * @param coo Cell coordinate.
     * @return double Cell center.
     */
    double cellCenter(double coo) const { return cellOrigin(coo) + m_cellLength_2; }

    /** 
     * @brief Compute the index from a coordinate.
     *
     * As this is uniform for both axis, we only offer a single method for both.
     */
    int toIndex(double coo) const {
      return (int) std::floor(m_indexScale * coo);
    }

    /** 
     * @brief Compute the coordinate from an index.
     *
     * As this is uniform for both axis, we only offer a single method for both.
     * @param a Cell index.
     * @return double Cell origin.
     */
    double toCoordinate(int a) const {
      return a * m_cellLength;
    }

    /**
     * @brief Check for the existance of a tile at the specified index.
     * 
     * @param a Index in X axis.
     * @param b Index in Y axis.
     */
    bool hasTile(int a, int b) const {
      return static_cast<Derived const*>(this)->hasTileImpl(a, b);
    }

    /**
     * @brief Compute the bounding box of all tiles of the map.
     * 
     * Note that all parameters are return parameters.
     * @param x Origin in X
     * @param y Origin in Y
     * @param dx Size in X
     * @param dy Size in Y
     */
    void boundingBox(int& x, int& y, int& dx, int& dy) const {
      static_cast<Derived const *>(this)->boundingBoxImpl(x, y, dx, dy);
    }

  protected:
    //! Cell length
    double const m_cellLength;
    //! Precomupted half cell lenth.
    double const m_cellLength_2;
    //! Precomputed inverse of cell length.
    double const m_indexScale;
  };
}
#endif // kn_TiledMapwBase_h
