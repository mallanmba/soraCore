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
#include "TiledMap.h"
#include "TileCache.h"

#include <string> 
#include <vector>
#include <iostream>

using namespace std;

namespace {
  struct Cell
  {
    char a;

    Cell() : a('.') {}
  };

  typedef kn::Tile<Cell, 1> TileType;
  typedef kn::TiledMap<TileType> MapType;
}

void printMap(MapType const& m)
{
  int originX = 0;
  int originY = 0;
  int dx = 0;
  int dy = 0;

  m.boundingBox(originX, originY, dx, dy);

  MapType::TileMap const& tiles = m.tileMap();
  
  std::vector<char> bigMap(dx * dy, ' ');

  MapType::TileMap::const_iterator first, last = tiles.end();
  for (first = tiles.begin(); first != last; ++first) {
    TileType& tile = *first->second;
    for (unsigned int x = 0; x < TileType::TileSize; ++x) {
      for (unsigned int y = 0; y < TileType::TileSize; ++y) {
        int xIndex = x + tile.originX() - originX;
        int yIndex = y + tile.originY() - originY;
        bigMap[xIndex + dx * yIndex] = tile.cell(x, y).a;
      }
    }
  }

  int index = 0;
  for (int y = originY; y < originY + dy; ++y) {
    for (int x = originX; x < originX + dx; ++x) {
      cout << bigMap[index] << flush;
      ++index;
    }
    cout << endl;
  }
}

int main(int, char **)
{
  MapType::TileFactory tf(3);
  MapType m(tf, 1.);

  string cmd;
  while (!cin.eof()) {
    double x;
    double y;
    string a;

    cout << "x: " << flush;
    cin >> x;
    cout << "y: " << flush;
    cin >> y;
    cout << "a: " << flush;
    cin >> a;

    if (!cin.eof()) {
      m(x, y).a = a[0];
      printMap(m);
    }
  }

  return 0;
}
