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
#include "DdsEventLoop.h"
#include "DdsEventHandler.h"

#include "miro/Log.h"
#include "miro/Exception.h"

#include <ace/Time_Value.h>
#include <ace/OS_NS_sys_time.h>

#include <utility>

namespace kn
{
  using namespace std;

  DdsEventLoop::~DdsEventLoop() throw()
  {
    // get rid of all owned handlers
    {
      EventHandlerVector::const_iterator first, last = m_ownedHandlers.end();
      for (first = m_ownedHandlers.begin(); first != last; ++first) {
        delete *first;
      }
    }
    // get rid of all owned receivers
    {
      ReceiverVector::const_iterator first, last = m_ownedReceivers.end();
      for (first = m_ownedReceivers.begin(); first != last; ++first) {
        delete *first;
      }
    }
  }

  void
  DdsEventLoop::addEventHandler(DdsEventHandlerBase * handler)
  {
    DDS::ReturnCode_t retcode;
    if (m_eventHandlers.insert(make_pair(handler->condition(), handler)).second == true) {
      retcode = m_waitSet.attach_condition(handler->condition());
      if (retcode != DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_CRITICAL, "attach_condition error: " << DdsSupport::getError(retcode));
      }    
    }
    else {
      throw Miro::Exception();
    }
  }

  ACE_Time_Value
  DdsEventLoop::processEvents(ACE_Time_Value const& maxSlice)
  {
    ACE_Time_Value before = ACE_OS::gettimeofday();

    DDS::ReturnCode_t retcode;
    DDS::Duration_t timeout;
    timeout.sec = maxSlice.sec();
    timeout.nanosec = maxSlice.usec() * 1000;
    DDS::ConditionSeq activeConditions; 

    retcode = m_waitSet.wait(activeConditions, timeout);
          
    if (retcode == DDS_RETCODE_OK) {
      for (int i = 0; i < activeConditions.length(); ++i) { // conditions
        
        EventHandlerMap::const_iterator handler = m_eventHandlers.find(activeConditions[i]);

        assert(handler != m_eventHandlers.end());
        handler->second->processEvents();
      }
    }
    else if (retcode != DDS_RETCODE_TIMEOUT) {
      MIRO_LOG_OSTR(LL_ERROR, "DdsEventLoop wait returned error: " << DdsSupport::getError(retcode));
      throw Miro::Exception(); // todo
    }

    ACE_Time_Value after =  ACE_OS::gettimeofday();
    ACE_Time_Value elapsed = after - before;
    return (elapsed < maxSlice)? maxSlice - elapsed : ACE_Time_Value::zero;
  }

}
