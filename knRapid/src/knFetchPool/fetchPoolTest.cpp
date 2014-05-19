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
#include <iostream>

#include "CurlFetcher.h"
#include "knShare/Chrono.h"

using namespace kn;
using namespace kn::fetcher;

class TestCallback
  : public Callback
{
public:
  TestCallback() {
    std::cout << "TestCallback constructed" << std::endl;
  }
  TestCallback(const TestCallback &other) {
    std::cout << "TestCallback constructed" << std::endl;
  }

  ~TestCallback() {
    std::cout << "TestCallback destructed" << std::endl;
  }

  virtual void success() {
    std::cout << "Success!" << std::endl;
  }

  virtual bool error() {
    std::cout << "Error :(" << std::endl;
    return false;
  }
};

int main(int argc, char* argv[]) {

  FetchPoolParameters o;
  o.numFetchers = 1;
  o.speedLimit = 0;
  o.privateKey = "";
  o.publicKey = "";

  CurlPool tp(o);
  std::cout << tp.schemeSupported("sftp") << std::endl;
  std::cout << tp.schemeSupported("blaaargh") << std::endl;

  return 0;

  TestCallback tc;
  //tp.cancel("test1");

  //tp.queue("test2", "test2file", tc);
  //tp.queue("test3", "test3file", tc);
  //tp.queue("test4", "test4file", tc);
  //tp.queue("test5", "test5file", tc);
  //tp.queue("test5", "test5file", tc);
  //tp.cancel("test5");

  //  sleep(5);
  //tp.cancel("sftp://tfmorse@m.ndc.nasa.gov/home/tfmorse/vim.tar");

  while (!tp.isFinished()) {
    kn::this_thread::sleep_for(kn::seconds(1));
  }

  return 0;
}
