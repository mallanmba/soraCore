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
#include "QueueImpl.h"
#include "CommandingParameters.h"
#include "CommandExceptions.h"
#include "AccessControlImpl.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/CommandConstants.h"
#include "rapidDds/Command.h"
#include "rapidDds/CommandSupport.h"
#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"
#include "rapidDds/QueueStateSupport.h"
#include "rapidDds/AckSupport.h"
#include "rapidDds/HeaderSupport.h"
#include "rapidUtil/RapidHelper.h"

#include "miro/RobotParameters.h"

#include <ace/Time_Value.h>

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <iostream>
#include <sstream>
#include <algorithm>

namespace rapid
{
  using namespace std;

  QueueImpl::CmdAckPair::CmdAckPair() :
    cmd(rapid::Command::TypeSupport::create_data(),
        rapid::Command::TypeSupport::delete_data),
    ack(rapid::Ack::TypeSupport::create_data(),
        rapid::Ack::TypeSupport::delete_data)
  {}
  
  QueueImpl::CmdAckPair::CmdAckPair(CmdAckPair const& rhs) :
    cmd(rhs.cmd),
    ack(rhs.ack)
  {}
 
  QueueImpl::CmdAckPair::CmdAckPair(CommandPtr const& c) :
    cmd(c),
    ack(rapid::Ack::TypeSupport::create_data(),
        rapid::Ack::TypeSupport::delete_data)
  {
    rapid::HeaderTypeSupport::copy_data(&(ack->hdr), &(cmd->hdr));
    strncpy(ack->cmdId, cmd->cmdId, 64);
    ack->status = rapid::ACK_QUEUED;
    ack->completedStatus = rapid::ACK_COMPLETED_NOT;
  } 


  /**
   * ctor
   */
  QueueImpl::QueueImpl(QueueImplParameters const& params,
                       SubsystemMap const& subsystems,
                       AccessControlImplPtr const& accessControl) :
    CommandImpl(QUEUE, typeDescription()),
    m_params(params),
    m_subsystems(subsystems),
    m_accessControl(accessControl),
    m_status(params.startQueueSuspended? QUEUE_SUSPENDED : QUEUE_IDLE),
    m_ackSupplier(new AckSupplier(rapid::ACK_TOPIC, m_params.ackPublisher)),
    m_statePublisher(params.queuing?
                     new QueueStateSupplier(QUEUE_STATE_TOPIC,
                                            params.publisher,
                                            params.stateProfile,
                                            params.library) :
                     0),
    m_macroMgr(params.queuing? 
               new MacroManager(params.macroMgr) :
               0)
  {
    string const& assetName = Miro::RobotParameters::instance()->name;

    MIRO_LOG_OSTR(LL_DEBUG, "Rapid Queue: Agent Name = " << assetName);

    // configure ack
    rapid::Ack& ack = m_ackSupplier->event();
    rapid::RapidHelper::initHeader(ack.hdr);

    // configure state
    if (m_statePublisher != NULL) {
      QueueState& state = m_statePublisher->event();
      RapidHelper::initHeader(state.hdr);
      
      m_statePublisher->sendEvent();    
    }
  }

  /**
   * dtor
   */
  QueueImpl::~QueueImpl() throw()
  {
  }

  void
  QueueImpl::connect(kn::DdsEventLoop& eventLoop)
  {
    if (m_macroMgr) {
      m_macroMgr->connect(eventLoop);
    }
  }

  QueueImpl::AckVector
  QueueImpl::directCmd(CommandPtr const& cmd)
  {
    string cmdId = cmd->cmdId;
    CmdAckPair ca(cmd);

    assert (m_commands.find(cmdId) == m_commands.end());
    m_commands.insert(make_pair(cmdId, ca));

    AckVector acks;

    if (!checkAccessPriviledges(ca)) {
      acks.push_back(ca.ack);
    }
    else if (strlen(cmd->targetCmdId) != 0) {
      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      strcpy(ca.ack->message, "Direct command request with non-empty targetCmdId");
      cmd->targetCmdId[0] = 0;

      acks.push_back(ca.ack);
    }

    return acks;
  }

  QueueImpl::AckVector
  QueueImpl::appendCmd(CommandPtr const& cmd)
  {
    AckVector acks;

    string cmdId = cmd->cmdId;
    CmdAckPair ca(cmd);

    if (m_commands.find(cmdId) != m_commands.end()) {
      MIRO_LOG_OSTR(LL_ERROR, "Duplicated cmdId: " << cmdId);
      return acks;
    }
    m_commands.insert(make_pair(cmdId, ca));

    if (!checkAccessPriviledges(ca) || !checkQueuing(ca)) {
      // noop
    }
    else if (strlen(cmd->targetCmdId) != 0) {
      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      strcpy(ca.ack->message, "Append queue request with non-empty targetCmdId.");
      cmd->targetCmdId[0] = 0;
    }
    else {
      strcpy(cmd->targetCmdId, m_headCmdId.c_str());
      m_headCmdId = cmd->cmdId;
    }

    acks.reserve(1);
    acks.push_back(ca.ack);

    return acks;
  }

