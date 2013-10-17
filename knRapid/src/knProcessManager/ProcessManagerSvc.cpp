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
#include "ProcessManagerSvc.h"
#include "ProcessManagerParameters.h"
#include "ProcessManagerHelper.h"
#include "ProcMgrImpl.h"

#include "rapidExtDds/ExtConstants.h"
#include "rapidExtDds/ProcessIoSample.h"
#include "rapidExtDds/ProcessIoSampleSupport.h"
#include "rapidExtDds/ProcessManagerConfig.h"
#include "rapidExtDds/ProcessManagerConfigSupport.h"
#include "rapidExtDds/ProcessManagerState.h"
#include "rapidExtDds/ProcessManagerStateSupport.h"

#include "rapidUtil/RapidHelper.h"
#include "rapidCommanding/CommandManager.h"

#include "miro/Log.h"
#include "miro/Configuration.h"
#include "miro/TimeHelper.h"

#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsTypedConnector.h"
#include "miro/RobotParameters.h"

#include <ace/Process.h>
#include <ace/Process_Manager.h>
#include <ace/Service_Config.h>
#include <ace/Pipe.h>
#include <ace/Arg_Shifter.h>
#include <ace/Get_Opt.h>
#include <ace/OS_NS_unistd.h>

#include <sstream>
#include <iostream>
#include <deque>


namespace kn
{
  using namespace std;
  using namespace rapid;

  ProcessManagerSvc::ProcessManagerSvc() :
    m_mutex(),
    m_condition(m_mutex),
    m_params(NULL),
    m_configParams(NULL),
    m_processManager(NULL),
    m_config(NULL),
    m_state(NULL),
    m_commandInterface(false),
    m_listenToConfigMessages(false),
    m_verbose(false),
    m_configPublisher(NULL),
    m_statePublisher(NULL),
    m_configConnector(NULL)
  {
  }
  
  ProcessManagerSvc::~ProcessManagerSvc()
  {
  }

  int
  ProcessManagerSvc::init(int argc, ACE_TCHAR * argv[])
  {
    MIRO_LOG(LL_NOTICE, "ProcessManagerSvc::init()");
    
    // read .xml config and publish config
    if (parseArgs(argc, argv) != 0)
      return -1;

    this->activate();

    m_processManager = new ACE_Process_Manager(10, reactor());
    m_timerId = reactor()->schedule_timer(this, NULL, m_params->aliveTimer, m_params->aliveTimer);
    m_processId = m_processManager->register_handler(this);
    
    m_configPublisher = new ConfigPublisher(rapid::ext::PROCESSMANAGER_CONFIG_TOPIC + 
                                            m_params->managerConfigWriter.topicSuffix,
                                            m_params->managerConfigWriter.parentNode,
                                            m_params->managerConfigWriter.profile,
                                            m_params->managerConfigWriter.library);

    m_config = &m_configPublisher->event();
    RapidHelper::initHeader(m_config->hdr);

    m_statePublisher = new StatePublisher(rapid::ext::PROCESSMANAGER_STATE_TOPIC +
                                          m_params->managerStateWriter.topicSuffix,
                                          m_params->managerStateWriter.parentNode,
                                          m_params->managerStateWriter.profile,
                                          m_params->managerStateWriter.library);
    m_state = &m_statePublisher->event();
    RapidHelper::initHeader(m_state->hdr);

    m_params->commandManager.queueImpl.queuing = false;
    m_params->commandManager.accessControl = false;
    
    m_cmdMgr = new rapid::CommandManager(&m_params->commandManager);
    RapidSubsystemPtr procMgrImpl(new  kn::ProcMgrImpl(this));
    
    m_cmdMgr->addSubsystem(procMgrImpl);
    m_cmdMgr->activate();

    rapid::ext::ProcessManagerConfig * config = 
      ProcessManagerHelper::createConfigFromParams(*m_configParams);

    if (m_listenToConfigMessages) {
      m_configConnector = new ConfigConnector(this, 
                                              rapid::ext::PROCESSMANAGER_CONFIG_TOPIC + 
                                              m_params->managerConfigWriter.topicSuffix,
                                              m_params->managerConfigWriter.parentNode,
                                              m_params->managerConfigWriter.profile,
                                              m_params->managerConfigWriter.library);
    }

    config->hdr.serial = m_config->hdr.serial + 1;
    
    //    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);
    int rc = init(config);
    rapid::ext::ProcessManagerConfigTypeSupport::delete_data(config);

    return rc;
  }

