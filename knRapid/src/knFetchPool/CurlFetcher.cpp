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

#include <curl/curl.h>
#include <stdio.h>
#include <stdexcept>

#include <ctype.h>
#include <algorithm>

using namespace kn;
using namespace kn::fetcher;

class CurlInternal {
public:
  static void init() {
    curl_global_init(CURL_GLOBAL_NOTHING);
  }

  static bool schemeSupported(const std::string& scheme) {
    curl_version_info_data* info = curl_version_info(CURLVERSION_NOW);
    if (!info)
      return false;

    std::string schemeCopy = scheme;
    std::transform(schemeCopy.begin(), schemeCopy.end(), schemeCopy.begin(), tolower);
    
    char * const* protocols = (char* const*) info->protocols;
    while (*protocols != NULL) {
      if (std::string(*protocols) == schemeCopy)
        return true;
      protocols++;
    }

    return false;
  }

  explicit CurlInternal(const FetchPoolParameters &options) 
    : m_options(options),
      m_cancel(false),
      m_running(false),
      m_restart(false),
      m_file(0)
  { 
    m_curl = curl_easy_init();
    if (m_curl == NULL) {
      throw curl_error("curl_easy_init returned NULL");
    }

    // Now set up all of the curl options  
    curl_easy_setopt(m_curl, CURLOPT_ERRORBUFFER, m_errorBuffer);

    curl_easy_setopt(m_curl, CURLOPT_NOPROGRESS, 0);
    curl_easy_setopt(m_curl, CURLOPT_PROGRESSFUNCTION, CurlInternal::progress);
    curl_easy_setopt(m_curl, CURLOPT_PROGRESSDATA, this);

    curl_easy_setopt(m_curl, CURLOPT_SSH_PRIVATE_KEYFILE, options.privateKey.c_str());
    curl_easy_setopt(m_curl, CURLOPT_SSH_PUBLIC_KEYFILE, options.publicKey.c_str());
    curl_easy_setopt(m_curl, CURLOPT_SSH_AUTH_TYPES, CURLSSH_AUTH_PUBLICKEY);

    if (options.timeout > 0) {
      curl_easy_setopt(m_curl, CURLOPT_CONNECTTIMEOUT, (options.timeout / 1000));
    }

    curl_easy_setopt(m_curl, CURLOPT_VERBOSE, 1);

    if (options.speedLimit > 0) {
      curl_easy_setopt(m_curl, CURLOPT_MAX_RECV_SPEED_LARGE, (curl_off_t) options.speedLimit);
    }
  }
  ~CurlInternal() {
    curl_easy_cleanup(m_curl);
  }

  bool fetch(const std::string &uri, const std::string &filename, CallbackPtr &c) {
    std::cout << "Starting thread to fetch " << uri << std::endl;

    m_cancel = false;

    m_file = fopen(filename.c_str(), "wb");
    if (!m_file) {
      std::cout << "Error opening file: " << filename << std::endl;
      return false;
    }

    curl_easy_setopt(m_curl, CURLOPT_RESUME_FROM, 0);
    curl_easy_setopt(m_curl, CURLOPT_FRESH_CONNECT, 0);
    curl_easy_setopt(m_curl, CURLOPT_WRITEDATA, m_file);

    m_thread = kn::thread(CurlInternal::do_fetch, this, uri, filename, c);
    return true;
  }

  bool cancel() {
    if (!m_running)
      return true;

    std::cout << "Canceling" << std::endl;
    m_cancel = true;

    return true;
  }

  bool changeSpeedLimit(int newSpeed) {
    std::cout << "Changing speed limit from " << m_options.speedLimit 
              << " to " << newSpeed << " bytes/sec " << std::endl;
    m_options.speedLimit = newSpeed;
    if (m_running) {
      std::cout << "Fetcher is currently fetching. Not quite simple." << std::endl;

      m_restart = true;
      m_cancel = true;
    } else {
      curl_easy_setopt(m_curl, CURLOPT_MAX_RECV_SPEED_LARGE, (curl_off_t) m_options.speedLimit);
    }
    return true;
  }

private:
  static int progress(CurlInternal * fetcher, double size, double current, 
             double /* ultotal */, double /* ulnow */) 
  {
    static double prevCurrent = 0;

    if (prevCurrent != current) {
      std::cout.precision(0);
      std::cout << "Downloaded " << std::fixed << current << " out of " << size << std::endl;

      prevCurrent = current;
    }

    if (fetcher->m_cancel)
      return 1;

    return 0;
  }

  // In another thread...
  static void do_fetch(CurlInternal * fetcher, const std::string &uri, const std::string &filename, CallbackPtr c) 
  {
    std::cout << "Thread fetching " << uri << " to " << filename << std::endl;
    curl_easy_setopt(fetcher->m_curl, CURLOPT_URL, uri.c_str());

    int retries = 0; // First try is try 0
    while(retries < 3) {

      fetcher->m_running = true;

      // Do it...
      CURLcode result = curl_easy_perform(fetcher->m_curl);

      if (result == CURLE_OK) {
        fclose(fetcher->m_file);
        fetcher->m_running = false;
        c->success();
        return;
      }

      // Stupid socket closes prematurely for some reason on slow bandwidth-limited
      // connections for the last 1k or so. Annoying. Retry, telling it to resume
      // where it left off. Seems to happen for limits under 75kB/sec
      // Also, stale connections seem to not be found right off the bat.
      // Tell it to reset the connection and try again.
      if (result == CURLE_PARTIAL_FILE || result == CURLE_SSH || fetcher->m_restart == true) {
        if (!fetcher->m_restart)
          std::cout << "Curl is being retarded. Resuming for last bit of data" << std::endl;
        else {
          std::cout << "Changing speeds..." << std::endl;
          curl_easy_setopt(fetcher->m_curl, CURLOPT_MAX_RECV_SPEED_LARGE, (curl_off_t) fetcher->m_options.speedLimit);
        }

        if (result == CURLE_SSH) {
          curl_easy_setopt(fetcher->m_curl, CURLOPT_FRESH_CONNECT, 1);
        }

        // Find out where the file is pointing currently
        long position = ftell(fetcher->m_file);

        // Tell curl to resume at that point
        curl_easy_setopt(fetcher->m_curl, CURLOPT_RESUME_FROM, position);
        
        if (!fetcher->m_restart)
          ++retries;
        else {
          fetcher->m_cancel = false;
          fetcher->m_restart = false;
        }

        continue;
      }
    
      // Other error, let the client decide
      std::cout << "Error [" << result << "]: " << fetcher->m_errorBuffer << std::endl;
      if(!c->error()) {
        fetcher->m_running = false;
        return;
      }
    }

    fetcher->m_running = false;
  }

  FetchPoolParameters m_options;
  kn::thread m_thread;

  bool m_cancel;
  bool m_running;
  bool m_restart;

  char m_errorBuffer[CURL_ERROR_SIZE];
  CURL* m_curl;

  FILE* m_file;
  
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
