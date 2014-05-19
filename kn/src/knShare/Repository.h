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
#ifndef kn_Repository_h
#define kn_Repository_h

#include "knShare_Export.h"

#include "Singleton.h"
#include "Mutex.h"

#include <map>
#include <string>
#include <iostream>
#include <stdexcept>

#include <boost/signals2.hpp>

namespace kn
{
  // forward declarations
  template<class T>
  class Repository;

  //! Ostream operator for debug purposes.
  template<class T>
  std::ostream&
  operator << (std::ostream& ostr, Repository<T> const& repository);

  //! Repository of available instances of a type.
  /**
   * @author Hans Utz
   */
  template<class T>
  class Repository
  {
    //--------------------------------------------------------------------------
    // private types
    //--------------------------------------------------------------------------
    typedef Repository<T> Self;
    typedef lock_guard<mutex> Lock;

  public:
    //--------------------------------------------------------------------------
    // public types
    //--------------------------------------------------------------------------
    typedef T Type;
    //! Map of the added instances, sorted by name.
    typedef std::map<std::string, Type> InstanceMap;
    typedef kn::Singleton<Self> SingletonType;

    typedef boost::signals2::signal<void (const std::string&, const T&)> InstanceAddedSignal;
    typedef typename InstanceAddedSignal::slot_type                      InstanceAddedSlotType;
    typedef boost::signals2::signal<void (const std::string&)>           InstanceRemovedSignal;
    //--------------------------------------------------------------------------
    // public methods
    //--------------------------------------------------------------------------

    //! Empty the repository.
    void clear();
    //! Register an instance at the repository.
    void add(std::string const& name, Type const& type);
    //! Look up an instance by name.
    Type const& get(std::string const& name) const;
    //! Remove instance from the repository, deleting it.
    void remove(std::string const& name);

    //! Get read-only access to the whole repository.
    InstanceMap exportMap() const {
      Lock guard(m_mutex);
      return m_instances;
    }

    InstanceAddedSignal& instanceAddedSignal() {
      return m_signalInstanceAdded;
    }
    InstanceRemovedSignal& instanceRemovedSignal() {
      return m_signalInstanceRemoved;
    }

    /**
     * Fill contents of outMap with current repository contents and
     * connect subscriber to instanceAddedSignal
     */
    boost::signals2::connection connectInstanceAdded(InstanceMap& outMap,
                                                     const InstanceAddedSlotType& subscriber) {
      Lock guard(m_mutex);
      outMap = m_instances;
      return m_signalInstanceAdded.connect(subscriber);
    }

    //--------------------------------------------------------------------------
    // public data
    //--------------------------------------------------------------------------

    //! Accessor to the global instance of the Repository.
    static SingletonType instance;

  protected:
    //--------------------------------------------------------------------------
    // protected methods
    //--------------------------------------------------------------------------

    //! Dump the Repository to the specified output stream.
    void printToStream(std::ostream& ostr) const;

    //--------------------------------------------------------------------------
    // protected data
    //--------------------------------------------------------------------------
    mutable mutex m_mutex;

    //! Map to associate an instance name with an instance.
    InstanceMap m_instances;

    InstanceAddedSignal    m_signalInstanceAdded;
    InstanceRemovedSignal  m_signalInstanceRemoved;

  protected:
    //--------------------------------------------------------------------------
    // private/hidden methods
    //--------------------------------------------------------------------------

    //! There is only one Repository instance.
    Repository() {};
    //! Copy construction is prohibited
    Repository(const Repository<T>&) {}
    Repository& operator=(Repository const&) { return *this; }

    //--------------------------------------------------------------------------
    // friend declarations
    //--------------------------------------------------------------------------
    //! Grant ostream operator access to the map.
    friend std::ostream& operator << <T>(std::ostream&, const Self&);
    //! Allow Singleton to create a Repository
    friend class kn::Singleton<Self>;
  };


  /**
   * To get a pointer to the global Repository instance,
   * simply call Repository::instance();
   */
  // removing this for sake of windows stupidity:
  // please declare your own, unique instance of the repository singleton
  // or maybe it _is_ doing good. - at least it seems to work (tm)
  template<class T>
  typename Repository<T>::SingletonType Repository<T>::instance;

  /** Deletes all objects registered at the repository. */
  template<class T>
  void
  Repository<T>::clear()
  {
    Lock guard(m_mutex);
    m_instances.clear();
  }

  /** The repository takes ownership of the instance. */
  template<class T>
  void
  Repository<T>::add(std::string const& name, T const& instance)
  {
    {
      Lock guard(m_mutex);
      if (m_instances.find(name) == m_instances.end()) {
        m_instances.insert(std::make_pair(name, instance));
      }
      else {
        throw std::logic_error("Repository::add() failed: \"" + name + "\" already in repository");
      }
    }
    m_signalInstanceAdded(name, instance);
  }

  /**
   * @return Instance registered under the specified name.
   * @throw std::logic_error
   * if no instance is registered under the specified name.
   */
  template<class T>
  T const&
  Repository<T>::get(const std::string& name) const
  {
    Lock guard(m_mutex);
    typename InstanceMap::const_iterator i = m_instances.find(name);
    if (i != m_instances.end())
      return i->second;
    throw std::logic_error("Repository::get() failed: \"" + name + "\" not in Repository");
  }

  /**
   * @throw std::logic_error
   * if no instance is registered under the specified name.
   */
  template<class T>
  void
  Repository<T>::remove(const std::string& name)
  {
    {
      Lock guard(m_mutex);
      typename InstanceMap::iterator i = m_instances.find(name);
      if (i != m_instances.end()) {
        m_instances.erase(i);
      }
      else {
        throw std::logic_error("Repository::remove() failed: \"" + name + "\" not in repository");
      }
    }
    m_signalInstanceRemoved(name);
  }

  /**
   * Prints the names of all registered instances to the stream
   */
  template<class T>
  void
  Repository<T>::printToStream(std::ostream& ostr) const
  {
    Lock guard(m_mutex);
    typename InstanceMap::const_iterator first, last = m_instances.end();
    for (first = m_instances.begin(); first != last; ++first) {
      ostr << first->first << std::endl;
    }
  }

  template<class T>
  std::ostream&
  operator << (std::ostream& ostr, Repository<T> const& rhs)
  {
    rhs.printToStream(ostr);
    return ostr;
  }
}
#endif // kn_Repository_h
