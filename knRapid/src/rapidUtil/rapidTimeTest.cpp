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
#include "RapidHelper.h"

#include "miro/TimeHelper.h"

#include <iostream>

using namespace std;

int main (int argc, char * argv[])
{
  ACE_Time_Value aceT(0);

  int sec = 0;
  int usec = 0;

  if (argc > 1)
    sec = atoi(argv[1]);
  if (argc > 2)
    usec = atoi(argv[2]);

  aceT.sec(sec);
  aceT.usec(usec);

  if (argc == 1)
    aceT = ACE_OS::gettimeofday();

  ACE_Time_Value before = ACE_OS::gettimeofday();
  DDS_LongLong rapidT;
  ACE_Time_Value aceT2;
  for (int i = 0; i < 10000000; ++i) {
    rapidT = rapid::RapidHelper::aceTimeValue2RapidTime(aceT);
   aceT2 = rapid::RapidHelper::rapidTime2AceTimeValue(rapidT);
  }
  ACE_Time_Value after = ACE_OS::gettimeofday();

  cout << "elapsed: " << after - before  << endl;
  cout << "ace:   " << aceT  << endl;
  cout << "ace2:  " << aceT2 << endl;
  cout << "rapid: " << rapidT << endl;

  return 0;
}
