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
#include "PipeHandler.h"


#include "rapidExtDds/ProcessIoSample.h"
#include "rapidExtDds/ProcessIoSampleSupport.h"
#include "rapidUtil/RapidHelper.h"

#include "knDds/DdsTypedSupplier.h"
#include "miro/Log.h"

#include <ace/Reactor.h>

namespace kn
{
  using namespace std;
  using namespace rapid;

  PipeHandler::PipeHandler(ACE_Reactor * r,
                           ACE_HANDLE file, 
                           IOPublisher * ioPublisher,
                           string const& match) :
    m_reactor(r),
    m_outputFile(file),
    m_ioPublisher(ioPublisher),
    m_match(match),
    m_matched(false)
  {
    m_pipe.open(0xffff);
    
    m_reactor->register_handler(this,  ::ACE_Event_Handler::READ_MASK);
  }
  
  PipeHandler::~PipeHandler() throw()
  {
    m_reactor->remove_handler(this, ::ACE_Event_Handler::READ_MASK);
    m_pipe.close();
  }
  
  ACE_HANDLE 
  PipeHandler::get_handle() const
  {
    return m_pipe.read_handle();
  }
  
  int 
  PipeHandler::handle_input(ACE_HANDLE fd)
  {
    // read input
    int bytes = ACE_OS::read(fd, m_buffer, BUFFER_SIZE);
    
    // error handling
    if (bytes == 0) {
      MIRO_LOG(LL_ERROR, "PipeHandler::handle_input() - Handle closed.");
      return -1;
    }
    
    if (bytes == -1) {
      MIRO_LOG_OSTR(LL_ERROR, "PipeHandler::handle_input() - Read error : " << errno);
      return -1;
    }
    
    // ensure NULL-termination
    m_buffer[bytes] = 0;
    
    // write to output file
    ACE_OS::write(m_outputFile, m_buffer, bytes);
    
    // send as event
    char const * s = m_buffer;
    for (int i = 0; i < bytes; ++i) {
      if (m_buffer[i] == '\n' || i == (bytes - 1)) {
        string l(s, min(1024, (int)(&m_buffer[i] - s)+1 ));
        s = &m_buffer[i] + 1;
        
        m_line.append(l);
        
        if (m_line[m_line.length() - 1] == '\n') {
          if (!m_match.empty()) {
            if (m_line.find(m_match) != string::npos) {
              m_matched = true;
            }
          }
          
          sendLine();
        }    
      }
    }

    return 0;
  }

  void
  PipeHandler::addLine(string const& l) 
  {
    m_line = l;
    ACE_OS::write(m_outputFile, m_line.c_str(), m_line.length());
    sendLine();
  }
  
  void
  PipeHandler::sendLine()
  {
    RapidHelper::updateHeader(m_ioPublisher->event().hdr);
    char const * line = m_line.c_str();
    while (strlen(line)> 0) {
      strncpy(m_ioPublisher->event().line, line, 1023);
      m_ioPublisher->event().line[1023] = 0;
      ++m_ioPublisher->event().lineNumber;
      m_ioPublisher->sendEvent();
    
      if (strlen(line) < 1024) {
        break;
      }
      line += 1023;
    }
    m_line.clear();
  }
}
