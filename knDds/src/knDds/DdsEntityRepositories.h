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
#ifndef knDds_DdsEntityRepositories_h
#define knDds_DdsEntityRepositories_h

#include "knDds_Export.h"

#include "miro/Repository.h"

#include <ndds/ndds_namespace_cpp.h>

namespace kn
{
  //! Base class for repositories of DDS entities.
  /**
   * The DdsEntitiesFactorySvc creates a static set of
   * DomainParticipant, Publishers and Subscriber instances.
   * Those are stored in repositories for lookup by name.
   *
   * As C++ symbol resolution for global instances with template patameters is a mess
   * we copy/paste implement those repositories here, instead of using
   * partial template specialization on the Miro::Repository template.
   */
  class knDds_Export DdsEntityRepository : public Miro::RepositoryBase
  {
    //--------------------------------------------------------------------------
    // private types
    //--------------------------------------------------------------------------
    typedef Miro::RepositoryBase Super;

  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------
    typedef DDS::Entity Type;
    //! Map of the added instances, sorted by name.
    typedef std::map<std::string, DDS::Entity *> InstanceMap;

    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------

    //! Clean up the repository.
    virtual ~DdsEntityRepository() throw();

    //! Register an instance at the repository.
    virtual void add(std::string const& name, DDS::Entity * type);// throw(EAlreadyRegistered);
    //! Look up an instance by name.
    virtual Type * get(std::string const& name);// throw(ENotRegistered);
    //! Remove instance from the repository, deleting it.
    virtual void remove(std::string const& name) = 0;// throw(ENotRegistered) = 0;
    //! Get read-only access to the whole repository.
    InstanceMap const& getMap() const throw() {
      return instances_;
    }

  protected:
    //--------------------------------------------------------------------------
    // protected methods
    //--------------------------------------------------------------------------

    //! Dump the Repository to the specified output stream.
    virtual void printToStream(std::ostream& ostr) const;

    //--------------------------------------------------------------------------
    // protected data
    //--------------------------------------------------------------------------

    //! Map to associate an instance name with an instance.
    InstanceMap instances_;

  protected:
    //--------------------------------------------------------------------------
    // protected/hidden methods
    //--------------------------------------------------------------------------

    //! There is only one Repository instance.
    DdsEntityRepository();
    //! Copy construction is prohibited
    DdsEntityRepository(const DdsEntityRepository&) throw() {}
    DdsEntityRepository& operator=(DdsEntityRepository const&) throw() { return *this; }

    //--------------------------------------------------------------------------
    // friend declarations
    //--------------------------------------------------------------------------
    //! Grant ostream operator access to the map.
    friend std::ostream& operator << (std::ostream&, DdsEntityRepository const&);
    //! Allow Singleton to create a Repository
  };

  //! Repository for names instances of DDS DomainParticipant objects.
  class knDds_Export DdsDomainParticipantRepository : public DdsEntityRepository
  {
    //--------------------------------------------------------------------------
    // private types
    //--------------------------------------------------------------------------
    typedef DdsDomainParticipantRepository Self;
    typedef DdsEntityRepository Super;

  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------
    typedef DDS::DomainParticipant Type;
    typedef Miro::Singleton<Self, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton> SingletonType;

    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------

    //! Clean up the repository.
    virtual ~DdsDomainParticipantRepository() throw();

    //! Look up an instance by name.
    virtual Type * get(std::string const& name = "Default");// throw(ENotRegistered);
    //! Remove instance from the repository, deleting it.
    virtual void remove(std::string const& name);// throw(ENotRegistered);

    //! Singleton instance accessor wrapper.
    static SingletonType instance;


    // this should be private, but somehow gcc is not accepting the friend declaration
    // private:
    //! There is only one Repository instance.
    DdsDomainParticipantRepository();
    // Singleton needs access rights to ctor
    friend class ACE_Unmanaged_Singleton<DdsDomainParticipantRepository, ACE_Recursive_Thread_Mutex>;
  };

  //! Repository for names instances of DDS Publisher objects.
  class knDds_Export DdsPublisherRepository : public DdsEntityRepository
  {
    //--------------------------------------------------------------------------
    // private types
    //--------------------------------------------------------------------------
    typedef DdsPublisherRepository Self;
    typedef DdsEntityRepository Super;

  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------
    typedef DDS::Publisher Type;
    typedef Miro::Singleton<Self, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton> SingletonType;

    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------

    //! Clean up the repository.
    virtual ~DdsPublisherRepository() throw();

    //! Look up an instance by name.
    virtual Type * get(std::string const& name);// throw(ENotRegistered);
    //! Remove instance from the repository, deleting it.
    virtual void remove(std::string const& name);// throw(ENotRegistered);

    //! Singleton instance accessor wrapper.
    static SingletonType instance;

    // this should be private, but somehow gcc is not accepting the friend declaration
    // private:
    //! There is only one Repository instance.
    DdsPublisherRepository();
    // Singleton needs access rights to ctor
    friend class ACE_Unmanaged_Singleton<Self, ACE_Recursive_Thread_Mutex>;
  };

  //! Repository for names instances of DDS Subscriber objects.
  class knDds_Export DdsSubscriberRepository : public DdsEntityRepository
  {
    //--------------------------------------------------------------------------
    // private types
    //--------------------------------------------------------------------------
    typedef DdsSubscriberRepository Self;
    typedef DdsEntityRepository Super;

  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------
    typedef DDS::Subscriber Type;
    typedef Miro::Singleton<Self, ACE_Recursive_Thread_Mutex, ACE_Unmanaged_Singleton> SingletonType;

    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------

    //! Clean up the repository.
    virtual ~DdsSubscriberRepository() throw();

    //! Look up an instance by name.
    virtual Type * get(std::string const& name);// throw(ENotRegistered);
    //! Remove instance from the repository, deleting it.
    virtual void remove(std::string const& name);// throw(ENotRegistered);

    //! Singleton instance accessor wrapper.
    static SingletonType instance;

    // this should be private, but somehow gcc is not accepting the friend declaration
    // private:
    //! There is only one Repository instance.
    DdsSubscriberRepository();
    // Singleton needs access rights to ctor
    friend class ACE_Unmanaged_Singleton<Self, ACE_Recursive_Thread_Mutex>;
  };

  typedef
  ACE_Unmanaged_Singleton<DdsDomainParticipantRepository, ACE_SYNCH_RECURSIVE_MUTEX>
  DdsDomainParticipantRepositorySingleton;
  typedef
  ACE_Unmanaged_Singleton<DdsPublisherRepository, ACE_SYNCH_RECURSIVE_MUTEX>
  DdsPublisherRepositorySingleton;
  typedef
  ACE_Unmanaged_Singleton<DdsSubscriberRepository, ACE_SYNCH_RECURSIVE_MUTEX>
  DdsSubscriberRepositorySingleton;

}

KNDDS_SINGLETON_DECLARE(ACE_Unmanaged_Singleton, kn::DdsDomainParticipantRepository, ACE_SYNCH_RECURSIVE_MUTEX);
KNDDS_SINGLETON_DECLARE(ACE_Unmanaged_Singleton, kn::DdsPublisherRepository, ACE_SYNCH_RECURSIVE_MUTEX);
KNDDS_SINGLETON_DECLARE(ACE_Unmanaged_Singleton, kn::DdsSubscriberRepository, ACE_SYNCH_RECURSIVE_MUTEX);

#endif // knDds_DdsEntityRepository_h