  QueueImpl::AckVector
  QueueImpl::insertCmd(CommandPtr const& cmd)
  {
    string cmdId = cmd->cmdId;
    CmdAckPair ca(cmd);

    assert (m_commands.find(cmdId) == m_commands.end());
    m_commands.insert(make_pair(cmdId, ca));

    if (strcmp(cmd->targetCmdId, "head") == 0 ) {
      StringVector queue = queuedCommands();
      strcpy(cmd->targetCmdId, queue.back().c_str());
    }

    if (!checkAccessPriviledges(ca) || !checkQueuing(ca)) {
      // noop
    }
    else if (strlen(cmd->targetCmdId) == 0) {
      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      strcpy(ca.ack->message, "Insert queue request with empty targetCmdId.");
    }
    else if (m_commands.find(cmd->targetCmdId) == m_commands.end()) {
      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      strcpy(ca.ack->message, "Insert queue request, but targetCmdId does not exist.");
      cmd->targetCmdId[0] = 0;
    }
    else {    // walk all commands
      // forward-link all targetCmdId's pointing to the cmdId to the cmd's targetCmdId
      CommandMap::const_iterator first, last = m_commands.end();
      for (first = m_commands.begin(); first != last; ++first) {
        if (strcmp(first->second.cmd->targetCmdId, cmd->targetCmdId) == 0) {
          strcpy(first->second.cmd->targetCmdId, cmd->cmdId);
        }
      }

      if (strcmp(m_headCmdId.c_str(), cmd->targetCmdId) == 0) {
        strcpy(cmd->targetCmdId, m_headCmdId.c_str());
        m_headCmdId = cmd->cmdId;
      }
    }

    AckVector acks;
    acks.reserve(1);
    acks.push_back(ca.ack);
    return acks;
  }

  QueueImpl::AckVector
  QueueImpl::cancelCmd(std::string const& cmdId)
  {
    AckVector acks;
    CommandMap::iterator iter = m_commands.find(cmdId);

    do { // this is just a 1-time loop to provide a common break target
      if (iter == m_commands.end()) {
        MIRO_LOG_OSTR(LL_ERROR, "Delete queue entry for unknown cmdId: " << cmdId);
        break;
      }
      
      // if already done, don't bother
      if (iter->second.ack->status == rapid::ACK_COMPLETED) {
        break;
      }

      // if command is executing, try to abort exection
      if (iter->second.ack->status == rapid::ACK_EXECUTING) {
        SubsystemMap::const_iterator s = m_subsystems.find(iter->second.cmd->subsysName);
        
        assert(s != m_subsystems.end());
        
        RapidSubsystemPtr const subsys = s->second;
        if (subsys->isAbortable(iter->second.cmd->cmdName)) {
          try {
            //      /* Miro::AmiHelper * */ 
            subsys->abort();
          }
          catch(...) {
            MIRO_LOG_OSTR(LL_ERROR, "QueueImpl: abort subsystem[" << s->first << "]->" << iter->second.cmd->cmdName << "() raised exception.");
          }
          
          // the ack will flow in through the asynchronous command token
          break;
        }
        else {
          MIRO_LOG_OSTR(LL_WARNING, "The active command is not abortable: " << s->first);
        }
      }
      
      acks.reserve(1);
      acks.push_back(iter->second.ack);
      acks.back()->status = rapid::ACK_COMPLETED;
      acks.back()->completedStatus = rapid::ACK_COMPLETED_CANCELED;
      
      // if this is the last active command, queue order wont change
      // so we can stop
      CommandMap::const_iterator next = m_commands.find(iter->second.cmd->targetCmdId);
      if (next != m_commands.end() && next->second.ack->status == rapid::ACK_COMPLETED) {
        break;
      }
      
      // walk all commands
      // forward-link all targetCmdId's pointing to the cmdId to the cmd's targetCmdId
      CommandMap::const_iterator first, last = m_commands.end();
      for (first = m_commands.begin(); first != last; ++first) {
        if (strcmp(first->second.cmd->targetCmdId, iter->second.cmd->cmdId) == 0) {
          strncpy(first->second.cmd->targetCmdId, iter->second.cmd->targetCmdId, 64);
        }
      }
      if (m_headCmdId == cmdId) {
        m_headCmdId = iter->second.cmd->targetCmdId;
      }

      
      // move the command to the end of the completed queue
      CommandMap::const_iterator queueEnd = lastNonCompletedCmd();
      if (queueEnd != m_commands.end()) {
        strcpy(iter->second.cmd->targetCmdId, queueEnd->second.cmd->targetCmdId);
        strcpy(queueEnd->second.cmd->targetCmdId, iter->second.cmd->cmdId);
      }
      else {
        m_headCmdId = iter->second.cmd->cmdId;
      }
    }
    while(false); // don't loop

    return acks;
  }

