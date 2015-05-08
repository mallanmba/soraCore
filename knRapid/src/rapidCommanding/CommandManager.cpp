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
#include "CommandManager.h"
#include "CommandingParameters.h"
#include "CommandExceptions.h"
#include "AccessControlSubsysImpl.h"
#include "QueueSubsysImpl.h"
#include "RapidSubsystemRepository.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/CommandConstants.h"
#include "rapidDds/Ack.h"
#include "rapidDds/Command.h"
#include "rapidDds/CommandSupport.h"
#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"
#include "rapidDds/QueueState.h"
#include "rapidDds/QueueStateSupport.h"
#include "rapidUtil/RapidHelper.h"

#include "miro/RobotParameters.h"
#include "knDds/DdsTypedConsumer.h"
#include "knDds/DdsSupport.h"
#include "knDds/DdsEventLoop.h"

#include "knShare/Log.h"

#include <ace/Time_Value.h>

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <iostream>

namespace rapid
{
  using namespace std;
  using namespace Miro;

  namespace
  {
    // wrap delete_data because after 5.1.0, the method
    // takes two arguments and can't be used as a deleter
    DDS_ReturnCode_t delete_Command(rapid::Command* ptr)
    {
      return CommandTypeSupport::delete_data(ptr);
    }
  }


  CommandManager::PendingCommand::PendingCommand()
  {}

  CommandManager::PendingCommand::PendingCommand(FuturePtr const& r, AckPtr const& a) :
    result(r),
    ack(a)
  {}


  /**
   * ctor
   */
  CommandManager::CommandManager(CommandManagerParameters const * params, const std::string& entityName) :
    m_entityName(entityName),
    m_params(params),
    m_accessControl((params->accessControl)? new AccessControlSubsysImpl(params->accessControlImpl) : NULL),
    m_queue(new QueueSubsysImpl(params->queueImpl, entityName, m_subsystems, m_accessControl))
  {
    MIRO_LOG_CTOR("CommandManager");

    if (params->accessControl) {
      RapidSubsystemPtr accessCtrl(m_accessControl);
      // add to Repository, CommandManagerSvc will call addSubsystem
      RapidSubsystemRepository::instance()->add(accessCtrl->name(), accessCtrl);
    }
    if (params->queueImpl.queuing) {
      RapidSubsystemPtr queue(m_queue);
      // add to Repository, CommandManagerSvc will call addSubsystem
      RapidSubsystemRepository::instance()->add(queue->name(), queue);
    }

  }

  /**
   * dtor
   */
  CommandManager::~CommandManager() throw()
  {
    MIRO_LOG_DTOR("CommandManager");

    // remove our subsystems from the RapidSubsystemRepository
    if(m_accessControl)
      RapidSubsystemRepository::instance()->remove(m_accessControl->name());
    if(m_queue)
      RapidSubsystemRepository::instance()->remove(m_queue->name());
  }

  /**
   *
   */
  void
  CommandManager::addSubsystem(RapidSubsystemPtr const& instance)
  {
    assert(instance != NULL);

    // TODO: ensure that we don't blow config-array sizes

    // register prototype, if not already done so
    m_subsystemTypeInstances.insert(make_pair(string(instance->type()), instance));
    // register instance, if not already done so
    m_subsystems.insert(make_pair(string(instance->name()), instance));
  }

  void
  CommandManager::exportCommandConfig(rapid::CommandConfig& config) const
  {
    RapidHelper::initHeader(config.hdr);

    {
      config.availableSubsystemTypes.length(m_subsystemTypeInstances.size());
      int index = 0;
      SubsystemMap::const_iterator first, last = m_subsystemTypeInstances.end();
      for (first = m_subsystemTypeInstances.begin(); first != last; ++first, ++index) {
        first->second->exportSubsystemType(config.availableSubsystemTypes[index]);
      }
    }

    {
      config.availableSubsystems.length(m_subsystems.size());
      int index = 0;
      SubsystemMap::const_iterator first, last = m_subsystems.end();
      for (first = m_subsystems.begin(); first != last; ++first, ++index) {
        first->second->exportSubsystemDescription(config.availableSubsystems[index]);
      }
    }
  }

