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
#ifndef Kn_CurlFetcher_H
#define Kn_CurlFetcher_H

#include "FetchPool.h"
#include "knFetchPool_Export.h"

// Predeclare an internal curl thing. Hiding is awesome.
class CurlInternal;

namespace kn {
namespace fetcher {

class knFetchPool_Export curl_error
  : public std::runtime_error
{ 
public:
  explicit curl_error(const std::string &what)
    : std::runtime_error(what)
  { }
};

class knFetchPool_Export CurlFetcher
  : private boost::noncopyable
{
public:
  static void init();
  static bool schemeSupported(const std::string& scheme);

  explicit CurlFetcher(const FetchPoolParameters &options);
  ~CurlFetcher();

  bool fetch(const std::string &uri, const std::string &filename, CallbackPtr &c);
  bool cancel();
  bool changeSpeedLimit(int newSpeed);

private:
  CurlInternal *m_internal;
};

typedef FetcherPool<CurlFetcher> CurlPool;

} }

#endif /* Kn_CurlFetcher_H */