  QueueImpl::AckVector
  QueueImpl::cancelCommands(bool directToo)
  {
    AckVector acks;
    acks.reserve(m_commands.size());

    // sequence of queued commands
    StringVector const commands = commandSequence();
    {
      StringVector::const_reverse_iterator first, last = commands.rend();
      for (first = commands.rbegin(); first != last; ++first) {
        AckVector const a = cancelCmd(*first); 
        acks.insert(acks.end(), a.begin(), a.end());
      }
    }

    if (directToo) {
      CommandMap::const_iterator first, last = m_commands.end();
      for (first = m_commands.begin(); first != last; ++first) {
        if (first->second.cmd->cmdAction == rapid::QUEUE_BYPASS &&
            first->second.ack->status != rapid::ACK_COMPLETED) {
          AckVector const a = cancelCmd(first->first); 
          acks.insert(acks.end(), a.begin(), a.end());
        }
      }
    }

    return acks;
  }



  QueueImpl::AckVector
  QueueImpl::replaceCmd(CommandPtr const& cmd)
  {
    string cmdId = cmd->cmdId;
    CmdAckPair ca(cmd);

    assert (m_commands.find(cmdId) == m_commands.end());
    m_commands.insert(make_pair(cmdId, ca));

    AckVector acks;
    if (!checkAccessPriviledges(ca) || !checkQueuing(ca)) {
      // noop
    }
    else if (strlen(cmd->targetCmdId) == 0) {
      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      strcpy(ca.ack->message, "Replace queue entry request, but targetCmdId is empty.");
    }
    else if (strcmp(cmd->targetCmdId, "head") != 0 &&
             m_commands.find(cmd->targetCmdId) == m_commands.end()) {
      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      strcpy(ca.ack->message, "Replace queue entry request, but targetCmdId does not exist.");
      cmd->targetCmdId[0] = 0;
    }
    else {
      if (m_headCmdId == cmd->targetCmdId) {
        m_headCmdId = cmd->cmdId;
      }

      // @FIXME: can this really never fail?
      CommandMap::iterator iter = m_commands.find(cmd->targetCmdId);
      
      strcpy(cmd->targetCmdId, iter->second.cmd->targetCmdId);
      strcpy(iter->second.cmd->targetCmdId, cmd->cmdId);
      
      AckVector const tmp = cancelCmd(iter->first);
      acks.insert(acks.end(), tmp.begin(), tmp.end());
    }
    acks.push_back(ca.ack);

    return acks;
  }

  bool
  QueueImpl::checkAccessPriviledges(CmdAckPair& ca) const
  {
    bool rc = true;
    // move to QueueImpl
    // check control status of cmdSrc
    if (m_accessControl &&                                       // check if we have access-control enabled
        strcmp(ca.cmd->subsysName, rapid::ACCESSCONTROL) != 0 && // access-control can not be access-controlled
        strcmp(ca.cmd->cmdSrc, Miro::RobotParameters::instance()->name.c_str()) != 0 && // robot-local commands neither
        !m_accessControl->isController(ca.cmd->cmdSrc)) {        // but otherwise the src-id has to match

      rc = false;

      // make sure the cmd is not connected into any list      
      ca.cmd->targetCmdId[0] = 0;

      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      stringstream s;
      s <<"RAPID access violation: " << ca.cmd->cmdSrc 
        << "!= queue controller (" << m_accessControl->controller() << ")";
      MIRO_LOG(LL_ERROR, s.str().c_str());
      strncpy(ca.ack->message, s.str().c_str(), 127);
      ca.ack->message[127] = 0;
    }

    return rc;
  }

  bool
  QueueImpl::checkQueuing(CmdAckPair& ca) const
  {
    bool rc = true;
    // check if we actually do queueing or only direct commands
    if (!m_params.queuing) {

      rc = false;

      // make sure the cmd is not connected into any list      
      ca.cmd->targetCmdId[0] = 0;

      ca.ack->status = rapid::ACK_COMPLETED;
      ca.ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
      stringstream s;
      s <<"Trying to queue command: " << ca.cmd->cmdSrc 
        << ". - Not suported on this command topic.";
      strncpy(ca.ack->message, s.str().c_str(), 127);
      ca.ack->message[127] = 0;
    }

    return rc;
  }


  QueueImpl::CommandAckVector 
  QueueImpl::executableCommands()
  {
    CommandAckVector executableCmds;
    StringVector completedIds;
    
    CommandMap::const_iterator first, last = m_commands.end();
    
    // get all completed commands
    for (first = m_commands.begin(); first != last; ++first) {
      if (first->second.ack->status == rapid::ACK_COMPLETED) {
        completedIds.push_back(first->first);
      }
    }
    sort(completedIds.begin(), completedIds.end());
    
    // get all commands with completed targetCmdIds
    for (first = m_commands.begin(); first != last; ++first) {
      CmdAckPair const& ca = first->second;
      string const targetCmdId = ca.cmd->targetCmdId;
      CommandMap::const_iterator iter = m_commands.find(targetCmdId);
      
      bool const pending = ca.ack->status == ACK_QUEUED || ca.ack->status == ACK_REQUEUED;
      bool const notblocked = targetCmdId.empty() || iter == m_commands.end() ||
        iter->second.ack->status == rapid::ACK_COMPLETED;
      bool const executable = pending && notblocked && (ca.cmd->cmdAction == QUEUE_BYPASS || m_status != QUEUE_SUSPENDED);
      
      if (executable) {
        executableCmds.push_back(first->second);
      }
    }
        
    return executableCmds;
  }

