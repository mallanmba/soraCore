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
  
  /**
   * @ingroup knTiledMap
   * @brief Base class of tile types for tiled maps.
   * 
   * This class only holds two time-stamps that are used for access tracking to tiles.
   * 
   */
  class TileBase
  {
  public:
    /**
     * @brief Default constructor.
     * 
     * Initializing the access timestamps to now (read) and the start of epoch (write).
     */
    TileBase() :
      m_lastReadAccess(ACE_OS::gettimeofday()),
      m_lastWriteAccess(ACE_Time_Value::zero)
    {}

    /**
     * @brief Read access timestamp setter.
     * 
     * @param stamp Read access timestamp.
     */
    void setLastReadAccess(ACE_Time_Value const& stamp) {
      m_lastReadAccess = stamp;
    }
    /**
     * @brief Write access timestamp setter.
     * 
     * @param stamp Write access timestamp.
     */
    void setLastWriteAccess(ACE_Time_Value const& stamp) {
      m_lastWriteAccess = stamp;
    }

    /**
     * @brief Read access timestamp getter.
     * 
     * @return Read access timestamp.
     */
    ACE_Time_Value const& lastReadAccess() const {
      return m_lastReadAccess;
    }
    /**
     * @brief Write access timestamp getter.
     * 
     * @return Write access timestamp.
     */
    ACE_Time_Value const& lastWriteAccess() const {
      return m_lastWriteAccess;
    }

  private:
    ACE_Time_Value m_lastReadAccess;
    ACE_Time_Value m_lastWriteAccess;
  };

  /**
   * @ingroup knTiledMap
   * @brief Helper base-class for tile types for tiled maps.
   * 
   * This class introduces the concept of a tile-id.
   * It provides various methods to convert between tile-id and indices. 
   * @param D Derived type instanciating SizedTile as parent (for CRTP).
   * @param TSL2 The tile-size (numbers of rows and number of columns) specified as log2(tile-size).
   * 
   */
  template<class D, unsigned int TSL2>
  class SizedTile : public TileBase
  {
    //! Derived type for CRTP
    typedef D Derived;
  public:
    //! Tile id type.
    /** The tile id is 32 bit wide. Very large maps are expected to be realized by using large tile-sizes. */
    typedef int TileId;

    //! Log2 of the number of rows and columns in a tile.
    static unsigned int const TileSizeLog2 = TSL2;
    //! Number of rows and colums in a tile.
    static unsigned int const TileSize = 1 << TSL2;
    //! Number of cells in a tile.
    static unsigned int const NumCells = 1 << (TSL2 * 2);
    //! Bit-mask of all valid indices into the maps cell-array.
    static int const IndexMask = TileSize - 1;

    //! Initializing constructor.
    /**
     * @param id Tile id.
     */
    SizedTile(TileId id) :
      m_tileId(id)
    {}

    //! Tile identifier getter.
    TileId id() const { return m_tileId; }
    //! Tile identifier setter.
    /**
     * @param id Tile identifier.
     */
    void setId(TileId id) { m_tileId = id; }
    /**
     * @brief  Check if 2D index lies within the tile.
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * @return  True if the global 2D index lies within the tile.
     */
    bool indexInTile(int a, int b) const {
      return m_tileId == createId(a, b);
    }
    
    /**
     * @brief Query x-origin of tile.
     * 
     * @return Lowest column index of the tile.
     */
    int originX() const { return originX(m_tileId); }
    /**
     * @brief Query y-origin of tile.
     * 
     * @return Lowest row index of the tile.
     */
    int originY() const { return originY(m_tileId); }

    //! X component of the tile id.
    int idX() const { return idX(m_tileId); }
    //! Y component of the tile id.
    int idY() const { return idY(m_tileId); }

    template<typename CellOperator>
    void forEachCell(CellOperator& op) {
      static_cast<Derived *>(this)->forEachCellImpl(op);
    }

    /**
     * @brief Creates tile identifier from global x and y indices.
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * @return Tile identifier.
     */
    static TileId createId(int a, int b) { 
      return ((a >> TileSizeLog2) & 0xffff) | ((b << (16 - TileSizeLog2)) & 0xffff0000);
    }

    //! ???
    static TileId createId(int idx) { 
      return idx >> TileSizeLog2;
    }

    /**
     * @brief Creates tile identifier from global x and y components.
     * @param xPart Tile id component from X axis.
     * @param yPart Tile id component from Y axis.
     * @return Tile identifier.
     */
    static TileId mergeIdXY(int xPart, int yPart) { 
      return (xPart & 0xffff) | (yPart << 16);
    }

    //! Lowest x index of a tile.
    /** 
     * @param id The tile identifier.
     */
    static int originX(TileId id) { return (int)((short)(id)) << TileSizeLog2; }
    //! Lowest y index of a tile.
    /** 
     * @param id The tile identifier.
     */
    static int originY(TileId id) { return (id >> (16 - TileSizeLog2)) & ~IndexMask; }

    //! X component of the tile id.
    /** 
     * @param id The tile identifier.
     */
    static int idX(TileId id) { return (int)((short)(id)); }
    //! Y component of the tile id.
    /** 
     * @param id The tile identifier.
     */
    static int idY(TileId id) { return id >> 16; }

    /**
     * @brief Index into the cell-array from global coordinates.
     * 
     * @param a Cell index in X axis.
     * @param b Cell index in Y axis.
     * 
     * @return Index into 1D cell-array.
     */
    static int index(int a, int b) { return ((b & IndexMask) << TileSizeLog2) | (a & IndexMask); }

  private:
    TileId m_tileId;
  };

}
#endif // kn_TileBase_h