  int
  ProcessManagerSvc::init(rapid::ext::ProcessManagerConfig const * config)
  {
    // only accept new config, if serial differs
    if (m_config->hdr.serial == config->hdr.serial)
      return 0;

    // check/create log-path

    // check processes
    for (int i = 0; i < config->processes.length(); ++i) {

      /* only accept config if binaryName is given */
      if (strlen(config->processes[i].binaryName) == 0) {
        MIRO_LOG_OSTR(LL_ERROR, "ProcessManagerSvc::init() no binaryName given for process: " << i);
        return -1;
      }

      /* only accept config if binaryName is accessible */
      string path = config->processes[i].workingDirectory;
      string file = config->processes[i].binaryName;
      int fd = ::open((path + "/" + file).c_str(), O_RDONLY);
	
      if (fd != -1) {
        close(fd);
      } else {
        MIRO_LOG_OSTR(LL_ERROR, 
                      "ProcessManagerSvc::init() Unable to add process '" << 
                      config->processes[i].name << 
                      "': Unable to open file: " << file);
        return -1;
      }
    }
    
    // init config
    rapid::ext::ProcessManagerConfigTypeSupport::copy_data(m_config, config);
    RapidHelper::updateHeader(m_config->hdr);
    m_configPublisher->sendEvent();

    // init process data vector
    m_processes.resize(m_config->processes.length());
    ProcessVector::iterator first, last = m_processes.end();
    int idx = 0;
    for (first = m_processes.begin(); first != last; ++first, ++idx) {

      stringstream idxSuffix;
      idxSuffix << "-" << idx;

      (*first) = new ProcessData();

      (*first)->stdOutPublisher = new IOPublisher(rapid::ext::PROCESSIO_SAMPLE_TOPIC + idxSuffix.str() + 
                                                  m_params->ioSampleWriter.topicSuffix,
                                                  m_params->ioSampleWriter.parentNode,
                                                  m_params->ioSampleWriter.profile,
                                                  m_params->ioSampleWriter.library);
      RapidHelper::initHeader((*first)->stdOutPublisher->event().hdr, m_params->name);
      (*first)->stdErrPublisher = new IOPublisher(rapid::ext::PROCESSIO_SAMPLE_TOPIC + idxSuffix.str() + 
                                                  m_params->ioSampleWriter.topicSuffix,
                                                  m_params->ioSampleWriter.parentNode,
                                                  m_params->ioSampleWriter.profile,
                                                  m_params->ioSampleWriter.library);
      RapidHelper::initHeader((*first)->stdErrPublisher->event().hdr, m_params->name);
      
      // init processId, stream, lineNumber
      (*first)->stdOutPublisher->event().processIdx = idx;
      (*first)->stdOutPublisher->event().stream = rapid::ext::PROCESS_STDOUT;
      
      (*first)->stdErrPublisher->event().processIdx = idx;
      (*first)->stdErrPublisher->event().stream = rapid::ext::PROCESS_STDERR;
    }

    // init process state vector
    m_state->processStatus.maximum(m_processes.size());
    m_state->processStatus.length(m_processes.size());
    for (int i = 0; i < m_state->processStatus.length(); ++i) {
      m_state->processStatus[i] = rapid::ext::PROCESS_STATE_STOPPED;
    }

    m_statePublisher->sendEvent();

    for (int i = 0; i < m_config->processes.length(); ++i) {
      if (m_config->processes[i].startOnInit) {
        startProcess(i);
      }
      if (m_config->processes[i].waitOnInit) {
        ACE_Time_Value * deadline = NULL;
        ACE_Time_Value timeout = ACE_Time_Value::zero;
        if (m_config->processes[i].startupTimeout > 0) {
          timeout.msec(m_config->processes[i].startupTimeout);
          timeout += ACE_OS::gettimeofday();
          deadline = &timeout;
        }
	    
        ACE_Thread_Manager * mgr = this->thr_mgr();
        while (m_state->processStatus[i] == rapid::ext::PROCESS_STATE_STARTING) {
          if (mgr != NULL && mgr->testcancel(mgr->thr_self())) {
            return -1;
          }
          if (m_condition.wait(deadline) == -1) {
            if (errno == ETIME) {
              break;
            }
          }
        }

        if (m_state->processStatus[i] != rapid::ext::PROCESS_STATE_RUNNING) {
          MIRO_LOG_OSTR(LL_CRITICAL, 
                        "kn::ProcessManager failed to start process: " << 
                        m_config->processes[i].name);
          return -1;
        }
      }
    }
    return 0;
  }

