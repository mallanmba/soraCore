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
#ifndef miro_DdsTypedConsumer_h
#define miro_DdsTypedConsumer_h

// XXX mallan: the following is necessary to prevent compile problems
// XXX in OS_NS_Thread on Win32. Looks like ace is pulled in through
// XXX ClientParameters and there's a bad interaction with DDS. If
// XXX the DDS generated files are included before ace/OS.h, there
// XXX is a compile error.
#include <ace/OS_NS_Thread.h>

#include "knDds_Export.h"

#include "DdsSupport.h"
#include "DdsEntityRepositories.h"

#include "miro/Log.h"
#include "miro/Exception.h"
#include "miro/RobotParameters.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <iostream>

namespace kn
{
  class knDds_Export DdsConsumerBase
  {
  public:
    DdsConsumerBase() : m_reader(NULL) {}
    virtual ~DdsConsumerBase() throw();
    virtual DDS::DataReader& dataReader() throw() {
      return *m_reader;
    }
  protected:
    DDS::DataReader * m_reader;
  };

  template<class T>
  class DdsTypedConsumer : public DdsConsumerBase
  {
    using DdsConsumerBase::m_reader;

  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------

    typedef T Traits;
    typedef typename Traits::Type Type;
    typedef typename Traits::TypeSupport TypeSupport;
    typedef typename Traits::DataReader DataReader;
    typedef typename Traits::Seq Seq;

    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------

    DdsTypedConsumer(std::string const& topic,
                       std::string const& subscriber = "",
                       std::string const& profile = "",
                       std::string const& library = "",
                       DDS::DataReaderListener * listener = NULL,
                       DDS::StatusMask mask = DDS_STATUS_MASK_ALL);
    virtual ~DdsTypedConsumer() throw();

    virtual DataReader& dataReader() throw() {
      return dynamic_cast<DataReader&>(*m_reader);
    }

  private:
    //--------------------------------------------------------------------------
    // private data
    //--------------------------------------------------------------------------

    DDS::Topic * m_topic;
  };

  template<class T>
  DdsTypedConsumer<T>::DdsTypedConsumer(std::string const& topic,
      std::string const& subscriber,
      std::string const& profile,
      std::string const& library,
      DDS::DataReaderListener * listener,
      DDS::StatusMask mask) :
      m_topic(NULL)
  {
    std::string s = (subscriber.empty()) ?
      Miro::RobotParameters::instance()->name : subscriber;


    DdsSubscriberRepository * repo = DdsSubscriberRepository::instance();
    DDS::Subscriber * sub = repo->get(s);
    DDS::DomainParticipant * part = sub->get_participant();

    m_topic = DdsSupport::getTopic<T>(part, topic); 

    /* To customize data writer Qos, use
       publisher->get_default_datawriter_qos() */

    char const * prof = profile.empty() ? NULL : profile.c_str();
    char const * lib = library.empty() ? NULL : library.c_str();

    DDS::DataReader * reader =
      (prof) ?
      sub->create_datareader_with_profile(m_topic,
                                          lib, // default library
                                          prof, // passed in profile
                                          listener,
                                          mask) :
      sub->create_datareader(m_topic,
                             DDS_DATAREADER_QOS_DEFAULT, // passed in profile
                             listener,
                             mask);


    if (reader == NULL) {
      throw Miro::Exception("create_datawriter error");
    }

    m_reader = DataReader::narrow(reader);
    if (m_reader == NULL) {
      throw("DataReader narrow error");
    }
  }

  template<class T>
  DdsTypedConsumer<T>::~DdsTypedConsumer() throw()
  {
    DDS::Subscriber * subscriber = m_reader->get_subscriber();
    subscriber->delete_datareader(m_reader);

    DDS::DomainParticipant * participant = m_topic->get_participant();
    participant->delete_topic(m_topic);
  }

} // namespace kn

#endif // miro_DdsTypedConsumer_h
