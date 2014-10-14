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
#ifndef kn_ScrollingTiledMap_h
#define kn_ScrollingTiledMap_h

#include "TiledMapBase.h"
#include "ScrollingMapTile.h"

#include <stdexcept>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <climits>

namespace kn
{

  /**
   * @ingroup knTiledMap
   * @brief 2D scrolling map type, scrolling by tile-Map2Size.
   *
   * This map type combines the concept of a scrolling map with the tiled-map approach.
   * Instead of providing an unbounded sparce 2D array it implements an 2D array which
   * can be efficiently moved across the 2D plane keeping prior data (as long as it is
   * continously covered by the map) without the need for copying.
   *
   * Due to the power-of-two semantics and the tile-size scrolling accessing and moving
   * the map can be implements very efficiently.
   *
   */
  template<typename T>
  class ScrollingTiledMap : public TiledMapBase<ScrollingTiledMap<T>, T>
  {
    //! Super class shorthand.
    typedef TiledMapBase<ScrollingTiledMap<T>, T> Super;

  public:
    //! The type for representing a tile.
    typedef T Tile;
    //! The type for type-id specifiers.
    typedef typename T::TileId TileId;
    //! The type for representing a cell.
    typedef typename T::Cell Cell;
    //! The type for storing the tile set.
    typedef std::vector<Tile> TileVector;


    /**
     * @brief Initializing constructor.
     *
     * @param numTilesLog2 The number of tiles per row and column specified in log2.
     * @param indexScale The default tile size.
     * @param buffer Tile buffer, if NULL a new buffer is allocated and the map takes ownership of the buffer.
     *
     */
    ScrollingTiledMap(unsigned int numTilesLog2, double indexScale = 10., Cell * buffer = NULL) :
      Super(indexScale),
      NumTilesLog2(numTilesLog2),
      NumTiles(1 << NumTilesLog2),
      TilesIndexMask(NumTiles - 1),
      MapSizeLog2(NumTilesLog2 + T::TileSizeLog2),
      MapSize(1 << MapSizeLog2),
      IndexMask(MapSize - 1),
      Map2Size(1 << (MapSizeLog2 * 2)),
      Map2SizeMask(Map2Size - 1),
      m_originX(0),
      m_originY(0),
      m_baseX(0),
      m_baseY(0),
      m_offsetX(0),
      m_offsetY(0),
      m_buffer((buffer != NULL)? buffer : new Cell[Map2Size]),
      m_owned(buffer == NULL),
      m_tiles(NumTiles * NumTiles, numTilesLog2)
    {
      // create tiles for origin (0, 0)
      int index = 0;
      for (unsigned int y = 0; y < NumTiles; ++y) {
        for (unsigned int x = 0; x < NumTiles; ++x) {
          m_tiles[index].setTile((y << 16) | x, m_buffer);
          ++index;
        }
      }
    }

    /**
     * @brief Destructor
     *
     * Releasing map resources, if owned.
     *
     */
    ~ScrollingTiledMap()
    {
      if (m_owned) {
        delete[] m_buffer;
      }
    }

    /**
     * @brief Set center-tile of Map2Size to include the specified coordinates.
     *
     * @note As the scrolling tiled map scrolls by tile-size, set-center
     * does only change the center if the specified map coordinates lie
     * outside the current center tile.
     *
     * @param x X coordinate.
     * @param y Y coordinate.
     */
    void setCenter(double x, double y)
    {
      setOrigin((int) this->toIndex(x) - MapSize / 2,
                (int) this->toIndex(y) - MapSize / 2) ;
    }

    /**
     * @brief Get origin of tiled map.
     *
     * @param x On return holds the column index.
     * @param y On return holds the row index.
     */
    void origin(int& x, int& y) const {
      x = m_originX;
      y = m_originY;
    }

    /**
     * @brief Set origin-tile of Map2Size to include the specified indices.
     *
     * @note As the scrolling tiled map scrolls by tile-size, set-center
     * does only change the center if the specified map coordinates lie
     * outside the current center tile.
     *
     * @param x Column index.
     * @param y Row index.
     */
    void setOrigin(int x, int y)
    {
      // clear tiles
      int scrollX = (x  >> Tile::TileSizeLog2) - (m_originX >> Tile::TileSizeLog2);
      int scrollY = (y  >> Tile::TileSizeLog2) - (m_originY >> Tile::TileSizeLog2);

      int colMin = 0;
      int colMax = NumTiles;

      if (scrollX < -(int)NumTiles) {
        scrollX = -(int)NumTiles;
      }
      else if (scrollX > (int)NumTiles) {
        scrollX = NumTiles;
      }

      if (scrollY < 0) {
        if (scrollY < -(int)NumTiles)
          scrollY = -(int)NumTiles;
        colMax += scrollY;
      }
      else {
        if (scrollY > (int)NumTiles)
          scrollY = NumTiles;
        colMin += scrollY;

      }

      // set new origin
      m_originX = x & ~(Tile::TileSize - 1);
      m_originY = y & ~(Tile::TileSize - 1);

      m_baseX   = (m_originX >> MapSizeLog2) << MapSizeLog2;
      m_baseY   = (m_originY >> MapSizeLog2) << MapSizeLog2;

      // !!! add current offset
      for (int i = scrollX; i < 0; ++i) {
        clearTileColumn(NumTiles + i, colMin, colMax);
      }
      for (int i = 0; i < scrollX; ++i) {
        clearTileColumn(i, colMin, colMax);
      }
      for (int i = scrollY; i < 0; ++i) {
        clearTileRow(NumTiles + i);
      }
      for (int i = 0; i < scrollY; ++i) {
        clearTileRow(i);
      }

      m_offsetX = (m_originX >> Tile::TileSizeLog2) & TilesIndexMask;
      m_offsetY = (m_originY >> Tile::TileSizeLog2) & TilesIndexMask;
    }