  int
  ProcessManagerSvc::fini()
  {
    MIRO_LOG_DTOR("ProcessManagerSvc");

    m_cmdMgr->thr_mgr()->cancel_task(m_cmdMgr);
    m_cmdMgr->wait();
    delete m_cmdMgr;

    shutdown(); 

    reactor()->cancel_timer(m_timerId);
    //    m_processManager->remove_handler(m_processId);

    this->thr_mgr()->cancel_task(this);
    this->wait();

    ProcessVector::iterator first, last = m_processes.end();
    for (first = m_processes.begin(); first != last; ++first) {
      delete (*first)->stdOutPublisher;
      delete (*first)->stdErrPublisher;
      delete *first;
    }

    delete m_configPublisher;
    m_configPublisher = NULL;
    delete m_statePublisher;
    m_statePublisher = NULL;

    delete m_processManager;
    m_processManager = NULL;
    delete m_params;
    m_params = NULL;
    
    return 0;
  }
  
  void
  ProcessManagerSvc::shutdown()
  {
    MIRO_LOG(LL_NOTICE, "Sending processes TERM signal (waiting 5 seconds).");
    int i = 0;
    ProcessVector::iterator first, last = m_processes.end();
    for (first = m_processes.begin(); first != last; ++first, ++i) {
      rapid::ext::ProcessStatus& status = m_state->processStatus[i];

      if (status != rapid::ext::PROCESS_STATE_STOPPED) {
        ACE_Time_Value tvLocal(5, 0);
	
        /* terminate process */
        MIRO_LOG_OSTR(LL_NOTICE, "Sending process " << (*first)->pid << " the TERM signal");
        m_processManager->terminate((*first)->pid, SIGTERM);
        pid_t rc = m_processManager->wait((*first)->pid, tvLocal);
	
        /* kill pid, if it a timeout (wait) occured */
        if (rc == 0) {
          MIRO_LOG_OSTR(LL_NOTICE, "Killing process " << (*first)->pid);
          m_processManager->terminate((*first)->pid);
        }
      }
    }
    
    MIRO_LOG(LL_NOTICE, "Waiting for processes to exit (waiting 5 seconds).");
    m_processManager->wait(ACE_Time_Value(5));
    
    while (m_processes.size() > 0) {
      delete m_processes.back();
      m_processes.pop_back();
    }
  }
  
  void
  ProcessManagerSvc::operator()(rapid::ext::ProcessManagerConfig const * config)
  {
    ACE_Time_Value t = ACE_OS::gettimeofday() + ACE_Time_Value(1);

    if (m_mutex.acquire(&t) == 0) {

      //this config is for us?
      if (config->hdr.assetName == Miro::RobotParameters::instance()->name &&
          config->hdr.srcName == m_params->name &&
          config->hdr.serial != m_config->hdr.serial) {
        shutdown();

        // sleep till re-init delay is over
        ACE_Time_Value timeout(m_params->reinitDelay);
        timeout += ACE_OS::gettimeofday();
        while (true) {
          if (m_condition.wait(&timeout) == -1) {
            if (errno == ETIME)
              break;
          }
        }
        
        if (init(config) != 0)
          MIRO_LOG(LL_ERROR, "ProcessManager config update failed.");
      }
      m_mutex.release();
    }
    else {
      MIRO_LOG(LL_ERROR, "ProcessManager unresponsive");
    }
  }

