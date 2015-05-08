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
#include "DataPriorityController.h"
#include "FileQueue.h"
#include "RaftParameters.h"

#include "rapidDds/FileAnnounce.h"
#include "rapidDds/FileAnnounceSupport.h"

#include "miro/Log.h"

#include <string>
#include <algorithm>

namespace kn
{

  DataPriorityController::DataPriorityController(FileQueue& queue, FileQueueParameters const* params)
    : m_rules(params->rules.size()),
      m_defaultRule(DataPriorityController::Rule("*", 0, 0, false)),
      m_queue(queue),
      m_queueParams(params)
  {

    for (unsigned int i = 0; i < m_queueParams->rules.size(); ++i) {
      // look for a channel with a matching name
      int channelIdx = -1;
      for (unsigned int j = 0; j < m_queueParams->channels.size(); ++j) {
        if (params->channels[j].name == params->rules[i].channelName) {
          channelIdx = j;
          break;
        }
      }

      if (channelIdx == -1) {
        MIRO_LOG_OSTR(LL_ERROR, "DPC: channel name: "
                      << m_queueParams->rules[i].channelName
                      << " does not exist. skipping rule.");
      }
      else {
        Rule newRule(m_queueParams->rules[i].extension,
                     channelIdx,
                     m_queueParams->rules[i].priority,
                     m_queueParams->rules[i].autoAdd);
        if (m_queueParams->rules[i].extension == "*") {
          m_defaultRule = newRule;
        }
        else {
          m_rules.push_back(newRule);
        }
      }
    }

  }

  // file announce callback
  void
  DataPriorityController::operator() (rapid::FileAnnounce const * announcement)
  {
    MIRO_LOG(LL_DEBUG, "DPC: Received Fileannonuce");

    const Rule &rule = findRule(announcement->fileLocator);
    if (!rule.m_autoAdd) {
      MIRO_LOG_OSTR(LL_DEBUG, "DPC: Not an auto-add file: '" << rule.m_extension << "'"
                    << " - " << announcement->fileLocator);
      return;
    }

    MIRO_LOG(LL_DEBUG, "DPC: adding file to queue");

    int retval = m_queue.putFile(announcement->fileUuid, rule.m_channel, rule.m_priority);
    if (retval != 0) {
      MIRO_LOG_OSTR(LL_ERROR, "DPC: Error putting file in queue: " << retval);
    }
  }

  // find the corresponding rule for the given filename/uri
  // @TODO: This will not work for remote urls that end in .php or some other
  // cgi-based thing.
  DataPriorityController::Rule const&
  DataPriorityController::findRule(std::string const& fileName)
  {
    std::string extension(fileName);

    // pull off extension (everything after a .)
    std::size_t pos = fileName.rfind('.');
    if (pos != std::string::npos) {
      extension = fileName.substr(pos + 1);
    }

    // convert to lowercase
    std::transform(extension.begin(), extension.end(), extension.begin(), ACE_OS::ace_tolower);

    // find extension in rules
    for(RuleVector::iterator i = m_rules.begin();
        i != m_rules.end();
        ++i) {
      if (i->m_extension == extension)
        return (*i);
    }

    // not found. return the defaultRule
    return m_defaultRule;

  }
}
