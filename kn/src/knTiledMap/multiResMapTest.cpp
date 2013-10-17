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
#include "MultiResTile.h"


#include <string> 
#include <vector>
#include <iostream>

using namespace std;

//char c = 'a';

struct Cell
{
  char a;

  Cell() : a('.') {
    //    if (c > 'z')
    //      c = 'a';
  }
};

typedef kn::MultiResTile<Cell, 1> TileType; // tile-size 2x2, num-tiles 4x4 , map-size 8x8
typedef kn::TiledMap<TileType> MapType;

void printMap(MapType const& m)
{
  int originX = 0;
  int originY = 0;
  int dx = 0;
  int dy = 0;

  m.boundingBox(originX, originY, dx, dy);
  cout << "((" << originX << ", " << originY << "), (" << dx << ", " << dy << "))" << endl;

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
    cerr << "Options: " << endl
         << " 1- set cell" << endl
         << " 2- set tile subsampling" << endl
         << " 3- print map" << endl;
    
    int option;
    if (!(cin >> option))
        break;
    
    try {
      switch (option) {
      case 1:
        {
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
          }
        }
        break;
      case 2:
        {
          double x;
          double y;
          unsigned int subSamplingLog2;
          
          cout << "x: " << flush;
          cin >> x;
          cout << "y: " << flush;
          cin >> y;
          cout << "res log 2: " << flush;
          cin >> subSamplingLog2;
          
          if (!cin.eof()) {
            MapType::Tile& t = m.tile(m.toIndex(x), m.toIndex(y));
            t.setSubsamplingLog2(subSamplingLog2);
          }
        }
        break;
      case 3:
        printMap(m);
        break;
      default:
        break;
      }
    }
    catch (std::exception const& e) {
      cout << "exception: " << e.what() << endl;
    }
  }

  return 0;
}
