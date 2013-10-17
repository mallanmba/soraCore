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
#ifndef miro_DdsEventLoop_h
#define miro_DdsEventLoop_h

#include "knDds_Export.h"
#include "DdsDataHandler.h"
#include "DdsEventHandler.h"
#include "DdsTypedConsumer.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <map>
#include <vector>

class ACE_Time_Value;

namespace kn
{
  /** A class for DDS event-processing.
   *
   * The DDS callback API is very timing-sensitive.
   * The pull-interface is much more powerful and provides less surprises.
   *
   * This class allows to accumulate multiple DDS readers on different topics
   * and process their events in a single function.
   */
  class knDds_Export DdsEventLoop
  {
  public:
    //! Default event mask for DDS::StatusCondition based connectors.
    static DDS::StatusMask const DEFAULT_MASK =
      DDS_DATA_AVAILABLE_STATUS |
      DDS_SAMPLE_LOST_STATUS |
      DDS_SAMPLE_REJECTED_STATUS |
      DDS_SUBSCRIPTION_MATCHED_STATUS |
      DDS_REQUESTED_DEADLINE_MISSED_STATUS |
      DDS_REQUESTED_INCOMPATIBLE_QOS_STATUS |
      DDS_LIVELINESS_CHANGED_STATUS;

    //! Dtor cleaning up all owned objects.
    ~DdsEventLoop() throw();
    //! Connect a callback with a specifig topic.
    /** This creates an DdsTypedConsumer and DdsEventHandler instances
     * that the EventLoop keeps ownership of.
     */
    template<typename T, typename H>
    DdsStatusEventHandler<T,  DdsSampleCallbackFunctor<T, H>, DdsTake> * 
    connect(H * callback,
            std::string const& topic,
            std::string const& subscriber = "",
            std::string const& profile = "",
            std::string const& library = "",
            DDS::Long maxSamples = -1,
            DDS::StatusMask mask = DEFAULT_MASK);

    template<typename T, typename C, typename H>
    DdsStatusEventHandler<T, C, DdsTake> * 
    connect(H * callback,
            std::string const& topic,
            std::string const& subscriber = "",
            std::string const& profile = "",
            std::string const& library = "",
            DDS::Long maxSamples = -1,
            DDS::StatusMask mask = DEFAULT_MASK);


    //! Connect a callback with a specifig topic with a query.
    /** This creates an DdsTypedConsumer and DdsEventHandler instances
     * that the EventLoop keeps ownership of.
     */
    template<typename T, typename H>
    DdsQueryEventHandler<T, DdsSampleCallbackFunctor<T, H>, DdsTake> * 
    connectWithQuery(H * callback,
                     char const * query, DDS::StringSeq const& params,
                     std::string const& topic,
                     std::string const& subscriber = "",
                     std::string const& profile = "",
                     std::string const& library = "",
                     DDS::Long maxSamples = -1);

    template<typename T, typename C, typename A>
    DdsStatusEventHandler<T, C, A> * 
    createStatusEventHandler(C callbackFunctor /* = DdsSampleCallbackFunctor<T, H>(handler)*/,
                             typename T::DataReader& dataReader,
                             A accessType = DdsTake(),
                             /* DDS::StatusMask mask = DEFAULT_MASK, */
                             DDS::Long maxSamples = -1);

    //! Create a QueryEventHandler for a specific topic.
    /** This creates a DdsEventHandler from a DdsTypedConsumer.
     * Note that the subscriber has to stay around till after the 
     * EventLoop instance is destroyed.
     */
    template<typename T, typename C, typename A>
    DdsQueryEventHandler<T, C, A> * 
    createReadEventHandler(C callbackFunctor /* = DdsSampleCallbackFunctor<T, H>(handler)*/,
                           typename T::DataReader& dataReader,
                           A accessType = DdsTake(),
                           DDS::Long maxSamples = -1);

    //! Create a QueryEventHandler for a specific topic.
    /** This creates a DdsEventHandler from a DdsTypedConsumer.
     * Note that the subscriber has to stay around till after the 
     * EventLoop instance is destroyed.
     */
    template<typename T, typename C, typename A>
    DdsQueryEventHandler<T, C, A> * 
    createQueryEventHandler(C callbackFunctor /* = DdsSampleCallbackFunctor<T, H>(handler)*/,
                            typename T::DataReader& dataReader,
                            char const * query, DDS::StringSeq const& params,
                            A accessType = DdsTake(),
                            DDS::Long maxSamples = -1);

    //! Add an EventHanlder to the EventLoop instance.
    /** This is the current hook for adding ReadCondition and QueryCondition
     * event handlers.
     */
    void addEventHandler(DdsEventHandlerBase * handler);

