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
#include <Eigen/Geometry>

#include <iostream>

//using namespace kn;
using namespace std;

int main(int, char **)
{
  Eigen::Vector2d cmin(2., 1.);
  Eigen::Vector2d cmax(4., 3.);
  Eigen::AlignedBox<double, 2> box1(cmin, cmax);
  Eigen::AlignedBox<double, 2> box2(cmin, cmax);
  //Eigen::AlignedBox2d box1(cmin, cmax);
  //Eigen::AlignedBox2d box2(cmax, cmax);

  cout << box1.min() << endl
       << box1.max() << endl;

  cout << "cmin " << box1.contains(cmin) << endl;
  cout << "cmax " << box1.contains(cmax) << endl;

  cout << "box1.contains(box2) " << box1.contains(box2) << endl;
  cout << "box1.isEmpty() " << box1.isEmpty() << endl;
  cout << "box2.isEmpty() " << box2.isEmpty() << endl;

  return 0;
}
