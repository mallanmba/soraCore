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
#include "DdsEntityRepositories.h"
#include "DdsSupport.h"

#include "miro/Log.h"

namespace kn
{

  //--------------------------------------------------------------------------
  // Base class implementation
  //--------------------------------------------------------------------------

  /**
   * To get a pointer to the global Repository instance,
   * simply call Repository::instance();
   */
  // removing this for sake of windows stupidity:
  // please declare your own, unique instance of the repository singleton
  //  template<class T>
  //  Singleton<Repository<T> > Repository<T>::instance;

  DdsEntityRepository::DdsEntityRepository()
  {}

  DdsEntityRepository::~DdsEntityRepository() throw()
  {}

  /** The repository takes ownership of the instance. */
  void
  DdsEntityRepository::add(std::string const& _name, DDS::Entity * _instance)
  throw(EAlreadyRegistered)
  {
    if (instances_.find(_name) == instances_.end()) {
      instances_.insert(std::make_pair(_name, _instance));
      return;
    }
    throw EAlreadyRegistered(_name);
  }

  /**
   * @return Instance registered under the specified name.
   * @throw ENotRegistered
   * if no instance is registered under the specified name.
   */
  DDS::Entity *
  DdsEntityRepository::get(std::string const & _name) throw(ENotRegistered)
  {
    InstanceMap::const_iterator i = instances_.find(_name);
    if (i != instances_.end())
      return i->second;
    throw ENotRegistered("get failed, \""+_name+"\" not in repository");
  }

  /**
   * Prints the names of all registered instances to the stream
   */
  void
  DdsEntityRepository::printToStream(std::ostream& _ostr) const
  {
    InstanceMap::const_iterator first, last = instances_.end();
    for (first = instances_.begin(); first != last; ++first) {
      _ostr << first->first << std::endl;
    }
  }

  std::ostream&
  operator << (ostream& _ostr, DdsEntityRepository const& _repository)
  {
    _repository.printToStream(_ostr);
    return _ostr;
  }

  //----------------------------------------------------------------------
  // DDSDomain participant specialization
  //----------------------------------------------------------------------

  Miro::Singleton<DdsDomainParticipantRepository, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton >
  DdsDomainParticipantRepository::instance =
              Miro::Singleton<DdsDomainParticipantRepository, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton >();

  DdsDomainParticipantRepository::DdsDomainParticipantRepository()
  {}

  // specializations
  DdsDomainParticipantRepository::~DdsDomainParticipantRepository() throw()
  {
    MIRO_LOG_DTOR("DdsDomainParticipantRepository");

    DDS::DomainParticipantFactory * dpf =
      DDS::DomainParticipantFactory::get_instance();
    // just to make sure, the repository should actually be empty at this point.
    InstanceMap::iterator first, last = instances_.end();
    for (first = instances_.begin(); first != last; ++first) {
      DDS::DomainParticipant * p = dynamic_cast<DDS::DomainParticipant *>(first->second);
      DDS::ReturnCode_t rc = p->delete_contained_entities();
      if (rc != DDS::RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting contained entities: " << DdsSupport::getError(rc));
      }

      rc = dpf->delete_participant(dynamic_cast<DDS::DomainParticipant *>(p));
      if (rc != DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting DDS domain particpant: " << DdsSupport::getError(rc));
      }
    }
  }

  DDS::DomainParticipant *
  DdsDomainParticipantRepository::get(std::string const& name) throw(ENotRegistered) {
    return dynamic_cast<DDS::DomainParticipant *>(this->Super::get(name));
  }
  
  void
  DdsDomainParticipantRepository::remove(std::string const& name)
  throw(ENotRegistered)
  {
    DDS::DomainParticipantFactory * dpf =
      DDS::DomainParticipantFactory::get_instance();
    InstanceMap::iterator i = instances_.find(name);
    if (i != instances_.end()) {
      DDS::DomainParticipant * p = dynamic_cast<DDS::DomainParticipant *>(i->second);
      DDS::ReturnCode_t rc = p->delete_contained_entities();
      if (rc != DDS::RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting contained entities: " << DdsSupport::getError(rc));
      }

      rc = dpf->delete_participant(p);
      if (rc != DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting DDS domain particpant: " << DdsSupport::getError(rc));
      }
      instances_.erase(i);
      if (instances_.size() == 0)
        SingletonType::ACE_Singleton_Type::close();
      return;
    }
    throw ENotRegistered(name);
  }

