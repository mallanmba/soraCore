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
#include "WheelGroupFuture.h"

#include <iostream>

using namespace std;
using namespace kn;

double positions[] = { 1., 2., 3., 4. };
double speeds[] = { 11., 12., 13., 14. };

int main(int, char**)
{
  ATrans2 o(Eigen::Translation2d(0.,1.));
  o.rotate(45./180.* M_PI);

  WheelGroupFuture future(ACE_Time_Value(1, 500000),
                          vector<double>(positions, positions + 4),
                          vector<double>(speeds, speeds + 4),
                          5., 6., 7., 8., 9., o);


  cout << "MotorGroup: " << static_cast<MotorGroupFuture const&>(future) << endl;
  cout << "WheelGroup: " << future << endl;

  return 0;
}