    /**
     * @brief Check if specified indices lie within the map.
     *
     * @param x Column index.
     * @param y Row index.
     * @return Returns true if specified indices lie within map.
     */
    bool isWithinBounds(int x, int y) const {
      int dX = x - m_originX;
      int dY = y - m_originY;

      return ((unsigned int)(dX | dY) < MapSize);
    }

    /**
     * @brief Check if specified tile lies within the map.
     *
     * @param id Tile id as calaculated from row & column index.
     * @return Returns true if specified tile lies within map.
     */
    bool isWithinBounds(int id) const {
      return isWithinBounds(Tile::originX(id), Tile::originY(id));
    }

    friend class TiledMapBase<ScrollingTiledMap<T>, T>;

    /**
     * @brief Tile set accessor.
     *
     * @return Const reference to the tile set.
     */
    TileVector const& tiles() const { return m_tiles; }

    /**
     * read only tile accessor
     * @returns const reference to tile if it exists, otherwise NULL
     */
    const Tile* getTileIfExists(int x, int y) const {
      int index =
        ((x >> Tile::TileSizeLog2) & (NumTiles - 1)) |
        (((y >> Tile::TileSizeLog2) & (NumTiles - 1)) << NumTilesLog2);
      int id = Tile::createId(x, y);

      if (m_tiles[index].id() == id) {
        return &m_tiles[index];
      }
      return NULL;
    }

  protected:
    bool hasTileImpl(int x, int y) const {
      return isWithinBounds(x, y);
    }

    template<typename Operator>
    void
    forEachTileImpl(Operator& op) {
      typename TileVector::iterator first, last = m_tiles.end();
      for (first = m_tiles.begin(); first != last; ++first) {
        op(*first);
      }
    }

    template<typename Operator>
    void
    forEachTileImpl(Operator& op) const {
      typename TileVector::const_iterator first, last = m_tiles.end();
      for (first = m_tiles.begin(); first != last; ++first) {
        op(*first);
      }
    }

    void boundingBoxImpl(int& x, int& y, int& dx, int& dy) const {
      x = m_originX;
      y = m_originY;
      dx = MapSize;
      dy = MapSize;
    }

  private:
    Tile * getTile(int x, int y) {
      int index =
        ((x >> Tile::TileSizeLog2) & (NumTiles - 1)) |
        (((y >> Tile::TileSizeLog2) & (NumTiles - 1)) << NumTilesLog2);
      int id = Tile::createId(x, y);

      if (m_tiles[index].id() == id) {
        return &m_tiles[index];
      }

      std::stringstream what;
      what << "x or y argument outside map - (x,y)=(" << x << "," << y << ")";
      throw std::out_of_range(what.str());
    }

    Tile * getTile(int id) {
      int idX = Tile::idX(id);
      int idY = Tile::idY(id);
      int index =
        (idX & (NumTiles - 1)) | ((idY & (NumTiles - 1)) << NumTilesLog2);

      if (m_tiles[index].id() == id) {
        return &m_tiles[index];
      }

      std::stringstream what;
      what << "id argument outside map - (idX,idY)=(" << idX << "," << idY << ")";
      throw std::out_of_range(what.str());
    }

    void clearTile(int tileX, int tileY) {
      tileX += m_offsetX;
      tileX &= TilesIndexMask;
      tileY += m_offsetY;
      tileY &= TilesIndexMask;

      int x = tileX << Tile::TileSizeLog2;
      int y = tileY << Tile::TileSizeLog2;
      x += m_baseX ;
      if (x < m_originX)
        x += MapSize;
      y += m_baseY;
      if (y < m_originY)
        y += MapSize;
      int index = ((tileY) << NumTilesLog2) | (tileX);
      TileId id = Tile::createId(x, y);

      m_tiles[index].setTile(id, m_buffer);
    }

    void clearTileRow(unsigned int y) {
      for (unsigned int x = 0; x < NumTiles; ++x) {
        clearTile(x, y);
      }
    }

    void clearTileColumn(unsigned int x, unsigned int colMin, unsigned int colMax) {
      for (unsigned int y = colMin; y < colMax; ++y) {
        clearTile(x, y);
      }
    }

    unsigned int const NumTilesLog2;
    unsigned int const NumTiles;
    int const TilesIndexMask;

    unsigned int const MapSizeLog2;
    unsigned int const MapSize;
    int const IndexMask;

    unsigned int const Map2Size;
    unsigned int const Map2SizeMask;

    int m_originX;
    int m_originY;

    int m_baseX;
    int m_baseY;

    int m_offsetX;
    int m_offsetY;

    Cell * m_buffer;
    bool m_owned;

    TileVector m_tiles;
  };
}
#endif // kn_ScrollingTiledMap_h
