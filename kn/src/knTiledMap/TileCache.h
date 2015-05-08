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
#ifndef kn_TileCache_h
#define kn_TileCache_h

#include <map>

namespace kn
{
  class TileBase;

  /**
   * @ingroup knTiledMap
   * @brief A 2D cache for efficiently accessing recently used tiles.
   * 
   * The biggest theoretical performance issue with tiled maps is that the tile lookup 
   * requires a search which is usually of complexity O(log n).
   * The tile-cache takes advantage of the fact that cells are usually updated within
   * a geometrically bounded region and tile-id's can be easily hashed into locally unique keys.
   * 
   * Unfortunately, the tile-cache is yet to be transparently integrated with tiled maps.
   * 
   */
  template<unsigned int CSLL2 = 2 >
  class TileCacheBase
  {
  public:
    typedef unsigned int TileId;

    static unsigned int const CacheSizeLogLog2 = CSLL2;
    static unsigned int const CacheSizeLog2 = 1 << CSLL2;
    static unsigned int const CacheSize = 1 << (2 * CSLL2);
    static unsigned int const IndexMask = CacheSizeLog2 - 1;

    TileCacheBase()
    {
      flushCache();
    }

    void flushCache()
    {
      memeset(m_cache, 0, sizeof(m_cache));
    }

    static unsigned int cacheIndex(int x, int y)
    {
      return (x & IndexMask) | ((y & IndexMask) << CacheSizeLogLog2);
    }
    
    void setTimestamp(ACE_Time_Value const& timestamp) {
      m_timestamp = timestamp;
    }
    ACE_Time_Value timestamp() const {
      return m_timestamp;
    }

  protected:
    // cache
    ACE_Time_Value m_timestamp;
    TileBase * m_cache[CacheSize];

  private:
    TileCacheBase(TileCacheBase const&) {}
  };

  template<typename M, unsigned int CSLL2 = 2 >
  class TileWriteCache : public TileCacheBase<CSLL2>
  {
    typedef TileCacheBase<CSLL2> Super;
  public:
    typedef unsigned int TileId;

    typedef M TiledMap;
    typedef typename M::Tile Tile;
    typedef typename Tile::Cell Cell;

    TileWriteCache(TiledMap& tiledMap) :
      m_tiledMap(tiledMap)
    {}

    Cell& operator()(double x, double y) {
      int iX = m_tiledMap.index(x);
      int iY = m_tiledMap.index(y);
      Tile& t = this->tile(iX, iX);
      return t.cell(iX, iY);
    }

    Tile& tile(int x, int y) 
    {
      unsigned int index =
        cacheIndex(x >> Tile::TileSizeLog2, y >> Tile::TileSizeLog2);
      TileId id = Tile::createId(x, y);

      // return tile from cache
      if (Super::m_cache[index] == NULL ||
          Super::m_cache[index]->tileId() != id) {
      
        Super::m_cache[index] = m_tiledMap.tile(x, y, Super::m_timestamp);
      }
      return *Super::m_cache[index];
    }
    
  private:
    // map reference
    TiledMap& m_tiledMap;
  };

  template<typename M, unsigned int CSLL2 = 2 >
  class TileReadCache : public TileCacheBase<CSLL2>
  {
    typedef TileCacheBase<CSLL2> Super;

  public:
    typedef unsigned int TileId;

    typedef M TiledMap;
    typedef typename M::Tile Tile;
    typedef typename Tile::Cell Cell;

    TileReadCache(TiledMap const& tiledMap) :
      m_tiledMap(tiledMap)
    {}

    Cell const& operator()(double x, double y) {
      int iX = m_tiledMap.index(x);
      int iY = m_tiledMap.index(y);
      Tile& t = this->tile(x, y);
      return t.cell(x, y);
    }

    Tile const& tile(int x, int y) {
      unsigned int index =
        cacheIndex(x >> Tile::TileSizeLog2, y >> Tile::TileSizeLog2);
      TileId id = Tile::createId(x, y);

      // return tile from cache
      if (Super::m_cache[index] == NULL ||
          Super::m_cache[index]->tileId() != id) {
      
        Super::m_cache[index] = m_tiledMap.tile(x, y, Super::m_timestamp);
      }
      return *Super::m_cache[index];
    }
    
  private:
    // map reference
    TiledMap const& m_tiledMap;
  };
}

#endif