  int
  ProcessManagerSvc::parseArgs(int argc, ACE_TCHAR * argv[])
  {
    int rc = 0;
    int c;

    m_params = new ProcessManagerSvcParameters();
    m_configParams = new rapid::ext::ProcessManagerConfigParameters();

    m_commandInterface = false;
    m_listenToConfigMessages = false;
    m_verbose = false;

    // parse name argument, as it is used for reference into config file
    ACE_Arg_Shifter arg_shifter (argc, argv);
    while (arg_shifter.is_anything_left ()) {
      const ACE_TCHAR *current_arg = arg_shifter.get_current ();

      if (ACE_OS::strcasecmp(current_arg, "-n") == 0) {
        arg_shifter.consume_arg();
        if (arg_shifter.is_parameter_next()) {
          m_params->name = arg_shifter.get_current ();
          arg_shifter.consume_arg();
        }
      }
      else
        arg_shifter.ignore_arg ();
    }

    m_params->commandManager.dataBus.topicSuffix = "-" + m_params->name;

    // initialize parameters from config file
    Miro::ConfigDocument * doc = Miro::Configuration::document();
    doc->setSection("Processes");
    doc->getType("kn::ProcessManagerSvcParameters", m_params->name, *m_params);
    doc->getType("rapid::ext::ProcessManagerConfigParameters", m_params->defaultConfig, *m_configParams);

    if (m_configParams->processes.empty()) {
      MIRO_LOG(LL_WARNING, "ProcessManager starting with empty configuration.");
    }

    // initialize parameters from command line
    ACE_Get_Opt get_opts(argc, argv, "civ?");
  
    while ((c = get_opts()) != -1) {
      switch (c) {
      case 'i':
        m_commandInterface = true;
        break;
      case 'c':
        m_listenToConfigMessages = true;
        break;
      case 'v':
        m_verbose = true;
        break;
      case '?':
      default:
        cerr << "usage: " << argv[0] << " [-icv?]" << endl
             << "  -i instanciate ProcessManager interface" << endl
             << "  -c listen to config messages" << endl
             << "  -v verbose mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
      }
    }

    if (m_verbose) {
      cerr << "Remote config enabled: " << m_listenToConfigMessages << endl 
           << "ProcessManagerSvc parameters:" << endl
           << *m_params << endl
           << "ProcessManagerConfig parameters:" << endl
           << *m_configParams << endl;
    }

    return rc;
  }


  int 
  ProcessManagerSvc::handle_timeout(const ACE_Time_Value &, const void *) 
  {
    if (!m_mutex.tryacquire()) {
      ProcessVector::const_iterator first, last = m_processes.end();
      int i = 0;
      for (first = m_processes.begin(); first != last; ++first, ++i) {
        // process iteration
        ProcessData *pi = *first;
        rapid::ext::ProcessConfig& conf = m_config->processes[i];
        rapid::ext::ProcessStatus& status = m_state->processStatus[i];
        
        // evaluate process state
        if (strlen(conf.aliveInterface) != 0) { // get corba interface state
          if (( (status == rapid::ext::PROCESS_STATE_STARTING ||
                 status == rapid::ext::PROCESS_STATE_RESTARTING) && 
                strlen(conf.runningMatch) == 0) ||
              (status == rapid::ext::PROCESS_STATE_RUNNING) ||
              (status == rapid::ext::PROCESS_STATE_UNAVAIL)) {
            
            // check interface state
            // alternative implementation could check for topic liveliness


            //     updateStatus(status, rapid::ext::PROCESS_STATE_UNAVAIL);

          }
        }
        
        // validate string match
        if (strlen(conf.runningMatch) > 0 &&
            (status == rapid::ext::PROCESS_STATE_STARTING ||
             status == rapid::ext::PROCESS_STATE_RESTARTING)) {
          if (pi->stdOutPipe->matched() ||
              pi->stdErrPipe->matched()) {
            updateStatus(status, rapid::ext::PROCESS_STATE_RUNNING);	    
          }
        }
      }
      m_mutex.release();
    } 
    else {
      MIRO_LOG(LL_WARNING, "Busy, skipped mutex for reading in ProcessManagerSvc::handle_timeout");
    }
    
    return 0;
  } 

