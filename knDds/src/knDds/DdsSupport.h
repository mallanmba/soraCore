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
#ifndef miro_DdsSupport_h
#define miro_DdsSupport_h

#include "knDds_Export.h"
#include "miro/Exception.h"
#include "miro/Singleton.h"

#include <ndds/ndds_cpp.h>

#include <ace/Basic_Types.h>
#include <ace/Recursive_Thread_Mutex.h>
#include <ace/Guard_T.h>

#include <iosfwd>
#include <string>

#define MIRO_DDS_TYPE_TRAITS(DATA_TYPE) \
  class DATA_TYPE ## Traits \
  { \
  public: \
    typedef DATA_TYPE Type; \
    typedef DATA_TYPE ## TypeSupport TypeSupport; \
    typedef DATA_TYPE ## DataWriter DataWriter; \
    typedef DATA_TYPE ## DataReader DataReader; \
    typedef DATA_TYPE ## Seq Seq; \
  };

class DDSDataReader;
class DDSDataWriter;
struct DDS_RequestedDeadlineMissedStatus;
struct DDS_RequestedIncompatibleQosStatus;
struct DDS_SampleLostStatus;
struct DDS_SampleRejectedStatus;
struct DDS_LivelinessChangedStatus;
struct DDS_SubscriptionMatchedStatus;
struct DDS_SampleLostStatus;
struct DDS_SampleInfo;

knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_RequestedDeadlineMissedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_RequestedIncompatibleQosStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_SampleLostStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_SampleRejectedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_LivelinessChangedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_SubscriptionMatchedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_SampleInfo const& rhs);

knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_OfferedDeadlineMissedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_OfferedIncompatibleQosStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_PublicationMatchedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_ReliableWriterCacheChangedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_ReliableReaderActivityChangedStatus const& rhs);
knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_LivelinessLostStatus const& rhs);

knDds_Export extern std::ostream& operator << (std::ostream& ostr, DDS_InconsistentTopicStatus const& rhs);

namespace kn
{
  //! DDS support code.
  class knDds_Export DdsSupport
  {
  public:
    //! Initialization of dds-related parameters.
    /** Handles initialization of the Miro::DdsEntitiesFactorySvcParameters parameters.
     * Parses the dds-specific command-line options 
     *  * -MiroDdsConfig
     *  * -MiroDomainId
     */
    static void init(int& argc, char * argv[]);
    static const char* initHelpString();
    
    //! Provide clear text value for dds error code.
    /** The equivalent to strerror for C errors. */
    static char const * getError(int rc) throw();

    static void printReaderStatus(std::ostream& ostr,
                                  DDSDataReader& reader, ACE_UINT32 mask);

    static DDS_Long maxNumInstances(DDSDataWriter& writer);
    
    class knDds_Export DataWriterListener : public DDSDataWriterListener
    {
      virtual void on_offered_deadline_missed(DDSDataWriter *writer, DDS_OfferedDeadlineMissedStatus const& status);
      virtual void on_liveliness_lost(DDSDataWriter *writer, DDS_LivelinessLostStatus const&status);
      virtual void on_offered_incompatible_qos (DDSDataWriter *writer, DDS_OfferedIncompatibleQosStatus const& status);
      virtual void on_publication_matched (DDSDataWriter *writer, DDS_PublicationMatchedStatus const& status);
      virtual void on_reliable_writer_cache_changed (DDSDataWriter *writer, DDS_ReliableWriterCacheChangedStatus const& status);
      virtual void on_reliable_reader_activity_changed (DDSDataWriter *writer, DDS_ReliableReaderActivityChangedStatus const& status);
      virtual void on_instance_replaced (DDSDataWriter *writer, DDS_InstanceHandle_t const& handle);
    };

    class knDds_Export TopicListener : public DDSTopicListener
    {
      virtual void on_inconsistent_topic(DDSTopic *topic, DDS_InconsistentTopicStatus const& status);

    public:
      static Miro::Singleton<TopicListener> instance;
    };

    template<typename T>
    inline
    static  
    DDSTopic * getTopic(DDSDomainParticipant * part, std::string const& name) 
    {
      ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_topicMutex);

      DDS_Duration_t timeout = {0, 100000000};
      DDSTopic * topic = part->find_topic(name.c_str(), timeout);

      if (topic == NULL) {
        // Register type before creating topic
        // this is safe to do multiple times
        char const * type = T::TypeSupport::get_type_name();
        DDS_ReturnCode_t rc = T::TypeSupport::register_type(part, type);
        if (rc != DDS_RETCODE_OK) {
          throw Miro::Exception(name + " - " + std::string(type) + std::string(" - register_type error: ") + DdsSupport::getError(rc));
        }
        
        // creating topic with default Qos
        topic = part->create_topic(name.c_str(),
                                   type,
                                   DDS_TOPIC_QOS_DEFAULT,
                                   DdsSupport::TopicListener::instance(),
                                   DDS_INCONSISTENT_TOPIC_STATUS);
        if (topic == NULL) {
          throw Miro::Exception("create_topic error: " + name + " - " + std::string(type));
        }
      }
      
      return topic;
    }

  protected:
    static ACE_Recursive_Thread_Mutex m_topicMutex;
  };
}
#endif