  QueueImpl::CommandMap::const_iterator
  QueueImpl::lastNonCompletedCmd()
  {
    string targetCmdId = m_headCmdId;
    CommandMap::const_iterator iter = m_commands.end();

    // make it a bounded for-loop to avoid infinity
    for (size_t cntr = 0; cntr < m_commands.size(); ++cntr) {

      // if there is no next command in the chain we are done
      if (targetCmdId.empty()) {
        break;
      }

      // if the next command is completed, we are done, too
      CommandMap::const_iterator next = m_commands.find(targetCmdId);


      // if the next command does not exist anymore we are done
      if (next ==  m_commands.end()) {
        MIRO_LOG_OSTR(LL_ERROR, "Encountered stale targetCmdId: " << targetCmdId);
        break;
      }

      if (next->second.ack->status == rapid::ACK_COMPLETED) {
        break;
      }

      // increment iterators
      iter = next;
      targetCmdId = iter->second.cmd->targetCmdId;
    }


    return iter;
  }

 
  QueueImpl::StringVector 
  QueueImpl::queuedCommands() const
  {
    StringVector cmds;
    cmds.reserve(m_commands.size());

    string cmdId = m_headCmdId;
    CommandMap::const_iterator iter;
    while ( (iter = m_commands.find(cmdId)) != m_commands.end()) {
      if (iter->second.ack->status == rapid::ACK_EXECUTING ||
          iter->second.ack->status == rapid::ACK_COMPLETED) {
        break;
      }

      cmds.push_back(cmdId);
      cmdId = iter->second.cmd->targetCmdId;
    }

    return cmds;
  }

  QueueImpl::StringVector 
  QueueImpl::commandSequence() const
  {
    StringVector cmds;
    cmds.reserve(m_commands.size());

    string cmdId = m_headCmdId;
    CommandMap::const_iterator iter;

    // make it a bounded loop to avoid infinity
    for (size_t i = 0; i < m_commands.size(); ++i) {
      iter = m_commands.find(cmdId);

      // found end of command chain
      if (iter == m_commands.end()) {
        break;
      }
      cmds.push_back(cmdId);

      // avoid running in circles
      if (cmdId == iter->second.cmd->targetCmdId) {
        MIRO_LOG_OSTR(LL_ERROR, "QueueImpl::commandSequence found self-referencing cmdId: " << cmdId);
        break;
      }
      cmdId = iter->second.cmd->targetCmdId;
    }

    return cmds;
  }

  namespace {
    struct CompareBaseCmdId
    {
      bool operator() (string const& lhs, string const& rhs) {
        size_t len = min(lhs.length(), rhs.length());
        for (size_t i = 0; i < len; ++i) {
          if (lhs[i] < rhs[i])
            return true;
          if (lhs[i] > rhs[i])
            break;
        }
        return false;
      }
    };
  }

  QueueImpl::AckVector 
  QueueImpl::purgeCommands(ACE_Time_Value const& deadline, bool allCompleted)
  {
    StringVector completedIds;
    StringVector macroBaseCmdIds;

    DDS::LongLong t = rapid::RapidHelper::aceTimeValue2RapidTime(deadline);

    // get all completed commands
    // that are older as deadline
    {
      CommandMap::const_iterator first, last = m_commands.end();
      
      for (first = m_commands.begin(); first != last; ++first) {
        if (first->second.ack->completedStatus != rapid::ACK_COMPLETED_NOT)
          completedIds.push_back(first->first);
      }
      sort(completedIds.begin(), completedIds.end());
    }

    if (!allCompleted) {
      // don't delete completed commands that are referenced by
      // non-completed commands
      {
        CommandMap::const_iterator first, last = m_commands.end();
        for (first = m_commands.begin(); first != last; ++first) {
          string const& targetCmdId = first->second.cmd->targetCmdId;
          StringVector::iterator iter = lower_bound(completedIds.begin(), completedIds.end(), targetCmdId);
          
          if (first->second.ack->status != ACK_COMPLETED &&
              iter != completedIds.end() &&
              *iter == targetCmdId) {
            size_t dashPos = iter->find('-');
            if (dashPos != string::npos) {
              macroBaseCmdIds.push_back(iter->substr(0, dashPos));
            }
            completedIds.erase(iter);
          }
        }
      }
      
      // don't delete macros until they are fully completed
      {
        sort(macroBaseCmdIds.begin(), macroBaseCmdIds.end());
        StringVector::iterator duplicates = unique(macroBaseCmdIds.begin(), macroBaseCmdIds.end());
        macroBaseCmdIds.erase(duplicates, macroBaseCmdIds.end());
        
        StringVector::const_iterator first, last = macroBaseCmdIds.end();
        for (first = macroBaseCmdIds.begin(); first != last; ++first) {

          StringVector::iterator from = lower_bound(completedIds.begin(), completedIds.end(), *first, CompareBaseCmdId());
          StringVector::iterator to = upper_bound(completedIds.begin(), completedIds.end(), *first, CompareBaseCmdId());
          StringVector::iterator i;
          completedIds.erase(from, to);
        }
      }
    }
    
    // collect all associated acks
    AckVector purgedCmds;
    purgedCmds.reserve(completedIds.size());
    StringVector::const_iterator first, last = completedIds.end();
    for (first = completedIds.begin(); first != last; ++first) {
      CommandMap::iterator iter = m_commands.find(*first);

      assert(iter != m_commands.end());

      // don't delete anything that's younger than dead-line
      if (iter->second.ack->hdr.timeStamp < t) {
        purgedCmds.push_back(iter->second.ack);
        m_commands.erase(iter);
      }
    }

    // delete entrypoint queue is clear
    if (!m_headCmdId.empty()) {
      CommandMap::const_iterator iter = m_commands.find(m_headCmdId);
      if (iter == m_commands.end()) {
        m_headCmdId.clear();
      }
    }

    // return acks for unregistering
    return purgedCmds;
  }