  int 
  ProcessManagerSvc::handle_exit(ACE_Process *proc) 
  {
    if (!m_mutex.acquire_read())
    { // search process 
      int id = 0;
      ProcessVector::const_iterator first, last = m_processes.end();
      for (first = m_processes.begin(); first != last; ++first, ++id) {
        if ((*first)->process == proc) 
          break;
      }

      if (first == last) {
        MIRO_LOG(LL_ERROR, "handle_exit() called on unkonwn process id.");
        return 0;
      }

      ProcessData& data = *m_processes[id];
      rapid::ext::ProcessConfig& config = m_config->processes[id];
      rapid::ext::ProcessStatus& status = m_state->processStatus[id];

      if (status != rapid::ext::PROCESS_STATE_KILLED) {
        updateStatus(status,
                     (status == rapid::ext::PROCESS_STATE_STOPPING)?
                     rapid::ext::PROCESS_STATE_STOPPED :
                     (config.selfTerminating)?
                     rapid::ext::PROCESS_STATE_COMPLETED :
                     rapid::ext::PROCESS_STATE_STOPPED_UNEXPECTEDLY);
      }
      data.options->set_handles(ACE_STDIN);
      
      ACE_exitcode ec = proc->exit_code();
      
      stringstream s;
      stringstream s2;
      if (ec != 0 && ec != 256) {
        s << "Exit code: " << ec << endl;
        s2 << "This might correspond to singal: " << strsignal(proc->exit_code()) << endl;
      }
      else {
        s << "Return value: " << proc->return_value() << endl;
        s2 << "This looks like a clean exit. Congratulations!" << endl;
      }
      
      data.stdOutPipe->addLine(s.str());
      data.stdOutPipe->addLine(s2.str());
      
      data.stdErrPipe->addLine(s.str());
      data.stdErrPipe->addLine(s2.str());
      
      close(data.stdOut);
      close(data.stdErr);
      
      data.stdOut = -1;
      data.stdErr = -1;
      
      delete data.stdOutPipe;
      data.stdOutPipe = 0;
      
      delete data.stdErrPipe;
      data.stdErrPipe = 0;
      
      if (strlen(config.name) == 0) {
        MIRO_LOG_OSTR(LL_NOTICE, "Unnamed process exited (PID=" << proc->getpid() << ")");
      }
      else {
        /* increment unrequested shutdowns counter by one */
        MIRO_LOG_OSTR(LL_NOTICE,
                      "Process '" << config.name << "' exited (PID=" << proc->getpid() << ", exitcode=" << proc->exit_code() << ")");
      }
	
      /* restart process if no shutdown was requested and restartsOnFailure > 0 */
      if (!data.shutdownRequested &&
          config.restartsOnFailure > 0 &&
          data.autoRestartCount < config.restartsOnFailure) {

        ++data.autoRestartCount;
        /* leave restart count as it is */
        MIRO_LOG_OSTR(LL_WARNING, 
                      "Restarting '" << config.name << 
                      " due to abnormal exit', restartCount=" << data.autoRestartCount);
        startProcess(id, true);
      }
      m_mutex.release();
    }
    else
      MIRO_LOG(LL_WARNING, "Busy, skipped mutex for reading in ProcessManagerSvc::handle_exit.");
  
    return 0;
  }
  
