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
#include "ATrans.h"

#include <iostream>

using namespace kn;
using namespace std;
using namespace Eigen;

int main(int, char **)
{
  ATrans2 a2 = ATrans2::Identity();
  ATrans3 a3 = ATrans3::Identity();

  cout << ATrans2Out(a2) << endl;
  cout << ATrans3Out(a3) << endl;
  
  ATrans2 x(Translation2d(1, 2) * Rotation2Dd(45 * M_PI/180.));
  ATrans2 y(Translation2d(1, 2) * Rotation2Dd(0 * M_PI/180.));
  ATrans2 z(Translation2d(3, 4) * Rotation2Dd(30 * M_PI/180.));
  
  cout << ATrans2Out(x) << ", " << ATrans2Out(y) << ", " << ATrans2Out(z) << endl;
  
  ATrans2 offset = x.inverse() * z;
  ATrans2 offset2 = y.inverse() * z;
  
  ATrans2 xz(x * z);
  ATrans2 yz(y * z);
  ATrans2 x2yz(offset * xz);
  
  cout << "o:  " << ATrans2Out(offset) << " " << offset.translation().norm() << endl;
  cout << "o2: " << ATrans2Out(offset2) << " " << offset2.translation().norm() << endl;
  cout << ATrans2Out(xz) << ", " << ATrans2Out(yz) << ", " << ATrans2Out(x2yz) << endl;
  
  return 0;
}