    //! The even-loop processor
    /** Waits up to maxSlice second on the arrival of new events.
     * Will return after all events triggered are processed.
     * Returns the remaining time of the slice or 0 if all time elapsed.
     *
     * Note that if processing of events takes a lot of time, the method
     * can take more than maxSlice time to return.
     */
    ACE_Time_Value processEvents(ACE_Time_Value const& maxSlice);

  private:
    typedef std::map<DDS::Condition *, DdsEventHandlerBase *> EventHandlerMap;
    typedef std::vector<DdsEventHandlerBase *> EventHandlerVector;
    typedef std::vector<DdsConsumerBase *> ReceiverVector;

    DDS::WaitSet m_waitSet;

    EventHandlerMap m_eventHandlers;
    EventHandlerVector m_ownedHandlers;
    ReceiverVector m_ownedReceivers;
  };

  template<typename T, typename H>
  DdsStatusEventHandler<T, DdsSampleCallbackFunctor<T, H>, DdsTake> * 
  DdsEventLoop::connect(H * callback,
                        std::string const& topic,
                        std::string const& subscriber,
                        std::string const& profile,
                        std::string const& library,
                        DDS::Long maxSamples,
                        DDS::StatusMask mask)
  {
    DdsTypedConsumer<T> * receiver =
      new DdsTypedConsumer<T>(topic, subscriber, profile, library);
    m_ownedReceivers.push_back(receiver);
    return this->createStatusEventHandler<T>(DdsSampleCallbackFunctor<T, H>(*callback),
                                             receiver->dataReader(),
                                             DdsTake(), 
                                             maxSamples);
  }
  
  template<typename T, typename C, typename H>
  DdsStatusEventHandler<T, C, DdsTake> * 
  DdsEventLoop::connect(H * callback,
                        std::string const& topic,
                        std::string const& subscriber,
                        std::string const& profile,
                        std::string const& library,
                        DDS::Long maxSamples,
                        DDS::StatusMask mask)
  {
    DdsTypedConsumer<T> * receiver =
      new DdsTypedConsumer<T>(topic, subscriber, profile, library);
    m_ownedReceivers.push_back(receiver);
    return this->createStatusEventHandler<T>(C(*callback),
                                             receiver->dataReader(),
                                             DdsTake(), 
                                             maxSamples);
  }
  
  template<typename T, typename H>
  DdsQueryEventHandler<T, DdsSampleCallbackFunctor<T, H>, DdsTake> * 
  DdsEventLoop::connectWithQuery(H * callback,
                                 char const * query, DDS::StringSeq const& params,
                                 std::string const& topic,
                                 std::string const& subscriber,
                                 std::string const& profile,
                                 std::string const& library,
                                 DDS::Long maxSamples)
  {
    DdsTypedConsumer<T> * receiver =
      new DdsTypedConsumer<T>(topic, subscriber, profile, library);
    m_ownedReceivers.push_back(receiver);

    return this->createQueryEventHandler<T>(DdsSampleCallbackFunctor<T, H>(*callback),
                                            receiver->dataReader(),
                                            query, params,
                                            DdsTake(),
                                            maxSamples);
  }
  
  template<typename T, typename C, typename A>
  DdsStatusEventHandler<T, C, A> * 
  DdsEventLoop::createStatusEventHandler(C callbackFunctor,
                                         typename T::DataReader& dataReader,
                                         A /*accessType*/,
                                         DDS::Long maxSamples)
  {
    DdsStatusEventHandler<T, C, A> * handler = 
      new DdsStatusEventHandler<T, C, A>(callbackFunctor, dataReader, maxSamples);
    this->addEventHandler(handler);
    m_ownedHandlers.push_back(handler);
    return handler;
  }

  template<typename T, typename C, typename A>
  DdsQueryEventHandler<T, C, A> * 
  DdsEventLoop::createReadEventHandler(C callbackFunctor,
                                       typename T::DataReader& dataReader,
                                       A /*accessType*/,
                                       DDS::Long maxSamples)
  {
    DdsQueryEventHandler<T, C, A> * handler = 
      new DdsQueryEventHandler<T, C, A>(callbackFunctor, dataReader, maxSamples);
    this->addEventHandler(handler);
    m_ownedHandlers.push_back(handler);
    return handler;
  }

  template<typename T, typename C, typename A>
  DdsQueryEventHandler<T, C, A> * 
  DdsEventLoop::createQueryEventHandler(C callbackFunctor,
                                        typename T::DataReader& dataReader,
                                        char const * query, DDS::StringSeq const& params,
                                        A /*accessType*/,
                                        DDS::Long maxSamples)
  {
    DdsQueryEventHandler<T, C, A> * handler = 
      new DdsQueryEventHandler<T, C, A>(callbackFunctor, dataReader,query, params, maxSamples);
    this->addEventHandler(handler);
    m_ownedHandlers.push_back(handler);
    return handler;
  }
}

#endif // miro_DdsEventLoop_h
