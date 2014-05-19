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
#ifndef kn_CommandAckPair_h
#define kn_CommandAckPair_h

#include "rapidIo_Export.h"

#include "rapidDds/BaseTypes.h"
#include "rapidDds/Command.h"
#include "rapidDds/Ack.h"

#include "knShare/Time.h"
#include "knShare/SmartPtr.h"
#include "knShare/Thread.h"
#include "knShare/Mutex.h"
#include "knShare/ConditionVariable.h"

#include <string>

namespace kn
{
  template<class T>
  class DdsTypedSupplier;
  class DdsEventLoop;
}

namespace rapid
{
  class Command;
  class Ack;
  class CommandAckPairParameters;

  class rapidIo_Export CommandAckPair
  {
  public:
    CommandAckPair(CommandAckPairParameters const& params, std::string const& entityName);
    ~CommandAckPair() throw();

    CommandAckPairParameters const& parameters() const { return m_params; }
    std::string const& cmdSrc() const { return m_cmdSrc; }
    std::string const& subsysName() const { return m_subsysName; }
    std::string const& cmdName() const { return m_cmdName; }
    void setCmdSrc(std::string const& src);
    void setSubsysName(std::string const& subsys);
    void setCmdName(std::string const& name);
    
    rapid::ParameterSequence16 const& arguments() const { return m_arguments; }
    void setArguments(rapid::ParameterSequence16 const& args);

    std::string invokeCmd(rapid::QueueAction action = rapid::QUEUE_BYPASS, std::string const& targetCmdId = "");
    
    void connect(kn::DdsEventLoop& eventLoop);

    void operator() (rapid::Ack const * ack);

    rapid::AckStatus ackStatus() const { return m_status; }
    rapid::AckCompletedStatus waitForCompletion(kn::TimePoint const& deadline);

  protected:
    typedef kn::DdsTypedSupplier<rapid::Command> CommandSupplier;
    typedef kn::shared_ptr<CommandSupplier> CommandSupplierPtr;

    CommandAckPairParameters const& m_params;                           
    CommandSupplierPtr m_commandSupplier;
    rapid::Command& m_command;
    rapid::ParameterSequence16& m_arguments;
    
    std::string m_cmdSrc;
    std::string m_subsysName;
    std::string m_cmdName;

    kn::mutex m_mutex;
    kn::condition_variable m_condition;

    rapid::AckStatus m_status;
    rapid::AckCompletedStatus m_completedStatus;
  };
}
#endif