  /* support for macros */
  void
  ProcessManagerSvc::expand(std::string& str) 
  {
    size_t pos;
    
    /* $(NAME) is replaces by system name (hostname) */
    while ((pos = str.find("$(NAME)", 0)) != std::string::npos)
      str.replace(pos, 7, Miro::RobotParameters::instance()->name);
  }

  int
  ProcessManagerSvc::setCommandLine(int id, char const * cmdLine)
  {
    int rc = 0;
    
    ACE_Guard<ACE_Recursive_Thread_Mutex> m_guard(m_mutex);

    if (id < 0 || 
        (int)m_processes.size() <= id ||
        strlen(cmdLine) > 255)
      return -3;

    rapid::ext::ProcessConfig& config = m_config->processes[id];
    rapid::ext::ProcessStatus& status = m_state->processStatus[id];

    if (status != rapid::ext::PROCESS_STATE_COMPLETED &&
        status != rapid::ext::PROCESS_STATE_STOPPED &&
        status != rapid::ext::PROCESS_STATE_STOPPED_UNEXPECTEDLY &&
        status != rapid::ext::PROCESS_STATE_KILLED)
      return -2;

    strcpy(config.commandLineParams, cmdLine);

    RapidHelper::updateHeader(m_config->hdr);
    ++m_config->hdr.serial;

    m_configPublisher->sendEvent();

    return rc;
  }
  
  /* start process defined in pi */
  int
  ProcessManagerSvc::startProcess(int id, bool leaveRestartCounter) 
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> m_guard(m_mutex);

    if (id < 0 || 
        (int)m_processes.size() <= id)
      return -3;

    ProcessData& data = *m_processes[id];
    rapid::ext::ProcessConfig& config = m_config->processes[id];
    rapid::ext::ProcessStatus& status = m_state->processStatus[id];

    if (status != rapid::ext::PROCESS_STATE_COMPLETED &&
        status != rapid::ext::PROCESS_STATE_STOPPED &&
        status != rapid::ext::PROCESS_STATE_STOPPED_UNEXPECTEDLY &&
        status != rapid::ext::PROCESS_STATE_KILLED)
      return -2;
    
    string timeString = Miro::timeStringSec();
    string const& logPath = m_params->logPath;
    string logfile    = logPath + "/" + config.name + "-" + timeString + ".cout";
    string errlogfile = logPath + "/" + config.name + "-" + timeString + ".cerr";
    
    MIRO_LOG_OSTR(LL_NOTICE, "logfile: " << logfile);	
    MIRO_LOG_OSTR(LL_NOTICE, "errlogfile: " << errlogfile);
    
    // reset line-number count
    data.stdErrPublisher->event().lineNumber = 0;
    data.stdOutPublisher->event().lineNumber = 0;

