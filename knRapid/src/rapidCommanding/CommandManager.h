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
#ifndef rapid_CommandManager_h
#define rapid_CommandManager_h

#include "rapidCommanding_Export.h"
#include "SubsysImpl.h"
#include "RapidSubsystemRepository.h"

#include "ace/Task.h"

#include "knShare/SmartPtr.h"
#include <boost/thread.hpp>

#include <string>

namespace rapid
{
  class Command;
  class Ack;
  class CommandConfig;

  class AccessControlSubsysImpl;
  class QueueSubsysImpl;

  class CommandManagerParameters;

  class rapidCommanding_Export CommandManager : public ACE_Task_Base
  {
  public:
    CommandManager(CommandManagerParameters const * params, const std::string& entityName);
    ~CommandManager() throw();

    void addSubsystem(RapidSubsystemPtr const& subsystem);
    void exportCommandConfig(rapid::CommandConfig& config) const;

    void operator() (rapid::Command const * task);
    //    void operator() (rapid::Ack const& task);

    /** checks executing async (QUEUE_BYPASS) commands */
    void processPendingCommands();

    //! Thread for dds message processing
    //! @TODO: add maintenance task to loop
    virtual int svc();

  protected:
    std::string m_entityName;

    typedef boost::unique_future<void> Future;
    typedef kn::shared_ptr<Future> FuturePtr;
    typedef kn::shared_ptr<rapid::Ack> AckPtr;
    typedef kn::shared_ptr<rapid::Command> CommandPtr;
    typedef kn::shared_ptr<AccessControlSubsysImpl> AccessControlImplPtr;
    typedef kn::shared_ptr<QueueSubsysImpl>         QueueSubsysImplPtr;

    struct PendingCommand
    {
      FuturePtr result;
      AckPtr ack;

      PendingCommand();
      PendingCommand(FuturePtr const& r, AckPtr const& a);
    };

    typedef std::map<std::string, RapidSubsystemPtr> SubsystemMap;
    typedef std::vector<PendingCommand> PendingCommandVector;

    void sendAck(AckPtr const& ack);

    CommandManagerParameters const * m_params;

    SubsystemMap m_subsystemTypeInstances;
    SubsystemMap m_subsystems;

    AccessControlImplPtr m_accessControl;
    QueueSubsysImplPtr   m_queue;

    PendingCommandVector m_commandVector;
  };
}
#endif // rapid_CommandManager_h
