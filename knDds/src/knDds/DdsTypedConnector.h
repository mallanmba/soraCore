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
#ifndef miro_DdsTypedConnector_h
#define miro_DdsTypedConnector_h

#include "DdsPushConsumer.h"
#include "DdsEventHandler.h"
#include "DdsTypedConsumer.h"

#include "miro/Log.h"
#include "miro/Exception.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <iostream>

namespace kn
{
  template<class T, class E>
  class DdsTypedConnector : public DdsPushConsumer
  {
  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------

    typedef T Traits;
    typedef E TypedEventHandler;
    typedef typename Traits::Type Type;
    typedef typename Traits::TypeSupport TypeSupport;
    typedef typename Traits::DataReader DataReader;
    typedef typename Traits::Seq Seq;

    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------
    DdsTypedConnector(TypedEventHandler * eventHandler,
                      std::string const& topic,
                      std::string const& subscriber = "",
                      std::string const& profile = "",
                      std::string const& library = "");
    ~DdsTypedConnector() throw();

    TypedEventHandler& eventHandler() throw() {
      return m_handleEvent;
    }
    TypedEventHandler const& eventHandler() const throw() {
      return m_handleEvent;
    }

  private:
    //--------------------------------------------------------------------------
    // private types
    //--------------------------------------------------------------------------
    typedef DdsSampleCallbackFunctor<T, E> Callback;
    typedef DdsReaderOnStatusCondition<T> ReaderHook;
    typedef DdsEventHandlerCore<T, Callback, DdsTake, ReaderHook, DDS::StatusCondition> EventHandler;
    
    //--------------------------------------------------------------------------
    // private methods
    //--------------------------------------------------------------------------
    virtual void on_data_available(DDS::DataReader* reader);

    //--------------------------------------------------------------------------
    // private data
    //--------------------------------------------------------------------------
    TypedEventHandler * m_handleEvent;
    DdsTypedConsumer<T> m_subscriber;
    EventHandler m_dataHandler;
  };

  template<class T, class E>
  DdsTypedConnector<T, E>::DdsTypedConnector(TypedEventHandler * eventHandler,
      std::string const& topic,
      std::string const& subscriber,
      std::string const& profile,
      std::string const& library) :
      m_handleEvent(eventHandler),
      m_subscriber(topic, subscriber, profile, library, this /*, DDS::DATA_AVAILABLE_STATUS*/),
      m_dataHandler(Callback(*eventHandler), ReaderHook(m_subscriber.dataReader()), -1)
  {}

  template<class T, class E>
  DdsTypedConnector<T, E>::~DdsTypedConnector() throw()
  {}


  template<class T, class E>
  void
  DdsTypedConnector<T, E>::on_data_available(DDS::DataReader * reader)
  {
    m_dataHandler.processEvents();
  }
} // namespace kn

#endif // miro_DdsTypedConsumer_h
