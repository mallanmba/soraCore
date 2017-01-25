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
#ifndef knDds_DdsTypedSupplier_h
#define knDds_DdsTypedSupplier_h

// XXX mallan: the following is necessary to prevent compile problems
// XXX in OS_NS_Thread on Win32. Looks like ace is pulled in through
// XXX ClientParameters and there's a bad interaction with DDS. If
// XXX the DDS generated files are included before ace/OS.h, there
// XXX is a compile error.
#include <ace/OS_NS_Thread.h>

#include "knDds_Export.h"
#include "DdsSupport.h"
#include "DdsEntityRepositories.h"
#include "knDds/KnDdsParameters.h"

#include "miro/Log.h"
#include "miro/Exception.h"
#include "miro/RobotParameters.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

namespace kn
{
  /**
   * DdsSupplierBase
   */
  class knDds_Export DdsSupplierBase
  {
  public:
    DdsSupplierBase() : m_writer(NULL) {}
    virtual ~DdsSupplierBase() throw();
    virtual DDS::DataWriter& dataWriter() throw() { 
      return *m_writer; 
    }

  protected:
    DDS::DataWriter * m_writer;
  };

  //! use DdsSupport DATA_TYPE_TRAITS as template parameter
  /**
   * DdsTypedSupplier
   */
  template<class T>
  class DdsTypedSupplier : public DdsSupplierBase
  {
    using DdsSupplierBase::m_writer;

  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------

    typedef T Traits;
    typedef typename Traits::Type Type;
    typedef typename Traits::TypeSupport TypeSupport;
    typedef typename Traits::DataWriter DataWriter;

    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------

    /**
     * DdsTypedSupplier
     * @param topic The topic name in DDS domain.
     * @param publisher The publisher to use. 
     *                  This class is named publisher for consistency with Notification Service,
     *                  but it's actually a writer. N writers can write to a publisher.
     *                  Publishers are created by the DdsEntitiesFactorySvc at startup.
     * @param profile   In case this publisher needs a non-default profile, specify the xml-profile name.
     * @param library   In case this publisher needs a non-default profile, specify the xml-library name.
     * @param entityName optional name to insert into DataWriterQos.EntityNameQosPolicy
     */
    DdsTypedSupplier( std::string const& topic,
                      std::string const& publisher  = "",
                      std::string const& profile    = "",
                      std::string const& library    = "",
                      DDS::DataWriterListener* listener = NULL,
                      DDS::StatusMask mask          = DDS_STATUS_MASK_NONE,
                      std::string const& entityName = "");
                      
    DdsTypedSupplier( std::string const& topic,
                      std::string const& publisher,
                      std::string const& profile,
                      std::string const& library,
                      std::string const& entityName);
                      
    DdsTypedSupplier( std::string const& topic,
                      DdsLeafParameters const& params,
                      std::string const& entityName);
                      
    virtual ~DdsTypedSupplier() throw();

    Type const& event() const throw();
    Type& event() throw();
    void sendEvent() throw(Miro::Exception);
    void sendEvent(Type const& data, DDS::InstanceHandle_t const& handle = DDS_HANDLE_NIL) throw(Miro::Exception);
    virtual DataWriter& dataWriter() throw() {
      return dynamic_cast<DataWriter&>(*m_writer);
    }
    bool hasSubscribers();
  
  protected:
    /** hook to modify qos immediately before creation of DataWriter. Default implementation does nothing. */
    virtual void customizeQos(DDS::DataWriterQos& qos) {}

  private:
    //--------------------------------------------------------------------------
    // private methods
    //--------------------------------------------------------------------------
    void init(std::string const& topic,
              std::string const& publisher,
              std::string const& profile,
              std::string const& library,
              DDS::DataWriterListener* listener,
              DDS::StatusMask mask,
              std::string const& entityName);

    //--------------------------------------------------------------------------
    // private data
    //--------------------------------------------------------------------------

    DDS::Topic * m_topic;
    Type *       m_instance;
    
    DDS::InstanceHandleSeq m_subCheck;
  };

  /**
   * ctor
   */
  template<class T>
  DdsTypedSupplier<T>::DdsTypedSupplier(std::string const& topic,
                                          std::string const& publisher,
                                          std::string const& profile,
                                          std::string const& library,
                                          DDS::DataWriterListener* listener,
                                          DDS::StatusMask mask,
                                          std::string const& entityName) :
      m_topic(NULL),
      m_instance(NULL)
  {
    init(topic, publisher, profile, library, listener, mask, entityName);
  }

  /**
   * ctor
   */
  template<class T>
  DdsTypedSupplier<T>::DdsTypedSupplier(std::string const& topic,
                                        std::string const& publisher,
                                        std::string const& profile,
                                        std::string const& library,
                                        std::string const& entityName) :
      m_topic(NULL),
      m_instance(NULL)
  {
    init(topic, publisher, profile, library, NULL, DDS_STATUS_MASK_NONE, entityName);
  }

  /**
   * ctor
   */
  template<class T>
  DdsTypedSupplier<T>::DdsTypedSupplier(std::string const& topic,
                                        DdsLeafParameters const& params,
                                        std::string const& entityName) :
      m_topic(NULL),
      m_instance(NULL)
  {
    init(topic + params.topicSuffix, 
         params.parentNode,
         params.profile,
         params.library,
         NULL,
         DDS_STATUS_MASK_NONE,
         entityName);
  }

