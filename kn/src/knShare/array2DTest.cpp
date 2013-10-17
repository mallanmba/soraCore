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
#include "Array2DView.h"

#include <string> 
#include <vector>
#include <iostream>

using namespace std;

struct Cell
{
  char a;

  Cell() : a('.') {}
};

std::ostream& operator<<(std::ostream& ostr, Cell const& rhs) {
  return ostr << rhs.a;
}

typedef kn::Array2DView<Cell> MapType;

void printMap(MapType const& m)
{
  for (size_t y = 0; y < m.sizeY(); ++y) {
    for (size_t x = 0; x < m.sizeX(); ++x) {
      cout << m(x, y);
    }
    cout << endl;
  }
}

int mapSizeX = 32;
int mapSizeY = 32;

int main(int argc, char * argv[])
{
  if (argc > 1) {
    mapSizeX = atoi(argv[1]);
    mapSizeY = atoi(argv[1]);
  }
  if (argc > 2) {
    mapSizeY = atoi(argv[2]);
  }

  MapType m(mapSizeX, mapSizeY);

  cout << "sizeX " << m.sizeX() << endl;
  cout << "sizeY " << m.sizeY() << endl;
  cout << "sizeLog2 " << m.sizeLog2() << endl;
  cout << "indexMask " << m.indexMask() << endl;
  cout << "numCells " << m.numCells() << endl;


  string cmd;
  while (!cin.eof()) {
    int x;
    int y;
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