    data.stdOut            = ::open(logfile.c_str(), O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    data.stdErr            = ::open(errlogfile.c_str(), O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    data.stdOutPipe        = new PipeHandler(reactor(), data.stdOut, data.stdOutPublisher, config.runningMatch);
    data.stdErrPipe        = new PipeHandler(reactor(), data.stdErr, data.stdErrPublisher, config.runningMatch);

    data.options->set_handles(ACE_STDIN,
                              data.stdOutPipe->get_pipe()->write_handle(),
                              data.stdErrPipe->get_pipe()->write_handle());
    data.options->working_directory(config.workingDirectory);
    for (int i = 0; i < config.environment.length(); ++i) {
      data.options->setenv(config.environment[i]);
    }
    /* only accept config if binaryName is accessible */
    string cmdLine = config.binaryName;
    cmdLine += " ";
    cmdLine += config.commandLineParams;
    data.options->command_line(cmdLine.c_str());

    data.shutdownRequested = false;
    if (!leaveRestartCounter)
      data.autoRestartCount = 0;
    data.pid               = m_processManager->spawn(data.process, *data.options);
    
    MIRO_LOG_OSTR(LL_NOTICE, "Starting '" << config.name << "'");
    
    string loglink = logPath + "/" + config.name + ".log";
    string errloglink = logPath + "/" + config.name + ".err.log";
    
    remove(loglink.c_str());
    remove(errloglink.c_str());
    
    symlink(logfile.c_str(), loglink.c_str());
    symlink(errlogfile.c_str(), errloglink.c_str());
  
    updateStatus(status, 
                 (leaveRestartCounter)?
                 rapid::ext::PROCESS_STATE_RESTARTING : 
                 rapid::ext::PROCESS_STATE_STARTING);
    return 0;
  }
  
  
  /* stop process defined in pi, set restart bit to 'restart' */
  int
  ProcessManagerSvc::stopProcess(int id) 
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    if (id < 0 || 
        (int)m_processes.size() <= id)
      return -3;

    ProcessData& data = *m_processes[id];
    rapid::ext::ProcessConfig& config = m_config->processes[id];
    rapid::ext::ProcessStatus& status = m_state->processStatus[id];

    int rc = 0;
    if (status != rapid::ext::PROCESS_STATE_COMPLETED &&
        status != rapid::ext::PROCESS_STATE_STOPPED &&
        status != rapid::ext::PROCESS_STATE_STOPPED_UNEXPECTEDLY &&
        status != rapid::ext::PROCESS_STATE_KILLED) {
      updateStatus(status, rapid::ext::PROCESS_STATE_STOPPING);
      data.shutdownRequested = true;
      data.autoRestartCount  = 0;
      
      MIRO_LOG_OSTR(LL_NOTICE,
                    "Stopping '" << config.name << "'");
      
      rc = m_processManager->terminate(data.process->getpid(), SIGTERM);
    }
    else {
      rc = -2;
    }
    
    return rc;
  }
  
  int
  ProcessManagerSvc::killProcess(int id) 
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    if (id < 0 || 
        (int)m_processes.size() <= id)
      return -3;

    ProcessData& data = *m_processes[id];
    rapid::ext::ProcessConfig& config = m_config->processes[id];
    rapid::ext::ProcessStatus& status = m_state->processStatus[id];

    int rc = 0;
    if (status != rapid::ext::PROCESS_STATE_COMPLETED &&
        status != rapid::ext::PROCESS_STATE_STOPPED &&
        status != rapid::ext::PROCESS_STATE_STOPPED_UNEXPECTEDLY &&
        status != rapid::ext::PROCESS_STATE_KILLED) {
      updateStatus(status, rapid::ext::PROCESS_STATE_KILLED);
      data.shutdownRequested = true;
      data.autoRestartCount  = 0;
      
      rc = m_processManager->terminate(data.process->getpid());
      
      MIRO_LOG_OSTR(LL_NOTICE, "Sent SIGKILL to '" << config.name << "'");
      
      /* killall hack begin */
      //PRINT("Now really killing all instances of " << pi->name << " using killall");
      
      //const ACE_TCHAR *killall[] = { "/usr/bin/killall", pi->name.c_str(), NULL };
      //retrun ACE_OS::fork_exec((ACE_TCHAR **)killall);
      /* killall hack end */
    }
    else {
      rc = -2;
    }
    return rc;
  }

  void
  ProcessManagerSvc::updateStatus(rapid::ext::ProcessStatus& status, rapid::ext::ProcessStatus newStatus)
  {
    if (status != newStatus) {
      status = newStatus;
      RapidHelper::updateHeader(m_state->hdr);
      m_statePublisher->sendEvent();
      m_condition.broadcast();
    }
  }
}

ACE_FACTORY_NAMESPACE_DEFINE (knProcessManager, kn_ProcessManagerSvc, kn::ProcessManagerSvc);
ACE_STATIC_SVC_DEFINE (kn_ProcessManagerSvc,
                       ACE_TEXT("ProcessManagerSvc"),
                       ACE_SVC_OBJ_T,
                       &ACE_SVC_NAME(kn_ProcessManagerSvc),
                       ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
                       0);
ACE_STATIC_SVC_REQUIRE(kn_ProcessManagerSvc);
