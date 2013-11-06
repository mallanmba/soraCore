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
#include "knMath/ATrans.h"
#include "knMath/Matrix.h"
#include "knMath/Vector.h"

#include <iostream>

using namespace std;
using namespace kn;

int main(int, char**)
{
  Matrix3x3 r;
  Vector3 v(1., 2., 3.);
  ATrans3 t(4., 5., 6.);
  ATrans3 u(v);

  Vector3   w = u.translation();
  Matrix3x3 s = u.rotation();

  t *= u;
  Vector3 x = t * w;

  t = inverse(u);
  
  return 0;
}
