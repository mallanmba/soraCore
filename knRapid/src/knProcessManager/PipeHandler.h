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
#ifndef kn_PipeHandler_h
#define kn_PipeHandler_h

#include <ace/Event_Handler.h>
#include <ace/Pipe.h>

#include <string>

namespace rapid
{
  namespace ext
  {
    class ProcessIoSample;
  }
}

namespace kn
{
  template<typename T>
  class DdsTypedSupplier;

  class PipeHandler : public ACE_Event_Handler
  {
  public:
    typedef kn::DdsTypedSupplier<rapid::ext::ProcessIoSample> IOPublisher;

    PipeHandler(ACE_Reactor * r,
                ACE_HANDLE file, 
                IOPublisher * ioPublisher,
                std::string const& match);
    virtual ~PipeHandler() throw();

    virtual ACE_HANDLE get_handle() const;
    virtual int handle_input(ACE_HANDLE fd);

    ACE_Pipe * get_pipe() { return &m_pipe; }
    bool matched() const throw() { return m_matched; }
    
    void sendLine();
    void addLine(std::string const& l);

  private:
    static int const BUFFER_SIZE = 0x3fff;
    
    ACE_Reactor * m_reactor;
    ACE_Pipe m_pipe;
    char m_buffer[BUFFER_SIZE + 1];
    ACE_HANDLE m_outputFile;
    IOPublisher * m_ioPublisher;

    std::string m_line;
    std::string m_match;
    bool m_matched;
  };
}
#endif // kn_PipeHandler_h
