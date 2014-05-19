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
#ifndef rapid_QueueImpl_h
#define rapid_QueueImpl_h

#include "rapidCommanding_Export.h"
#include "CommandImpl.h"
#include "MacroManager.h"

#include "rapidDds/QueueState.h"
#include "rapidDds/QueueStateSupport.h"
#include "rapidDds/Command.h"
#include "rapidDds/CommandSupport.h"
#include "rapidDds/Ack.h"
#include "rapidDds/AckSupport.h"

#include "knDds/DdsTypedSupplier.h"

#include "knShare/SmartPtr.h"

#include <map>
#include <string>
#include <vector>

namespace rapid
{
  class SingleQueue;
  class CommandRecord;
  class Ack;
  class QueueImplParameters;
  class AccessControlImpl;
  
  // when command is appended to queue, the queue sets the targetCmdId to the cmdId of the tail of the queue

  class rapidCommanding_Export QueueImpl : public CommandImpl
  {
  public:
    typedef kn::shared_ptr<rapid::Command> CommandPtr;
    typedef kn::shared_ptr<rapid::Ack> AckPtr;
    struct CmdAckPair
    {
      CommandPtr cmd;
      AckPtr ack;

      CmdAckPair(); 
      CmdAckPair(CmdAckPair const& ca);
      explicit CmdAckPair(CommandPtr const& c);
    };

    typedef std::map<std::string, CmdAckPair> CommandMap; // commands currently known to queue
    typedef std::vector<CmdAckPair> CommandAckVector;
    typedef std::vector<AckPtr> AckVector;
    typedef kn::shared_ptr<AccessControlImpl> AccessControlImplPtr;
    typedef std::map<std::string, RapidSubsystemPtr> SubsystemMap;

    QueueImpl(QueueImplParameters const& params,
              std::string const& entityName,
              SubsystemMap const& subsystems,
              AccessControlImplPtr const& accessControl);
    virtual ~QueueImpl() throw();

    virtual FuturePtr execute(rapid::Command const& cmd);

    AckVector directCmd(CommandPtr const& cmd);
    AckVector appendCmd(CommandPtr const& cmd);
    AckVector insertCmd(CommandPtr const& cmd);
    AckVector replaceCmd(CommandPtr const& cmd);

    AckVector cancelCmd(std::string const& cmdId);
    AckVector cancelCommands(bool directToo = false);

    CommandAckVector executableCommands();
    AckVector purgeCommands(ACE_Time_Value const& deadline, bool allCompleted = false); 
    bool evalQueueState(); // returns true on change
    void publishQueueState();

    bool hasCmdId(std::string const& cmdId) const { return m_commands.find(cmdId) != m_commands.end(); }
   
    void connect(kn::DdsEventLoop& eventLoop);

    void suspendQueue() { m_status = QUEUE_SUSPENDED; }
    void sendAck(AckPtr const& ack);
    void sendAcks(AckVector const& acks);
    void unregisterAck(AckPtr const& ack);
    void unregisterAcks(AckVector const& acks);

    CommandPtr command(std::string const& cmdId) const;
    
  protected:
    typedef kn::DdsTypedSupplier<rapid::Ack> AckSupplier;
    typedef boost::scoped_ptr<AckSupplier> AckSupplierPtr;
    typedef kn::DdsTypedSupplier<rapid::QueueState> QueueStateSupplier;
    typedef boost::scoped_ptr<QueueStateSupplier> QueueStateSupplierPtr;
    typedef boost::scoped_ptr<MacroManager> MacroManagerPtr;

    typedef std::vector<std::string> StringVector;

    StringVector queuedCommands() const;
    StringVector commandSequence() const;
    bool checkAccessPriviledges(CmdAckPair& ca) const;
    bool checkQueuing(CmdAckPair& ca) const;
    void loadMacro(rapid::Command const& cmd);
    void tryCancelActiveCommands(bool requeue = false, bool directToo = false);
    CommandAckVector executingCommands(bool directToo = false);
    CommandMap::const_iterator lastNonCompletedCmd();

    static rapid::SubsystemType const * typeDescription();
    static void setQueueState(rapid::CommandRecord& cr, CmdAckPair const& cmdAck);


    QueueImplParameters const& m_params;

    SubsystemMap const& m_subsystems;
    AccessControlImplPtr m_accessControl;

    std::string m_headCmdId;
    CommandMap m_commands;

    enum QueueStatus { QUEUE_IDLE, QUEUE_ACTIVE, QUEUE_SUSPENDED };

    QueueStatus m_status;

    AckSupplierPtr m_ackSupplier;
    QueueStateSupplierPtr m_statePublisher;

    MacroManagerPtr m_macroMgr;
  };
}
#endif // rapid_QueueImpl_h
