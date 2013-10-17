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
#include "FrameStoreConfigSvc.h"

#include "knFrameStore/FrameStoreSingleton.h"

#include "knShare/Time.h"
#include "knMath/EulerAngles.h"

#include "miro/Configuration.h"
#include "miro/Log.h"

#include <iostream>
#include <vector>

using namespace std;
using namespace kn;



double pruneXyz(double d) {
  if (fabs(d) < 0.00001) {
    d = 0.;
  }
  return d;
}

double pruneRpy(double d) {
  d = pruneXyz(d);
  if (fabs(fabs(d) - M_PI) < 0.00001) {
    d = M_PI;
  }
  return d;
}

void printATrans(ATrans3 const& atrans) {
  Vector3 rpy = rotationMatrixToEulerXyz(atrans.rotation());
  cout << fixed << "(("
       << setprecision (3) << pruneXyz(atrans.translation().x()) << ", "
       << setprecision (3) << pruneXyz(atrans.translation().y()) << ", "
       << setprecision (3) << pruneXyz(atrans.translation().z())
       << "), (";
  for (size_t y = 0; y < 3; ++y) {
    for (size_t x = 0; x < 3; ++x) {
      if (x > 0 || y > 0) {
        cout << ", ";
      }
      cout << setprecision (8) << pruneXyz(atrans.rotation()(y, x));
    }
  }
  //  cout << "))" << endl;
   cout << "), ("
        << setprecision (3) << pruneRpy(rpy.x()) * 180./M_PI << " deg, "
        << setprecision (3) << pruneRpy(rpy.y()) * 180./M_PI << " deg, "
        << setprecision (3) << pruneRpy(rpy.z()) * 180./M_PI << " deg))"
        << endl;
}

int main(int argc, char * argv[])
{
  // setting global default configuration file
  Miro::Configuration::init(argc, argv);
  
  // configure log verbosity globally
  Miro::Log::init(argc, argv);

  FrameStoreConfigSvc fscs;
  fscs.init(argc, argv);

  FrameStore * fs = FrameStoreSingleton::instance();

  // get all
  vector<string> flist = fs->frame_names();
  FrameStore::FrameHandleVector handles;
  handles.reserve(flist.size());

  {
    vector<string>::const_iterator first, last = flist.end();
    for (first = flist.begin(); first != last; ++first) {
      FrameHandle fh = fs->lookup(*first);
      handles.push_back(fh);
      ATrans3 atrans = fs->get_transform(FrameHandle::NULL_HANDLE, fh);

      cout << *first << " ";
      printATrans(atrans);
    }
  }

  ATrans3Vector results;
  results.reserve(flist.size() * flist.size());

  TimePoint before = Clock::now();
  for (int a = 0; a < 100; ++a) {
    results.clear();
    for (size_t j = 0; j < handles.size(); ++ j) {
      for (size_t i = 0; i < handles.size(); ++i) {
        results.push_back(fs->get_transform(handles[i], handles[j]));
      }
    }
  }
  
  TimePoint after = Clock::now();

  cerr << "transforms: " << results.size() << endl
       << "elapsed: " << after - before << endl;

  ATrans3Vector::const_iterator first = results.begin();
  for (size_t j = 0; j < handles.size(); ++ j) {
    for (size_t i = 0; i < handles.size(); ++i, ++first) {
      cout << flist[j] << " " << flist[i] << " ";
      printATrans(*first);
    }
  }
  return 0;
}