  namespace
  {
    static rapid::KeyTypePair cancelCommandArguments[] = {
      { rapid::QUEUE_METHOD_CANCELCOMMAND_PARAM_CMDID, rapid::QUEUE_METHOD_DTYPE_CMDID }
    };
    static int const NUM_CANCELCOMMAND_ARGUMENTS = sizeof(cancelCommandArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair deleteMacroArguments[] = {
      { rapid::QUEUE_METHOD_DELETEMACRO_PARAM_NAME, rapid::QUEUE_METHOD_DELETEMACRO_DTYPE_NAME }
    };
    static int const NUM_DELETEMACRO_ARGUMENTS = sizeof(deleteMacroArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair loadMacroArguments[] = {
      { rapid::QUEUE_METHOD_LOADMACRO_PARAM_NAME, rapid::QUEUE_METHOD_LOADMACRO_DTYPE_NAME },
      { rapid::QUEUE_METHOD_LOADMACRO_PARAM_VERSION, rapid::QUEUE_METHOD_LOADMACRO_DTYPE_VERSION }
    };
    static int const NUM_LOADMACRO_ARGUMENTS = sizeof(loadMacroArguments) / sizeof(rapid::KeyTypePair);

    static rapid::KeyTypePair requeueArguments[] = {
      { rapid::QUEUE_METHOD_REQUEUE_PARAM_CMDID, rapid::QUEUE_METHOD_DTYPE_CMDID },
      { rapid::QUEUE_METHOD_REQUEUE_PARAM_TARGETCMDID, rapid::QUEUE_METHOD_DTYPE_CMDID }
    };
    static int const NUM_REQUEUE_ARGUMENTS = sizeof(requeueArguments) / sizeof(rapid::KeyTypePair);

    static int const ZERO_ARGUMENTS = 0;
    struct Cmd 
    {
      char const * name;
      int argumentNum;
      rapid::KeyTypePair * arguments;
    };  

    static Cmd const commands[] = {
      { rapid::QUEUE_METHOD_CANCELALL, ZERO_ARGUMENTS, NULL },
      { rapid::QUEUE_METHOD_CANCELCOMMAND, NUM_CANCELCOMMAND_ARGUMENTS, cancelCommandArguments },
      { rapid::QUEUE_METHOD_CANCELCURRENTTASK, ZERO_ARGUMENTS, NULL },
      { rapid::QUEUE_METHOD_DELETEALL, ZERO_ARGUMENTS, NULL },
      { "deleteCompleted", ZERO_ARGUMENTS, NULL },
      { rapid::QUEUE_METHOD_DELETEMACRO, NUM_DELETEMACRO_ARGUMENTS, deleteMacroArguments },
      { rapid::QUEUE_METHOD_LOADMACRO, NUM_LOADMACRO_ARGUMENTS, loadMacroArguments },
      { rapid::QUEUE_METHOD_REQUEUE, NUM_REQUEUE_ARGUMENTS, requeueArguments },
      { rapid::QUEUE_METHOD_RESUME, ZERO_ARGUMENTS, NULL },
      { rapid::QUEUE_METHOD_SUSPEND, ZERO_ARGUMENTS, NULL },
      { rapid::QUEUE_METHOD_SUSPENDONCOMPLETE, ZERO_ARGUMENTS, NULL }
    };
    static int const QUEUE_COMMANDS = sizeof(commands) / sizeof (Cmd);

  }

  SubsystemType const *
  QueueImpl::typeDescription()
  {

    SubsystemType * description = SubsystemTypeTypeSupport::create_data();

    strcpy(description->name, QUEUE);

    description->commands.length(QUEUE_COMMANDS);
    for (int i = 0; i < description->commands.length(); ++i) {
      strcpy(description->commands[i].name, commands[i].name);
      description->commands[i].abortable = false;
      description->commands[i].suspendable = false;

      description->commands[i].parameters.length(commands[i].argumentNum);
      for (int j = 0; j < commands[i].argumentNum; ++j) {
        strcpy(description->commands[i].parameters[j].key, commands[i].arguments[j].key);
        description->commands[i].parameters[j].type = commands[i].arguments[j].type;
      }
    }

    return description;
  }

  CommandImpl::FuturePtr
  QueueImpl::execute(Command const& cmd)
  {
    FuturePtr result;
    int cmdIdx = validateCommandSyntax(cmd.cmdName, cmd.arguments);

    switch (cmdIdx) {
    case 0: // QUEUE_METHOD_CANCELALL
      {
        AckVector const acks = cancelCommands();
        sendAcks(acks);
      }
      break;
    case 1: // QUEUE_METHOD_CANCELCOMMAND
      {
        AckVector const acks = cancelCmd(cmd.arguments[0]._u.s);
        sendAcks(acks);
      }
      break;
    case 2: // QUEUE_METHOD_CANCELCURRENTTASK
      tryCancelActiveCommands();
      break;
    case 3: // QUEUE_METHOD_DELETEALL

      // unregister all acks
      {
        CommandMap::iterator iter = m_commands.find(cmd.cmdId);
        assert (iter != m_commands.end());
        CmdAckPair ca(iter->second);

        AckVector acks;
        acks.reserve(m_commands.size());
        CommandMap::const_iterator first, last = m_commands.end();
        for (first = m_commands.begin(); first != last; ++first) {
          // delete all but 
          if (strcmp(cmd.cmdId, first->second.cmd->cmdId) != 0) {
            acks.push_back(first->second.ack);
          }
        }

        // delete all but this command
        unregisterAcks(acks);
        m_commands.erase(m_commands.begin(), iter);
        ++iter;
        m_commands.erase(iter, m_commands.end());
        m_headCmdId.clear();
        
        if (m_status == QUEUE_ACTIVE) {
          m_status = m_params.suspendQueueOnIdle? QUEUE_SUSPENDED : QUEUE_IDLE;
        }
      }
      break;
    case 4: // deleteCompleted
      {
        AckVector acks = purgeCommands(ACE_OS::gettimeofday(), true);
        unregisterAcks(acks);

        if (m_commands.empty() && m_status == QUEUE_IDLE) {
          m_status = m_params.suspendQueueOnIdle? QUEUE_SUSPENDED : QUEUE_IDLE;
        }
      }
      break;
    case 5: // QUEUE_METHOD_DELETEMACRO
      cout << "deleting macro" << endl;
      if (m_macroMgr)
        m_macroMgr->delMacro(cmd.arguments[0]._u.s);
      break;
    case 6: // QUEUE_METHOD_LOADMACRO
      cout << "loading macro" << endl;
      loadMacro(cmd);
      break;
    case 7: // QUEUE_METHOD_REQUEUE
      boost::throw_exception(EExecFailed(string("Queue command not supported: ") + cmd.cmdName));
      break;
    case 8: // QUEUE_METHOD_RESUME
      cout << "setting queue resume/idle" << endl;
      m_status = QUEUE_IDLE;
      break;
    case 9: // QUEUE_METHOD_SUSPEND
      m_status = QUEUE_SUSPENDED;
      tryCancelActiveCommands(true, false);
      break;
    case 10: // QUEUE_METHOD_SUSPENDONCOMPLETE
      cout << "setting queue suspended" << endl;
      m_status = QUEUE_SUSPENDED;
      break;
    default:
      boost::throw_exception(rapid::EBadSyntax(string("Unknown RAPID Queue cmdName:") + string(cmd.cmdName)));
    }

    evalQueueState();
    publishQueueState();    

    return result;
  }

  bool
  QueueImpl::evalQueueState()
  {
    bool changed = false;

    QueueStatus status = QUEUE_SUSPENDED;

    // only update status if queue is not suspended
    if (m_status != QUEUE_SUSPENDED) {
      status = QUEUE_IDLE;

      // check if queue is active
      CommandMap::const_iterator first, last = m_commands.end();
      for (first = m_commands.begin(); first != last; ++first) {
        if (first->second.ack->status != rapid::ACK_COMPLETED &&
            first->second.cmd->cmdAction != QUEUE_BYPASS) {
          status = QUEUE_ACTIVE;
        }
      }

      if (status == QUEUE_IDLE && m_params.suspendQueueOnIdle) {
        status = QUEUE_SUSPENDED;
      }
    }

    // see if status has changed
    if (m_status != status) {
      changed = true;
      m_status = status;
    }

    return changed;
  }

  QueueImpl::CommandAckVector 
  QueueImpl::executingCommands(bool directToo)
  {
    CommandAckVector cmds;
    cmds.reserve(m_commands.size());

    // get all successfully active commands
    CommandMap::const_iterator first, last = m_commands.end();
    for (first = m_commands.begin(); first != last; ++first) {
      if (first->second.ack->status == rapid::ACK_EXECUTING && 
          (directToo || first->second.cmd->cmdAction != rapid::QUEUE_BYPASS) ) {
        cmds.push_back(first->second);
      }
    }
        
    return cmds;
  }


  void
  QueueImpl::tryCancelActiveCommands(bool requeue, bool directToo)
  {

    // get a copy of the CmdAckPair's so command-vector does not change
    // while canceling things
    CommandAckVector cmds = executingCommands(directToo);

    CommandAckVector::const_iterator first, last = cmds.end();
    for (first = cmds.begin(); first != last; ++first) {

      if (directToo || first->cmd->cmdAction != rapid::QUEUE_BYPASS) {
        cancelCmd(first->cmd->cmdId);
        

        // manipulate state to trigger requeing 
        if (requeue && first->cmd->cmdAction != rapid::QUEUE_BYPASS) {
          first->ack->status = rapid::ACK_REQUEUED;
        }
      }
    }   
  }

  void
  QueueImpl::setQueueState(rapid::CommandRecord& cr, QueueImpl::CmdAckPair const& cmdAck)
  {
    // copy command
    rapid::Command::TypeSupport::copy_data(&(cr.cmd), cmdAck.cmd.get());


    //set status
    switch(cmdAck.ack->status) {
    case ACK_QUEUED:
      cr.trStatus = rapid::Q_STATUS_INLINE;
      cr.trResult = rapid::Q_RESULT_INIT;
      break;
    case ACK_EXECUTING:
      cr.trStatus = rapid::Q_STATUS_INPROCESS;
      cr.trResult = rapid::Q_RESULT_INIT;
      break;
    case ACK_REQUEUED:
      cr.trStatus = rapid::Q_STATUS_PAUSED;
      cr.trResult = rapid::Q_RESULT_INIT;
      break;
    case ACK_COMPLETED:
      switch (cmdAck.ack->completedStatus) {
      case rapid::ACK_COMPLETED_NOT:
        MIRO_LOG_OSTR(LL_ERROR, "Inconsistent Ack state: ACK_COMPLETED && ACK_COMPLETED_NOT: " << cr.cmd.cmdId);
        break;
      case rapid::ACK_COMPLETED_OK:
        cr.trStatus = rapid::Q_STATUS_SUCCEEDED;
        cr.trResult = rapid::Q_RESULT_SUCCEEDED;
        break;
      case rapid::ACK_COMPLETED_BAD_SYNTAX:
        cr.trStatus = rapid::Q_STATUS_FAILED;
        cr.trResult = rapid::Q_RESULT_FAILED;
        break;
      case rapid::ACK_COMPLETED_EXEC_FAILED:
        cr.trStatus = rapid::Q_STATUS_FAILED;
        cr.trResult = rapid::Q_RESULT_FAILED;
        break;
      case rapid::ACK_COMPLETED_CANCELED:
        cr.trStatus = rapid::Q_STATUS_CANCELED;
        cr.trResult = rapid::Q_RESULT_FAILED;
        break;
      }
      break;
    }
  }

  void 
  QueueImpl::publishQueueState()
  {
    if (m_statePublisher == NULL) {
      MIRO_LOG(LL_ERROR, "QueueState publication requested, but no queue-state publisher instance.");
      return;
    }

    QueueState& state = m_statePublisher->event();
    RapidHelper::updateHeader(state.hdr,
                              ACE_OS::gettimeofday(),
                              m_status == QUEUE_ACTIVE? 1 : m_status == QUEUE_SUSPENDED? -1 : 0);

    // sequence of queued commands
    StringVector const commands = commandSequence();
    StringVector::const_iterator first, last = commands.end();

    //
    // pending
    //
    int idx = 0;
    state.pending.queue.ensure_length(min(m_commands.size(), (size_t)64), 64); // max possible
    for (first = commands.begin(); first != last; ++first, ++idx) {
      CommandMap::const_iterator iter = m_commands.find(*first);

      assert(iter != m_commands.end());

      rapid::AckStatus const as = iter->second.ack->status;
      
      if (as != rapid::ACK_QUEUED && as != rapid::ACK_REQUEUED)
        break;
      
      // check for full queue
      if (idx < 64) {
       setQueueState(state.pending.queue[idx], iter->second);
      }
      else {
        MIRO_LOG_OSTR(LL_ERROR, "RAPID Sequencer: pending queue full, incorrect state reporting: " << idx);
      }
    }
    state.pending.queue.length(min(64, idx)); // resize to actual

    //
    // active
    //
    state.active.queue.ensure_length(min((int)m_commands.size() - state.pending.queue.length(), 64), 64); // max possible
    for (idx = 0; first != last; ++first, ++idx) {
      CommandMap::const_iterator iter = m_commands.find(*first);

      assert(iter != m_commands.end());
      
      if (iter->second.ack->status != rapid::ACK_EXECUTING)
        break;
      
      // bail out on full queue
      if (idx < 64) {
        setQueueState(state.active.queue[idx], iter->second);
      }
      else {
        MIRO_LOG_OSTR(LL_ERROR, "RAPID Sequencer: active queue full, incomplete state reporting: " << idx);
      }
    }


    // add direct commands if enabled
    if (m_params.trackDirectCommandsInQueue) {
      CommandMap::const_iterator f, l = m_commands.end();
      for (f = m_commands.begin(); f != l; ++f) {
        if (f->second.cmd->cmdAction == rapid::QUEUE_BYPASS &&
            f->second.ack->status == rapid::ACK_EXECUTING) {
          // bail out on full queue
          if (idx >= 64) {
            MIRO_LOG(LL_ERROR, "RAPID Sequencer: active queue full, incomplete state reporting of direct commands.");
           break;
          }

          setQueueState(state.active.queue[idx], f->second);
          ++idx;
        }
      }
    }

    state.active.queue.length(min(64, idx)); // resize to actual

    //
    // completed
    //
    state.completed.queue.ensure_length(min((int)(m_commands.size() - state.pending.queue.length()), 64), 64); // max possible
    for (idx = 0; first != last; ++first, ++idx) {
      CommandMap::const_iterator iter = m_commands.find(*first);
      
      assert(iter != m_commands.end());
      
      // bail out on full queue
      if (idx < 64) {
        setQueueState(state.completed.queue[idx], iter->second);
      }
      else {
        MIRO_LOG_OSTR(LL_WARNING, "RAPID Sequencer: completed queue full, incomplete state reporting: " << idx);
      }
    }
      
    // add direct commands if enabled
    if (m_params.trackDirectCommandsInQueue) {
      CommandMap::const_iterator f, l = m_commands.end();
      for (f = m_commands.begin(); f != l; ++f) {
        if (f->second.cmd->cmdAction == rapid::QUEUE_BYPASS &&
            f->second.ack->status == rapid::ACK_COMPLETED) {
          // bail out on full queue
          if (idx >= 64) {
            MIRO_LOG(LL_WARNING, "RAPID Sequencer: completed queue full, incomplete state reporting of direct commands");
            break;
          }

          setQueueState(state.completed.queue[idx], f->second);
          ++idx;
        }
      }
    }

    state.completed.queue.length(min(64, idx)); // resize to actual

    m_statePublisher->sendEvent();
  }

  void
  QueueImpl::loadMacro(rapid::Command const& cmd)
  {
    if (!m_macroMgr)
      return;

    // command syntax is already asserted
    
    std::string name = cmd.arguments[0]._u.s;
    int serial = cmd.arguments[1]._u.i;

    MacroManager::MacroPtr macro = m_macroMgr->retreiveMacro(name, serial);

    for (int i = 0; i < macro->commands.length(); ++i) {
      rapid::MacroCommand const& srcCmd = macro->commands[i];

      CommandPtr dstCmd(rapid::Command::TypeSupport::create_data(),
                        rapid::Command::TypeSupport::delete_data);
      rapid::Command::TypeSupport::copy_data(dstCmd.get(), &cmd);
      
      int cmdIdBaseLen = strlen(dstCmd->cmdId);

      if (cmdIdBaseLen > 31) {
        MIRO_LOG_OSTR(LL_ERROR, "loadMacro() cmdIdBaseLen > 31: " << cmdIdBaseLen);
      }
      dstCmd->cmdId[cmdIdBaseLen++] = '-';
      dstCmd->cmdAction = rapid::QUEUE_APPEND;

      strncpy(dstCmd->cmdName, srcCmd.cmdName, 63);
      dstCmd->cmdName[63] = 0;
      if (strlen(srcCmd.cmdIdSuffix) > 31) {
        MIRO_LOG_OSTR(LL_ERROR, "loadMacro() cmdIdSuffix length > 31: " << strlen(srcCmd.cmdIdSuffix));
      }
      strncpy(&dstCmd->cmdId[cmdIdBaseLen], srcCmd.cmdIdSuffix, 63 - cmdIdBaseLen);
      dstCmd->cmdId[63] = 0;
      strncpy(dstCmd->subsysName, srcCmd.subsysName, 31);
      dstCmd->subsysName[31] = 0;
      dstCmd->arguments = srcCmd.arguments;

      // insert macro command-record into queue
      AckVector acks = appendCmd(dstCmd);
      sendAcks(acks);
    }

    if (macro->commands.length() > 0) {
      evalQueueState();
      publishQueueState();
    }
  }

  void
  QueueImpl::sendAcks(AckVector const& acks)
  {
    QueueImpl::AckVector::const_iterator first, last = acks.end();
    for (first = acks.begin(); first != last; ++first) {
      sendAck(*first);
    }
  }

  void
  QueueImpl::sendAck(AckPtr const& ack)
  {
    RapidHelper::updateHeader(ack->hdr);
    m_ackSupplier->sendEvent(*ack);
  }

  void
  QueueImpl::unregisterAcks(AckVector const& acks)
  {
    QueueImpl::AckVector::const_iterator first, last = acks.end();
    for (first = acks.begin(); first != last; ++first) {
      unregisterAck(*first);
    }
  }

  void
  QueueImpl::unregisterAck(AckPtr const& ack)
  {
    m_ackSupplier->dataWriter().unregister_instance(*ack, DDS_HANDLE_NIL);
  }

  QueueImpl::CommandPtr 
  QueueImpl::command(string const& cmdId) const
  {
    CommandMap::const_iterator iter = m_commands.find(cmdId);
    if (iter == m_commands.end()) {
      return CommandPtr();
    }

    return iter->second.cmd;
  }
}
