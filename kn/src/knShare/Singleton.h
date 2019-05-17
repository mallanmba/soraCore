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
#ifndef kn_Singleton_h
#define kn_Singleton_h

#include "knShare_Export.h"

#include "SmartPtr.h"
#include "Mutex.h"

#ifdef ACE_SINGLETON_TEMPLATE_INSTANTIATE
#  define KN_SINGLETON_TEMPLATE_INSTANTIATE(SINGLETON_TYPE, CLASS, LOCK) \
     ACE_SINGLETON_TEMPLATE_INSTANTIATE(SINGLETON_TYPE, CLASS, LOCK)
#else
#define KN_SINGLETON_TEMPLATE_INSTANTIATE(SINGLETON_TYPE, CLASS, LOCK)
#endif

#ifdef ACE_SINGLETON_TEMPLATE_INSTANTIATION
#  define KN_SINGLETON_TEMPLATE_INSTANTIATION(T) \
     ACE_SINGLETON_TEMPLATE_INSTANTIATION(T)
#else
#  define KN_SINGLETON_TEMPLATE_INSTANTIATION(T)
#endif

/** @defgroup knShare Shared
 * 
 * This module contains a number of common utility classes.
 * Useful stuff that is not big enough to get its own module.
 */

namespace kn
{
  
  /** @ingroup knShare */
  class knShare_Export SingletonBase
  {
  protected:
    static mutex s_mutex;
  };


  /**
   * @ingroup knShare
   * @brief Templated implementation of the singleton pattern.
   *
   * This implements a heap allocated global variable
   * with a global helper method as a accessor method.
   *
   * Example code:
   *
   * To get a pseudo global variable for class T it looks the following.
   *
   * class T
   * {
   *   ...
   *   typef kn::Singleton<T> instance;
   * };
   *
   * Access:
   *
   * T * t = T::instance();
   *
   * There's a paper about the singleton pattern and
   * double checked locking on the ACE web pages.
   */
  template < class TYPE>
  class Singleton : public SingletonBase
  {
  public:
    //! Access operator to the global variable.
    TYPE * operator()();
    //! Maually delete the singleton.
    /** This should usually happen automatically.
     *  Just adding it here to keep some flexibility for bad compilers/linkers.
     */
    void close() {
      lock_guard<mutex> lock(s_mutex);
      s_instance.reset();
    }

  private:
    //! Singleton instance
    /** Scoped pointer makes sure we clean it up at the end.
     * Interestingly enough, this should alsow work out fine
     * with dynamic libraries.
     */
    static scoped_ptr<TYPE> s_instance;
  };

  //--------------------------------------------------------------------------
  // Inlined methods
  //--------------------------------------------------------------------------
  template <class TYPE>
  inline
  TYPE *
  Singleton<TYPE>::operator()()
  {
    if (!s_instance) {
      lock_guard<mutex> lock(s_mutex);
      if (!s_instance) {
        s_instance.reset(new TYPE());
      }
    }
    return s_instance.get();
  }

  template <class TYPE>
  scoped_ptr<TYPE> Singleton<TYPE>::s_instance;

}

#endif // kn_Singleton_h

