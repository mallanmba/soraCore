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
#include "CommandManagerSvc.h"
#include "CommandManager.h"
#include "CommandingParameters.h"

#include "miro/Log.h"
#include "miro/Configuration.h"

#include <ace/OS_NS_string.h>
#include <ace/Dynamic_Service.h>
#include <ace/Get_Opt.h>

namespace rapid
{
  using namespace std;

  CommandManagerSvc::CommandManagerSvc() :
    m_params(NULL),
    m_verbose(0)
  {
    MIRO_LOG_CTOR("CommandManagerSvc");
  }

  int
  CommandManagerSvc::init(int argc, ACE_TCHAR *argv[])
  {
    MIRO_LOG(LL_NOTICE, "rapid::CommandManagerSvc::init()");

    // parasing the arguments
    if (parseArgs(argc, argv) != 0)
      return -1;

    try {
      RapidSubsystemRepository * repo =  RapidSubsystemRepository::instance();
        
      m_cmdMgr.reset(new CommandManager(m_params, "CommandManagerSvc"));

      RapidSubsystemRepository::InstanceMap instances = repo->exportMap();

      RapidSubsystemRepository::InstanceMap::const_iterator first, last = instances.end();
      for (first = instances.begin(); first != last; ++first) {
        m_cmdMgr->addSubsystem(first->second);
      }
      m_cmdMgr->activate();
    }
    catch (Miro::Exception ex) {
      MIRO_LOG_OSTR(LL_ERROR, "Creation of CommandManagerSvc failed:\n  " << ex);
      return -1;
    }

    return 0;
  }

  int
  CommandManagerSvc::info(ACE_TCHAR **bufferp, size_t len) const
  {
    char const * i = "rapid Rapid Sequencer Service \n";

    if (*bufferp == 0)
      *bufferp = ACE::strnew(i);
    else
      ACE_OS_String::strncpy(*bufferp, i, len);

    return ACE_OS_String::strlen(*bufferp);
  }

  int
  CommandManagerSvc::fini()
  {
    MIRO_LOG(LL_NOTICE, "rapid::CommandManagerSvc::fini()");

    if (m_cmdMgr->thr_mgr()) {
      m_cmdMgr->thr_mgr()->cancel_task(m_cmdMgr.get());
      m_cmdMgr->wait();
    }
    
    m_cmdMgr.reset();
    m_params = NULL;

    MIRO_LOG(LL_NOTICE, "rapid::CommandManagerSvc::fini() done");
    return 0;
  }

  int
  CommandManagerSvc::parseArgs(int& argc, char* argv[])
  {
    int rc = 0;
    int c;

    m_verbose = 0;

    // initialize parameters with global instance
    m_params = CommandManagerSvcParameters::instance();
    // reset defaults
    CommandManagerSvcParameters defaultParams;
    *m_params = defaultParams;

    // initialize parameters from config file
    Miro::ConfigDocument * config = Miro::Configuration::document();
    config->setSection("Rapid");
    config->getParameters("rapid::CommandManagerSvcParameters", *m_params);

    // initialize parameters from command line
    ACE_Get_Opt get_opts(argc, argv, "CIm:MpQSs:v?");
    
    while ((c = get_opts()) != -1) {
      switch (c) {
      case 'C':
        m_params->accessControl = false;
        break;
      case 's':
        m_params->dataBus.topicSuffix = std::string("-") + get_opts.optarg;
        break;
      case 'Q':
        m_params->queueImpl.queuing = false;
        break;
      case 'S':
        m_params->queueImpl.startQueueSuspended = true;
        break;
      case 'I':
        m_params->queueImpl.suspendQueueOnIdle = true;
        break;
      case 'm':
        m_params->queueImpl.macroMgr.persistencyFile =  get_opts.optarg;
        break;
      case 'v':
        ++m_verbose;
        break;
      case '?':
      default:
        cerr << "usage: " << argv[0] << "[-AQv?]" << endl
             << "  -m macro persistency file" << endl
             << "  -C disable access control" << endl
             << "  -S start queue suspended" << endl
             << "  -I suspend queue on idle" << endl
             << "  -Q disable queuing" << endl
             << "  -v verbose mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
      }
    }

    if (m_verbose) {
      cerr << "CommandManagerSvc parameters:" << endl;
      cerr << *m_params << endl;
    }
    return rc;
  }

}

// Create an object that will insert the <Timer_Service> into the list
// of statically linked services that the <ACE_Service_Config> will
// process at run-time.
ACE_FACTORY_NAMESPACE_DEFINE(rapidCommanding, rapid_CommandManagerSvc, rapid::CommandManagerSvc);
ACE_STATIC_SVC_DEFINE (rapid_CommandManagerSvc,
		       ACE_TEXT("CommandManagerSvc"),
		       ACE_SVC_OBJ_T,
		       &ACE_SVC_NAME(rapid_CommandManagerSvc),
		       ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
		       0);
ACE_STATIC_SVC_REQUIRE(rapid_CommandManagerSvc);
