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
#ifndef kn_TiledMap_h
#define kn_TiledMap_h

#include "TiledMapBase.h"
#include "Tile.h"
#include "TileFactory.h"

#include <map>
#include <algorithm>
#include <climits>

namespace kn
{
  template<typename T, typename F = DefaultTileFactory<T> >
  class TiledMap : public TiledMapBase<TiledMap<T, F>, T>
  {
    typedef TiledMap<T, F> This;
    //! Super class shorthand.
    typedef TiledMapBase<This, T> Super;

   public:
    //! The type for the factory that instanciates and deletes tiles..
    typedef F TileFactory;
    //! The type for representing a tile.
    typedef T Tile;
    //! The type for type-id specifiers.
    typedef typename T::TileId TileId;
    //! The type for representing a cell.
    typedef typename T::Cell Cell;
    //! The type for representingthe map of tiles.
    typedef std::map<TileId, Tile *> TileMap;

  public:
    /* Map constructor.
     *
     * @param factory - reference to the tile factory.
     * @param cellLength - length of the cell for cooridnate/index mapping.
     */
    TiledMap(TileFactory& factory, double cellLength = .1) :
      Super(cellLength),
      m_tileFactory(factory)
    {}

    //! Reference to the tile map.
    TileMap const& tileMap() const { return m_tileMap; }
    //! Reference to the tile map.
    TileMap& tileMap() { return m_tileMap; }


    //! Clear a map tile
    void clear(TileId id) {
      typename TileMap::iterator iter =  m_tileMap.find(id);
      if (iter != m_tileMap.end()) {
          m_tileFactory.destroyTile(iter->second);
          m_tileMap.erase(iter);
      }
    }

    //! Clearing the map by destroying all tiles.
    void clearMap() {
      typename TileMap::const_iterator first, last = m_tileMap.end();
      for (first = m_tileMap.begin(); first != last; ++first) {
        m_tileFactory.destroyTile(first->second);
      }
      m_tileMap.clear();
    }

    //! Find tile that contains a given a/b-index if it the tile already exists.
    Tile const * findTile(int a, int b) const {
      return hasTileImpl(a, b);
    }

  protected:
    friend class TiledMapBase<TiledMap<T, F>, T>;

    Tile * hasTileImpl(int x, int y) const {
      TileId id = Tile::createId(x, y);
      typename TileMap::iterator iter =  m_tileMap.find(id);
      return (iter != m_tileMap.end())? iter->second : NULL;
    }

    template<typename Operator>
    void 
    forEachTileImpl(Operator& op) {
      typename TileMap::iterator first, last = m_tileMap.end();
      for (first = m_tileMap.begin(); first != last; ++first) {
        op(*first);
      }
    }

    template<typename Operator>
    void 
    forEachTileImpl(Operator& op) const {
      typename TileMap::const_iterator first, last = m_tileMap.end();
      for (first = m_tileMap.begin(); first != last; ++first) {
        op(*first);
      }
    }

    void boundingBoxImpl(int& x, int& y, int& dx, int& dy) const {
      if (!m_tileMap.empty()) {
        typename TileMap::const_iterator first, last = m_tileMap.end();
        first = m_tileMap.begin();
       
        int maxX = x = first->second->originX();
        int maxY = y = first->second->originY();
          
        for (++first; first != last; ++first) {
          x = std::min(x, first->second->originX());
          y = std::min(y, first->second->originY());
          
          maxX = std::max(maxX, first->second->originX());
          maxY = std::max(maxY, first->second->originY());
        }
        
        
        dx = (maxX + Tile::TileSize) - x;
        dy = (maxY + Tile::TileSize) - y;
      } 
      else {
        dx = dy = -1;
        x = y = INT_MAX;
      }
    }

  private:
    struct OlderTile
    {
      bool operator()(typename TileMap::value_type const& lhs, typename TileMap::value_type const& rhs) {
        ACE_Time_Value lhsAccess = lhs.second->lastReadAccess();
        if (lhs.second->lastWriteAccess() > lhsAccess) {
          lhsAccess = lhs.second->lastWriteAccess();
        }

        ACE_Time_Value rhsAccess = rhs.second->lastReadAccess();
        if (rhs.second->lastWriteAccess() > rhsAccess) {
          rhsAccess = rhs.second->lastWriteAccess();
        }

        return lhsAccess < rhsAccess;
      }
    };

  public:
    Tile * getTile(int a, int b) {
      TileId id = Tile::createId(a, b);
      return getTile(id);
    }

    Tile * getTile(int id) {
      Tile * t;

      // return tile from map
      typename TileMap::iterator iter =  m_tileMap.find(id);
      if (iter != m_tileMap.end()) {
        t = (iter->second);
      }
      
      // create new tile
      else {
        // adhere to tile number limit
        if (m_tileMap.size() >= m_tileFactory.capacity()) {
          // find most unused tile
          OlderTile comp;
          iter = min_element(m_tileMap.begin(), m_tileMap.end(), comp);
          m_tileFactory.destroyTile(iter->second);
          m_tileMap.erase(iter);
        }
        
        t = m_tileFactory.createTile(id);
        m_tileMap.insert(std::make_pair(id, t));
      }

      return t;
    }

  private:
    TileFactory& m_tileFactory; // mutable keyword invalid on references
    mutable TileMap m_tileMap;
  };
}
#endif // kn_TiledMap_h
