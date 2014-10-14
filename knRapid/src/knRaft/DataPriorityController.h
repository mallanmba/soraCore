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
#ifndef kn_DataPriorityController_h
#define kn_DataPriorityController_h

#include <ace/Basic_Types.h>
#include <ace/OS_NS_ctype.h>

#include <string>
#include <vector>

namespace rapid
{
  class FileAnnounce;
}

namespace kn
{
  class FileQueue;
  class FileQueueParameters;

  class DataPriorityController
  {
  public:
    DataPriorityController(FileQueue& queue, FileQueueParameters const *params);

    // called when a new file is available
    void operator() (rapid::FileAnnounce const * announcement);

  private:
    struct Rule {
      std::string m_extension;
      ACE_INT16 m_channel;
      float m_priority;
      bool m_autoAdd;

      Rule() {}
      Rule(std::string const& extension,
           ACE_INT16 channel, float priority, bool autoAdd=true)
        : m_extension(extension),
          m_channel(channel),
          m_priority(priority),
          m_autoAdd(autoAdd)
      { }

    };

    typedef std::vector<Rule> RuleVector;

    Rule const& findRule(std::string const& fileName);

    RuleVector m_rules;
    Rule m_defaultRule;

    FileQueue &m_queue;
    FileQueueParameters const* m_queueParams;
  };

}

#endif // kn_DataPriorityController_h