  /**
   *
   */
  void
  CommandManager::operator() (rapid::Command const * cmd)
  {
    MIRO_LOG(LL_NOTICE, "Rapid CmdMgr - command");


    // exceptions at this level to not result in an Ack
    // as there is no ack to connect it to, yet
    try { // no ack

      // check if this is for us
      if (strcmp(Miro::RobotParameters::instance()->name.c_str(), cmd->hdr.assetName) != 0) {
        boost::throw_exception(ECommand(string("Rapid CmdMgr - received command that was for somebody else: ") +
                                        cmd->hdr.assetName));
      }

      if (m_queue->hasCmdId(cmd->cmdId)) {
        boost::throw_exception(ECommand(string("Command Id already exists: ") + cmd->cmdId));
      }

      if (!m_params->queueImpl.queuing && cmd->cmdAction != rapid::QUEUE_BYPASS) {
        boost::throw_exception(ECommand(string("Queing not supported in this command managager, but requested for command: ") + cmd->cmdId));
      }

      CommandPtr command(rapid::Command::TypeSupport::create_data(),
                         delete_Command);
      rapid::Command::TypeSupport::copy_data(command.get(), cmd);
      QueueSubsysImpl::AckVector acks;

      // process command actions
      switch (command->cmdAction) {
        case rapid::QUEUE_BYPASS:
          MIRO_LOG(LL_NOTICE, "direct cmd");

          acks = m_queue->directCmd(command);
          break;

        case rapid::QUEUE_APPEND:
          MIRO_LOG(LL_NOTICE, "append cmd");

          acks = m_queue->appendCmd(command);
          break;

        case rapid::QUEUE_INSERT:
          MIRO_LOG(LL_NOTICE, "insert cmd");

          acks = m_queue->insertCmd(command);
          break;

        case rapid::QUEUE_REPLACE:
          MIRO_LOG(LL_NOTICE, "replace cmd");

          acks = m_queue->replaceCmd(command);
          break;

        case rapid::QUEUE_DELETE:
          MIRO_LOG(LL_NOTICE, "delete cmd");

          acks = m_queue->cancelCmd(command->targetCmdId);
          break;
      }

      // publish acks
      {
        m_queue->sendAcks(acks);

        if (!acks.empty() && command->cmdAction != rapid::QUEUE_BYPASS) {
          m_queue->evalQueueState();
          m_queue->publishQueueState();
        }
      }
    }
    catch (rapid::ECommand const& e) {
      MIRO_LOG_OSTR(LL_ERROR, "Unable to process command: " << e.what());
    }

    MIRO_LOG(LL_NOTICE, "Rapid CmdMgr - command done");
  }

  /**
   * @returns true if command should be requeued on cancel
   */
  bool
  isRequeueableCommand ( QueueSubsysImpl::CommandPtr cmd )
  {
    if ( cmd->cmdAction == QUEUE_BYPASS )
      return false;

    // Science commands are after reaching a waypoint - if navigation (mobility)
    // command is cancelled/aborted, then we usually want to resume the navigation
    // so the rover ends up at the station before activating instruments.
    // EStopping the rover results a RAPID ECanceled exception, so
    // m_params->requeueMobilityCommand must be true in order to push the
    // interrupted mobility command back onto the queue
    const char* mobilityReQ[] = {
      rapid::MOBILITY_METHOD_MOVE,
      rapid::MOBILITY_METHOD_MOVE6DOF,
      rapid::MOBILITY_METHOD_SIMPLEMOVE,
      rapid::MOBILITY_METHOD_SIMPLEMOVE6DOF,
      ""
    };

    if( strcmp (cmd->subsysName, rapid::MOBILITY) == 0 ) {
      bool doRequeue = false;
      for(int i = 0; mobilityReQ[i][0] != '\0'; i++) {
        if(strcmp(cmd->cmdName, mobilityReQ[i]) == 0) {
          doRequeue = true;
          break;
        }
      }
      return doRequeue;
    }

    return false;
  }


