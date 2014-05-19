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
#include "ScrollingTiledMap.h"
#include "TileCache.h"

#include <string> 
#include <vector>
#include <iostream>

using namespace std;

namespace {
  //char c = 'a';

  struct Cell
  {
    char a;
    
    Cell() : a('.') {
      //    if (c > 'z')
      //      c = 'a';
    }
  };

  typedef kn::ScrollingMapTile<Cell, 1> TileType; // tile-size 2x2, num-tiles 4x4 , map-size 8x8
  typedef kn::ScrollingTiledMap<TileType> MapType;
}

void printMap(MapType& m)
{
  int originX = 0;
  int originY = 0;
  int dx = 0;
  int dy = 0;

  cout << "id's:" << endl;
  MapType::TileVector::const_iterator first, last = m.tiles().end();
  for (first = m.tiles().begin(); first != last; ++first) {
    int idX = first->idX();
    int idY = first->idY();
    cout << "(" << idX << "," << idY << ")";
  }
  cout << endl;

  m.boundingBox(originX, originY, dx, dy);
  cout << "((" << originX << ", " << originY << "), (" << dx << ", " << dy << "))" << endl;

  for (int y = originY; y < originY + dy; ++y) {
    for (int x = originX; x < originX + dx; ++x) {
      cout << m(x, y).a << flush;
    }
    cout << endl;
  }

}

int main(int, char **)
{
  MapType m(2, 1.);

  string cmd;
  while (!cin.eof()) {
    cerr << "Options: " << endl
         << " 1- set cell" << endl
         << " 2- set center" << endl
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
          
          cout << "x: " << flush;
          cin >> x;
          cout << "y: " << flush;
          cin >> y;
          
          if (!cin.eof()) {
            m.setCenter(x, y);
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
