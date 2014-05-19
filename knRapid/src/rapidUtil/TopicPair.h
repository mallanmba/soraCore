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
#ifndef kn_TopicPair_h
#define kn_TopicPair_h

#include "rapidUtil_Export.h"

#include <string>

namespace rapid
{
  /**
   * TopicPair
   */
  class rapidUtil_Export TopicPair
  {
  public:
    TopicPair()
    {}
    TopicPair(std::string const& c,
              std::string const& d) :
      m_configTopic(c),
      m_dataTopic(d)
    {}
    virtual ~TopicPair();
    
    /** access Config object */
    std::string const& configTopic() const { return m_configTopic; }
    /** access Sample or State object */
    std::string const& dataTopic() const { return m_dataTopic; }

  protected:
    std::string m_configTopic;
    std::string m_dataTopic;
  };
}

#endif // kn_TopicPair_h
