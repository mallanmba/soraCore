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
#ifndef kn_FetchPool_h
#define kn_FetchPool_h

#include <iostream>

#include <string>
#include <map>
#include <deque>
#include <set>
#include <utility>

#include <boost/noncopyable.hpp>
#include <boost/thread.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/tuple/tuple.hpp>

#include "FetchPoolParameters.h"

#include "knFetchPool_Export.h"

namespace kn {
namespace fetcher {

class knFetchPool_Export Callback {
public:
  virtual ~Callback() { }

  virtual bool error() = 0;
  virtual void success() = 0;
};

typedef boost::shared_ptr<Callback> CallbackPtr;

class knFetchPool_Export Finished {
public:
  virtual ~Finished() { }

  virtual void finished(const std::string& uri) = 0;
};

template<class Fetcher>
class knFetchPool_Export FetcherPool
  : public Finished,
    private boost::noncopyable
{
private:
  typedef boost::recursive_mutex Mutex;
  typedef boost::lock_guard<Mutex> Guard;

  typedef boost::shared_ptr<Fetcher> FetcherPtr;

  typedef boost::tuple<FetcherPtr, CallbackPtr> Operation;
  typedef boost::tuple<std::string, std::string, CallbackPtr> QueuedOperation;
  
  typedef std::map<std::string, Operation> OperationMap;
  typedef std::deque<FetcherPtr> FetcherQueue;
  typedef std::deque<QueuedOperation> UriQueue;

  class FinishedCallback
    : public Callback
  {
  public:
    FinishedCallback(std::string uri, CallbackPtr& callback, Finished *finished)
      : m_uri(uri),
        m_callback(callback),
        m_finished(finished)
    { }
    
    virtual bool error() {
      bool retval = m_callback->error();
      if (!retval)
        m_finished->finished(m_uri);
      return retval;
    }
    
    virtual void success() {
      m_finished->finished(m_uri);
      m_callback->success();
    }

  private:
    std::string m_uri;
    CallbackPtr m_callback;
    Finished *m_finished;
  };

  friend class FinishedCalback;

public:
  
  enum QueueResult {
    QUEUE_SUCCESS = 0,
    QUEUE_FAIL,
    QUEUE_REDUNDANT
  };

  explicit FetcherPool(const kn::FetchPoolParameters& options)
    : m_options(options)
  { 
    // Standardize path
    if (m_options.tempDirectory[m_options.tempDirectory.size() - 1] != '/')
      m_options.tempDirectory.push_back('/');

    // Initialize fetchers
    Fetcher::init();
    for (int i = 0; i < options.numFetchers; ++i) {
      m_pool.push_back(FetcherPtr(new Fetcher(options)));
    }
  }

  bool fetcherFree() const {
    return (m_pool.size() > 0);
  }

  bool isFinished() const {
    return (m_pool.size() == (unsigned int) m_options.numFetchers && m_uriQueue.empty());
  }

  bool schemeSupported(const std::string& scheme) const {
    return Fetcher::schemeSupported(scheme);
  }

  std::string getLocalPath(const std::string filename) {
    if (filename[0] != '/' ) {
      return m_options.tempDirectory + filename;
    }
    
    return std::string(m_options.tempDirectory, 0, m_options.tempDirectory.size() - 1) + filename;
  }
  
  template<class CallbackType>
  QueueResult queue(const std::string& uri, const std::string &filename, CallbackType &callback) {
    Guard guard(m_mutex);

    std::cout << "Trying to queue " << uri << std::endl;

    // Make sure we aren't already pulling this one
    if (m_busy.find(uri) != m_busy.end()) {
      std::cout << "Already fetching: " << uri << std::endl;
      return QUEUE_REDUNDANT;
    }

    // Make sure this one isn't in the queue already
    typename UriQueue::const_iterator i = m_uriQueue.begin();
    for(; i != m_uriQueue.end(); ++i) {
      if (boost::get<0>(*i) == uri) {
        std::cout << "Already queued: " << uri << std::endl;
        return QUEUE_REDUNDANT;
      }
    }
   
    // Make a shared pointer out of this callback
    CallbackPtr callPtr(new CallbackType(callback));

    // Add it to the queue of things to pull
    m_uriQueue.push_back(QueuedOperation(uri, filename, callPtr));
    
    startFetching();
    return QUEUE_SUCCESS;
  }

  bool cancel(const std::string& uri) {
    Guard guard(m_mutex);

    // Simple case, it's in the queue, delete it
    typename UriQueue::iterator uriItr = m_uriQueue.begin();
    for(; uriItr != m_uriQueue.end(); ++uriItr) {
      if (boost::get<0>(*uriItr) == uri) {
        std::cout << "In queue, removing " << uri << std::endl;
        m_uriQueue.erase(uriItr);
        return true;
      }
    }
    
    // Harder case, it's being transferred
    // Make sure we aren't already pulling this one
    typename OperationMap::const_iterator busyItr = m_busy.find(uri);
    if (busyItr != m_busy.end()) {
      std::cout << "Already fetching: " << uri << std::endl;
      boost::get<0>(busyItr->second)->cancel();
      return true;
    }    

    // No such uri
    return false;
  }

    int bandwidth() const throw() {
      return m_options.speedLimit;
    }

    void setBandwidth(int limit) throw() {
      Guard guard(m_mutex);

      m_options.speedLimit = limit;

      // Change the pool
      typename FetcherQueue::iterator poolItr;
      for (poolItr = m_pool.begin(); poolItr != m_pool.end(); ++poolItr) {
        (*poolItr)->changeSpeedLimit(limit);
      }

      // Change currently running ones
      typename OperationMap::iterator busyItr;
      for (busyItr = m_busy.begin(); busyItr != m_busy.end(); ++busyItr) {
        boost::get<0>(busyItr->second)->changeSpeedLimit(limit);
      }
    }

protected:
  virtual void finished(const std::string& uri) {
    Guard guard(m_mutex);

    std::cout << "Finished called for " << uri << std::endl;
    
    // Find uri in the map
    typename OperationMap::iterator i = m_busy.find(uri);
    if (i == m_busy.end()) {
      std::cerr << "This should never happen. Ever." << std::endl;
      return;
    }
    
    // Return the Fetcher to the pool of fetchers
    Operation &op = i->second;
    m_pool.push_back(boost::get<0>(op));

    m_busy.erase(i);

    startFetching();
  }

  bool startFetching() {
    Guard guard(m_mutex);

    // While we have things queued and we have Fetchers available
    while (!m_uriQueue.empty() && !m_pool.empty()) {
      // Get the next available Fetcher
      FetcherPtr f = m_pool.front();

      // Get the next available uri and callback
      QueuedOperation & queuedOperation = m_uriQueue.front();

      std::cout << "Going to start fetching " << queuedOperation.get<0>() << std::endl;
      
      // Wrap their callback in a FinishedCallback to notify us as well
      CallbackPtr finishedCallback(new FinishedCallback(queuedOperation.get<0>(), queuedOperation.get<2>(), this));
      if(f->fetch(queuedOperation.get<0>(), queuedOperation.get<1>(), finishedCallback)) {
        m_pool.pop_front();
        // Put it in the active operations
        m_busy.insert(std::make_pair(queuedOperation.get<0>(), Operation(f, queuedOperation.get<2>())));
      }

      m_uriQueue.pop_front();
    }

    return true;
  }

private:
  // The max data rate we can sustain for fetching files
  FetchPoolParameters m_options;

  Mutex m_mutex;

  // Pool of fetchers
  OperationMap m_busy;
  FetcherQueue m_pool;
  UriQueue m_uriQueue;
};

} }

#endif /* knFetchPool_h */
