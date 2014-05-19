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
#include "CommandAckPair.h"
#include "rapidIo/RapidIoParameters.h"

#include "rapidUtil/RapidHelper.h"

#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsEventLoop.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/Command.h"
#include "rapidDds/CommandSupport.h"
#include "rapidDds/Ack.h"
#include "rapidDds/AckSupport.h"

#include <sstream>

namespace rapid
{
  using namespace std;
  using namespace kn;

  CommandAckPair::CommandAckPair(CommandAckPairParameters const& params, std::string const& entityName) :
    m_params(params),
    m_commandSupplier(new CommandSupplier(COMMAND_TOPIC + m_params.topicSuffix,
                                          m_params.parentNode,
                                          m_params.commandProfile,
                                          m_params.library,
                                          entityName)),
    m_command(m_commandSupplier->event()),
    m_arguments(m_command.arguments)
  {
    RapidHelper::initHeader(m_command.hdr);
  }

  CommandAckPair::~CommandAckPair() throw()
  {
  }

  void
  CommandAckPair::connect(kn::DdsEventLoop& eventLoop)
  {
    eventLoop.connect<rapid::Ack>(this,
                                  rapid::ACK_TOPIC +
                                  m_params.topicSuffix,
                                  m_params.parentNode,
                                  m_params.ackProfile,
                                  m_params.library);
  }

  void CommandAckPair::operator() (rapid::Ack const * ack)
  {
    assert(ack != NULL);

    kn::unique_lock<kn::mutex> guard(m_mutex);
    if (strcmp(m_command.cmdId, ack->cmdId) == 0) {
      m_status = ack->status;
      m_completedStatus = ack->completedStatus;

      m_condition.notify_all();
    }
  }

  rapid::AckCompletedStatus
  CommandAckPair::waitForCompletion(kn::TimePoint const& deadline) 
  {
    kn::unique_lock<kn::mutex> guard(m_mutex);
    while (m_completedStatus == rapid::ACK_COMPLETED_NOT) {
      if (kn::Clock::now() > deadline) {
        boost::throw_exception(std::runtime_error("Timeout"));
      }
      m_condition.wait_until(guard, deadline);
    }

    return m_completedStatus;
  }
  

  void
  CommandAckPair::setCmdSrc(std::string const& src)
  {
    assert(src.length() < 32);
    m_cmdSrc = src;
    strcpy(m_command.hdr.srcName, src.c_str());
    strcpy(m_command.cmdSrc, src.c_str());
  }

  void
  CommandAckPair::setCmdName(std::string const& name)
  {
    assert(name.length() < 64);
    m_cmdName = name;
    strcpy(m_command.cmdName, name.c_str());
  }

  void
  CommandAckPair::setSubsysName(std::string const& subsys)
  {
    assert(subsys.length() < 32);
    m_subsysName = subsys;
    strcpy(m_command.subsysName, subsys.c_str());
  }

  void
  CommandAckPair::setArguments(ParameterSequence16 const& args) 
  {
    m_command.arguments = args;
  }
  
  std::string
  CommandAckPair::invokeCmd(QueueAction action, std::string const& targetCmdId)
  {
    RapidHelper::updateHeader(m_command.hdr);


    stringstream id;
    id << m_cmdSrc << ACE_OS::gettimeofday();

    {
      kn::unique_lock<kn::mutex> guard(m_mutex);
      strcpy(m_command.cmdId, id.str().c_str());
      m_command.cmdAction = action;
      strncpy(m_command.targetCmdId, targetCmdId.c_str(), 63);
      m_command.targetCmdId[63] = 0;

      m_status = rapid::ACK_QUEUED;
      m_completedStatus = rapid::ACK_COMPLETED_NOT;
    }
    m_commandSupplier->sendEvent();

    return id.str();
  }

}
