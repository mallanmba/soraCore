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
#include "CurlFetcher.h"

using namespace kn;
using namespace kn::fetcher;

class CurlInternal {
public:
  static void init() { }

  static bool schemeSupported(const std::string& scheme) { return false; }

  explicit CurlInternal(const FetchPoolParameters &options) { }
  ~CurlInternal() { }

  bool fetch(const std::string &uri, const std::string &filename, CallbackPtr &c) {
    return false;
  }

  bool cancel() {
    return false;
  }

  bool changeSpeedLimit(int newSpeed) {
    return false;
  }
};

void CurlFetcher::init() {
  CurlInternal::init();
}

bool CurlFetcher::schemeSupported(const std::string& scheme) {
  return CurlInternal::schemeSupported(scheme);
}

CurlFetcher::CurlFetcher(const FetchPoolParameters &options) {
  m_internal = new CurlInternal(options);
}
CurlFetcher::~CurlFetcher() {
  delete m_internal;
}

bool CurlFetcher::fetch(const std::string &uri, const std::string &filename, CallbackPtr &c) {
  return m_internal->fetch(uri, filename, c);
}
bool CurlFetcher::cancel() {
  return m_internal->cancel();
}
bool CurlFetcher::changeSpeedLimit(int newSpeed) {
  return m_internal->changeSpeedLimit(newSpeed);
}