  //----------------------------------------------------------------------
  // DDS Publisher specialization
  //----------------------------------------------------------------------

  Miro::Singleton<DdsPublisherRepository, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton >
  DdsPublisherRepository::instance =
    Miro::Singleton<DdsPublisherRepository, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton >();


  DdsPublisherRepository::DdsPublisherRepository()
  {}

  DdsPublisherRepository::~DdsPublisherRepository() throw()
  {
    // just to make sure, the repository should actually be empty at this point.
    InstanceMap::iterator first, last = instances_.end();
    for (first = instances_.begin(); first != last; ++first) {
      //      delete first->second;
      DDS::Publisher * pub = dynamic_cast<DDS::Publisher *>(first->second);
      DDS::DomainParticipant * participant = pub->get_participant();
      DDS::ReturnCode_t rc = participant->delete_publisher(pub);

      if (rc != DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting DDS publisher: " << DdsSupport::getError(rc));
      }
    }
  }

  DDS::Publisher *
  DdsPublisherRepository::get(std::string const& name) throw(ENotRegistered) {
    return dynamic_cast<DDS::Publisher *>(this->Super::get(name));
  }
  
  void
  DdsPublisherRepository::remove(std::string const& name)
  throw(ENotRegistered)
  {
    InstanceMap::iterator i = instances_.find(name);
    if (i != instances_.end()) {
      //delete i->second;
      DDS::Publisher * pub =  dynamic_cast<DDS::Publisher *>(i->second);
      DDS::DomainParticipant * participant = pub->get_participant();
      DDS::ReturnCode_t rc = participant->delete_publisher(pub);

      if (rc != DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting DDS publisher: " << DdsSupport::getError(rc));
      }

      instances_.erase(i);
      if (instances_.size() == 0)
        SingletonType::ACE_Singleton_Type::close();
      return;
    }
    throw ENotRegistered(name);
  }

  //----------------------------------------------------------------------
  // DDS Subscriber specialization
  //----------------------------------------------------------------------

  Miro::Singleton<DdsSubscriberRepository, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton >
  DdsSubscriberRepository::instance =
               Miro::Singleton<DdsSubscriberRepository, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton >();


  DdsSubscriberRepository::DdsSubscriberRepository()
  {}

  DdsSubscriberRepository::~DdsSubscriberRepository() throw()
  {
    // just to make sure, the repository should actually be empty at this point.
    InstanceMap::iterator first, last = instances_.end();
    for (first = instances_.begin(); first != last; ++first) {
      //      delete first->second;
      DDS::Subscriber * sub = dynamic_cast<DDS::Subscriber *>(first->second);
      DDS::DomainParticipant * participant = sub->get_participant();
      DDS::ReturnCode_t rc = participant->delete_subscriber(sub);

      if (rc != DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting DDS subscriber: " << DdsSupport::getError(rc));
      }
    }
    instances_.clear();
  }

  DDS::Subscriber *
  DdsSubscriberRepository::get(std::string const& name) throw(ENotRegistered) {
    return dynamic_cast<DDS::Subscriber *>(this->Super::get(name));
  }
  
  void
  DdsSubscriberRepository::remove(std::string const& name)
  throw(ENotRegistered)
  {
    InstanceMap::iterator i = instances_.find(name);
    if (i != instances_.end()) {
      //delete i->second;
      DDS::Subscriber * sub = dynamic_cast<DDS::Subscriber *>(i->second);
      DDS::DomainParticipant * participant = sub->get_participant();
      DDS::ReturnCode_t rc = participant->delete_subscriber(sub);

      if (rc != DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_ERROR, "Error deleting DDS subscriber: " << DdsSupport::getError(rc));
      }

      instances_.erase(i);
      if (instances_.size() == 0)
        SingletonType::ACE_Singleton_Type::close();
      return;
    }
    throw ENotRegistered(name);
  }
}