  /**
   *
   */
  void
  CommandManager::processPendingCommands()
  {
    bool queueStateUpdate = false;

    // query all outstanding AMI method completions
    {
      PendingCommandVector::iterator first, last = m_commandVector.end();
      PendingCommandVector v;
      v.reserve(m_commandVector.size());

      for (first = m_commandVector.begin(); first != last; ++first) {
        if (first->result->is_ready()) {
          MIRO_LOG(LL_NOTICE, "RAPID CmdMgr: Async command finished");

          // prepare error return
          stringstream ostr;
          ostr << "RAPID CmdMgr - ";

          try {
            if (first->ack->status != rapid::ACK_REQUEUED) {
              first->ack->status = rapid::ACK_COMPLETED;
              first->ack->completedStatus = rapid::ACK_COMPLETED_EXEC_FAILED;
            }
            first->result->get(); // throw exception if stored;
            first->ack->completedStatus = rapid::ACK_COMPLETED_OK;
          }
          catch (ECanceled const& e) {
            if (m_params->requeueMobilityCommand) {
              QueueSubsysImpl::CommandPtr cmd = m_queue->command(first->ack->cmdId);
              if (isRequeueableCommand(cmd)) {
                first->ack->status = rapid::ACK_REQUEUED;
              }
            }
            first->ack->completedStatus = ACK_COMPLETED_CANCELED;
            ostr << e.what();
            KN_WARN("CommandManager::processPendingCommands - ECanceled : %s", ostr.str().c_str());
          }
          catch (EExecFailed const& e) {
            if (m_params->requeueMobilityCommand) {
              QueueSubsysImpl::CommandPtr cmd = m_queue->command(first->ack->cmdId);
              if (isRequeueableCommand(cmd)) {
                first->ack->status = rapid::ACK_REQUEUED;
              }
            }
            first->ack->completedStatus = ACK_COMPLETED_CANCELED;
            ostr << e.what();
            KN_WARN("CommandManager::processPendingCommands - EExecFailed : %s", ostr.str().c_str());
          }
          catch (EBadSyntax const& e) {
            ostr << e.what();
            KN_WARN("CommandManager::processPendingCommands - EBadSyntax : %s", ostr.str().c_str());
          }
          catch (Miro::Exception const& e) {
            ostr << e.what();
            KN_WARN("CommandManager::processPendingCommands - Miro::exception : %s", ostr.str().c_str());
          }
          catch (std::exception const& e) {
            ostr << e.what();
            KN_WARN("CommandManager::processPendingCommands - std::exception : %s", ostr.str().c_str());
          }
          catch (...) {
            ostr << "Unknown exception from command completion.";
            KN_WARN("CommandManager::processPendingCommands - ... : %s", ostr.str().c_str());
          }

          // pause queue if command did not complete OK
          if (first->ack->completedStatus != rapid::ACK_COMPLETED_OK) {
            strncpy(first->ack->message, ostr.str().c_str(), 127);
            first->ack->message[127] = '\0';

            // @FIXME: need a way to check for non-queue commands
            //  if (first->cmd->cmdAction != QUEUE_BYPASS) {
            m_queue->suspendQueue(); // suspend queue on error
            //  }
          }

          queueStateUpdate = true;
          m_queue->sendAck(first->ack);
        }
        else { // not finished
          v.push_back(*first);
        }
      }

      // new pending cmd vector in case commands finished
      if (v.size() != m_commandVector.size()) {
        m_commandVector.swap(v);
      }
    }

    // activate all new commands
    {
      QueueSubsysImpl::CommandAckVector executableCmds = m_queue->executableCommands();

      if (!executableCmds.empty())
        queueStateUpdate = true;

      QueueSubsysImpl::CommandAckVector::const_iterator first, last = executableCmds.end();
      for (first = executableCmds.begin(); first != last; ++first) {
        FuturePtr result;
        AckPtr const& ack = first->ack;
        CommandPtr const& cmd = first->cmd;

        try {
          SubsystemMap::const_iterator subsys = m_subsystems.find(cmd->subsysName);
          if (subsys == m_subsystems.end()) {
            boost::throw_exception(rapid::EBadSyntax(string("Unknown subsystem: ") + cmd->subsysName));
          }

          first->ack->status = rapid::ACK_EXECUTING;
          first->ack->completedStatus = rapid::ACK_COMPLETED_NOT;
          first->ack->message[0] = '\0';
          m_queue->sendAck(ack);

          // execute
          cout << "cmd: "
               << first->cmd->subsysName << "->"
               << first->cmd->cmdName
               << endl;
          result = subsys->second->execute(*first->cmd);

          if (!result) {
            m_queue->evalQueueState();
            m_queue->publishQueueState();

            ack->status = rapid::ACK_COMPLETED;
            ack->completedStatus = rapid::ACK_COMPLETED_OK;
          }
          else {
            // push result to pending commands vector
            m_commandVector.push_back(PendingCommand(result, ack));
          }
        }
        catch (rapid::EBadSyntax const& e) {
          ack->status = rapid::ACK_COMPLETED;
          ack->completedStatus = rapid::ACK_COMPLETED_BAD_SYNTAX;
          strncpy(ack->message, e.what(), 127);
          ack->message[127] = '\0';
          KN_DEBUG("CommandManager::processPendingCommands - EBadSyntax : %s", ack->message);
        }
        catch (rapid::EExecFailed const& e) {
          m_queue->evalQueueState();
          m_queue->publishQueueState();

          ack->status = rapid::ACK_COMPLETED;
          ack->completedStatus = rapid::ACK_COMPLETED_EXEC_FAILED;
          strncpy(ack->message, e.what(), 127);
          ack->message[127] = '\0';
          KN_DEBUG("CommandManager::processPendingCommands - EExecFailed : %s", ack->message);
        }
        catch (rapid::EPermission const& e) {
          // @TODO: create an extra completion status for access permission failure
          ack->status = rapid::ACK_COMPLETED;
          ack->completedStatus = rapid::ACK_COMPLETED_EXEC_FAILED;
          strncpy(ack->message, e.what(), 127);
          ack->message[127] = '\0';
          KN_DEBUG("CommandManager::processPendingCommands - EPermission : %s", ack->message);
        }

        if (ack->status != rapid::ACK_EXECUTING) {

          // suspend queue on execution failure
          if (cmd->cmdAction != QUEUE_BYPASS &&
              ack->completedStatus != rapid::ACK_COMPLETED_NOT &&
              ack->completedStatus != rapid::ACK_COMPLETED_OK) {
            m_queue->suspendQueue();
          }
          m_queue->sendAck(ack);
        }
      }
    }

    // delete all completed, unreferenced and old-enough commands
    if (m_params->autoPurgeQueue) {
      QueueSubsysImpl::AckVector purged  = m_queue->purgeCommands(ACE_OS::gettimeofday() - m_params->queuePurgeCompletedTimeout);
      if (!purged.empty()) {
        queueStateUpdate = true;

        m_queue->unregisterAcks(purged);
      }
    }

    // update queue-state
    if (queueStateUpdate) {
      m_queue->evalQueueState();
      m_queue->publishQueueState();
    }
  }