  /**
   * ctor implementation
   */
  template<class T>
  void
  DdsTypedSupplier<T>::init(std::string const& topic,
                             std::string const& publisher,
                             std::string const& profile,
                             std::string const& library,
                             DDS::DataWriterListener* listener,
                             DDS::StatusMask mask,
                             std::string const& entityName) 
  {
    std::string p = (publisher.empty()) ?
      Miro::RobotParameters::instance()->name : publisher;

    DdsPublisherRepository * repo = NULL;
    DDS::Publisher *         pub  = NULL;
    DDS::DomainParticipant * part = NULL;

    try {
      repo = DdsPublisherRepository::instance();
      pub = repo->get(p);
      part = pub->get_participant();
    }
    catch (Miro::Exception ex) {
      throw Miro::Exception(std::string("Error while fetching publisher for topic: ") + topic + " Caused by: " + ex.what());
    }

    m_topic = DdsSupport::getTopic<T>(part, topic); 

    /* To customize data writer Qos, use
       publisher->get_default_datawriter_qos() */

    char const * prof = profile.empty() ? NULL : profile.c_str();
    char const * lib = library.empty() ? NULL : library.c_str();

    DDS::DataWriter*   writer;
    DDS::DataWriterQos qos;
    if(prof) {
      DDS::DomainParticipantFactory* dpf = DDS::DomainParticipantFactory::get_instance();
      dpf->get_datawriter_qos_from_profile(qos, lib, prof);
    }
    else {
      pub->get_default_datawriter_qos(qos);
    } 
    if(!entityName.empty()) {
      if(entityName.length() < KNDDS_MAX_ENTITY_NAME_LENGTH)
        qos.publication_name.name = DDS_String_dup(entityName.c_str());
      else
        qos.publication_name.name = DDS_String_dup(entityName.substr(0,KNDDS_MAX_ENTITY_NAME_LENGTH).c_str());
    }
    customizeQos(qos);
    
    writer = pub->create_datawriter(m_topic,
                                    qos,
                                    listener,
                                    mask);
    
    if (writer == NULL) {
      throw Miro::Exception("create_datawriter error");
    }

    m_writer = DataWriter::narrow(writer);
    if (m_writer == NULL) {
      throw("DataWriter narrow error");
    }

    /* Create data sample for writing */
    m_instance = TypeSupport::create_data();
    if (m_instance == NULL) {
      throw("TypeSupport::create_data error");
    }
    
    // 0 max size InstanceHandleSeq used to check if we have subscribers
    m_subCheck.loan_contiguous((DDS::InstanceHandle_t*)NULL, 0, 0);
  }

  /**
   * dtor 
   */
  template<class T>
  DdsTypedSupplier<T>::~DdsTypedSupplier() throw()
  {
    /*
      rc = m_writer->unregister_instance(
        *m_instance, m_handle);
    if (rc != DDS::RETCODE_OK) {
        printf("unregister instance error %d\n", rc);
    }
    */

    DDS::Publisher * publisher = m_writer->get_publisher();
    publisher->delete_datawriter(m_writer);


    /* Delete data sample */
    DDS::ReturnCode_t rc = TypeSupport::delete_data(m_instance);
    if (rc != DDS::RETCODE_OK) {
      MIRO_LOG_OSTR(LL_ERROR, "DDS TypeSupport::delete_data error: " << DdsSupport::getError(rc));
    }

    DDS::DomainParticipant * participant = m_topic->get_participant();
    participant->delete_topic(m_topic);
  }


  /**
   * @returns reference to local data instance
   */
  template<class T>
  typename T::Type&
  DdsTypedSupplier<T>::event() throw()
  {
    return *m_instance;
  }

  /**
   * @returns const reference to local data instance
   */
  template<class T>
  typename T::Type const&
  DdsTypedSupplier<T>::event() const throw()
  {
    return *m_instance;
  }
  
  /**
   * fast check to see if there are any subscribers for this supplier's data
   */
  template<class T>
  bool
  DdsTypedSupplier<T>::hasSubscribers()
  {
    if(dataWriter().get_matched_subscriptions(m_subCheck) == DDS_RETCODE_OUT_OF_RESOURCES)
      return true;
    return false;
  }
  
  /**
   * publish passed-in data
   */ 
  template<class T>
  void
  DdsTypedSupplier<T>::sendEvent(Type const& data, DDS::InstanceHandle_t const& handle) throw(Miro::Exception)
  {
    DDS::ReturnCode_t rc = static_cast<DataWriter *>(m_writer)->write(data, handle);

    if (rc != DDS::RETCODE_OK) {
      throw Miro::Exception(std::string("write error: ") + DdsSupport::getError(rc));
    }
  }
  
  /**
   * publish local data instance
   */
  template<class T>
  void
  DdsTypedSupplier<T>::sendEvent() throw(Miro::Exception)
  {
    DDS::ReturnCode_t rc = static_cast<DataWriter *>(m_writer)->write(*m_instance, DDS_HANDLE_NIL);

    if (rc != DDS::RETCODE_OK) {
      throw Miro::Exception(std::string("write error: ") + DdsSupport::getError(rc));
    }
  }
} // namespace kn

#endif // knDds_DdsTypedSupplier_h
