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
#ifndef kn_Frame_h
#define kn_Frame_h

#include "knFrameStore_Export.h"
#include "knMath/ATrans.h"

#include <string>

namespace kn
{
  /**
   * @ingroup knFrameStore
   * @brief Class representing a named coordinate transform.
   *
   * This class is mostly used in combination with the @ref TreeNode
   * class to create a frame tree.
   */
  class knFrameStore_Export Frame
  {
  public:

    /**
     * @ingroup knFrameStore
     * @brief Base-class for appending custom information to a frame.
     * 
     * It implements a Java style top-level object with a virtual @ref clone(  method
     * that is implemented by descedent classes for copying.
     *
     */
    class Extras
    {
    public:
      //! Virtual destructor as this class has virtual methods.
      virtual ~Extras() {}
      //! OO copy-constructor.
      virtual Extras * clone() = 0;
    };

    /**
     * @brief Default constructor.
     */
    Frame() : m_extras(NULL) {}

    /**
     * @brief Initializing constructor.
     */
    Frame(std::string const& name, ATrans3 const& trans) :
      m_trans(trans),
      m_name(name),
      m_extras(NULL)
    {}

    /**
     * @brief Initializing constructor.
     * NOTE: MSVC2010 doesn't like Eigen types with default params, 
     * so we overload the ctor
     */
    Frame(std::string const& name) :
      m_name(name),
      m_extras(NULL)
    {
      m_trans.setIdentity();
    }

    /**
     * @brief Copy constructor.
     * 
     * Required as we need to take care of that extras pointer.
     */
    Frame(Frame const& rhs) :
      m_trans(rhs.m_trans),
      m_name(rhs.m_name),
      m_extras((rhs.m_extras == NULL)? NULL : rhs.m_extras->clone())
    {}

    /**
     * @brief Destructor
     * 
     * Releaseing any FrameExtras instance.
     */
    ~Frame() throw()
    {
      delete m_extras;
    }

    /**
     * @brief Assignement operator.
     * 
     * Required as we need to take care of that extras pointer.
     */
    Frame& operator = (Frame const& rhs) {
      if (&rhs != this) {
        m_name = rhs.m_name;
        m_trans = rhs.m_trans;
        delete m_extras;
        m_extras = (rhs.m_extras == NULL)? NULL : rhs.m_extras->clone();
      }
      return *this;
    }

    //! @{ 

    /** @brief Access name. */
    std::string const& name() const throw() {
      return m_name;
    }
    /** @brief Set name. */
    void set_name(std::string const& name) {
      m_name = name;
    }
    /** @brief Access transform. */
    ATrans3 const& transform() const throw() {
      return m_trans;
    }
    /** @brief Mutable access to transform. */
    ATrans3& transform() throw() {
      return m_trans;
    }
    /** @brief Set transform. */
    void setTransform(ATrans3 const& trans) {
      m_trans = trans;
    }

    /** @brief Access extras. */
    Extras * extras() const throw() {
      return m_extras;
    }

    /** @brief Set extras. */
    void setExtras(Extras * extras) {
      delete m_extras;
      m_extras = extras;
    }
    /// @}

    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
  protected:
    ATrans3 m_trans;
    std::string m_name;
    Extras * m_extras;
  };
}
#endif // kn_Frame_h