  /**
   *
   */
  int
  CommandManager::svc()
  {
    kn::DdsTypedSupplier<rapid::CommandConfig>
    commandConfig(rapid::COMMAND_CONFIG_TOPIC +
                  m_params->dataBus.topicSuffix,
                  m_params->dataBus.publisherName,
                  m_params->dataBus.cmdConfigProfile,
                  m_params->dataBus.library,
                  m_entityName);

    exportCommandConfig(commandConfig.event());
    commandConfig.sendEvent();


    kn::DdsEventLoop eventLoop(m_entityName);

    eventLoop.connect<rapid::Command>(this, rapid::COMMAND_TOPIC +
                                      m_params->dataBus.topicSuffix,
                                      m_params->dataBus.subscriberName,
                                      m_params->dataBus.cmdProfile,
                                      m_params->dataBus.library);
    m_queue->connect(eventLoop);

    // enter processing loop
    MIRO_LOG(LL_NOTICE, "Entering (detached) rapid command manager loop.");
    ACE_Thread_Manager * mgr = this->thr_mgr();
    while (!mgr->testcancel(mgr->thr_self())) {

      // process command queue and async returns
      this->processPendingCommands();

      // 10Hz processing
      eventLoop.processEvents(kn::microseconds(100000));
    }

    KN_INFO("Exiting (detached) rapid command manager loop.");

    return 0;
  }
}
