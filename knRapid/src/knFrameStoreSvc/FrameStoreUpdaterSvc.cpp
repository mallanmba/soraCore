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
#include "FrameStoreUpdaterSvc.h"
#include "FrameStoreParameters.h"

#include "knFrameStore/FrameStoreSingleton.h"

#include "rapidFrameStore/FrameStoreInit.h"
#include "rapidFrameStore/FsConfigUpdater.h"
#include "rapidFrameStore/FsPositionUpdater.h"
#include "rapidFrameStore/FsJointUpdater.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/FrameStoreConfig.h"
#include "rapidDds/FrameStoreConfigSupport.h"
#include "rapidDds/PositionConfig.h"
#include "rapidDds/PositionConfigSupport.h"
#include "rapidDds/PositionSample.h"
#include "rapidDds/PositionSampleSupport.h"
#include "rapidDds/JointConfig.h"
#include "rapidDds/JointConfigSupport.h"
#include "rapidDds/JointSample.h"
#include "rapidDds/JointSampleSupport.h"

#include "miro/Log.h"
#include "miro/Configuration.h"
#include "miro/RobotParameters.h"
#include "knDds/DdsEventLoop.h"

#include "knFrameStore/FrameStore.h"

#include <ace/OS_NS_string.h>
#include <ace/Get_Opt.h>

#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>

namespace kn
{
  using namespace std;
  

  FrameStoreUpdaterSvc::FrameStoreUpdaterSvc() :
    m_params(NULL),
    m_verbose(false),
    m_frameStore(NULL)
  {
    MIRO_LOG_CTOR("kn::FrameStoreUpdaterSvc");
  }

  FrameStoreUpdaterSvc::~FrameStoreUpdaterSvc()
  {
    MIRO_LOG_DTOR("kn::FrameStoreUpdaterSvc");
  }

  int
  FrameStoreUpdaterSvc::init(int argc, ACE_TCHAR *argv[])
  {
    MIRO_LOG(LL_NOTICE, "kn::FrameStoreUpdaterSvc::init()");
    
    if (parseArgs(argc, argv) == -1)
      return -1;
    
    m_frameStore = FrameStoreSingleton::instance();

    this->activate();
    
    return 0;
  }

  int 
  FrameStoreUpdaterSvc::info(ACE_TCHAR **bufferp, size_t len) const
  {
    static const char i[] = "FrameStoreUpdater Service \n";

    if (*bufferp == 0)
      *bufferp = ACE::strnew(i);
    else 
      ACE_OS_String::strncpy(*bufferp, i, len);

    return ACE_OS_String::strlen(*bufferp);
  }
   
  int 
  FrameStoreUpdaterSvc::fini()
  {
    MIRO_LOG(LL_NOTICE, "kn::FrameStoreUpdaterSvc::fini()");

    this->thr_mgr()->cancel_task(this);
    this->wait();

    m_frameStore = NULL;
    m_params = NULL;

    MIRO_LOG(LL_NOTICE, "kn::FrameStoreUpdaterSvc::fini() done");

    return 0;
  }

  int
  FrameStoreUpdaterSvc::svc()
  {
    // set up RAPID frame-updaters
    rapid::FsConfigUpdater fsConfigUpdater(*m_frameStore);

    typedef boost::shared_ptr<rapid::FsPositionUpdater> FsPositionUpdaterPtr;
    typedef boost::shared_ptr<rapid::FsJointUpdater> FsJointUpdaterPtr;

    std::vector<FsPositionUpdaterPtr>  fsPositionUpdaters;
    std::vector<FsJointUpdaterPtr> fsJointUpdaters;
    
    kn::DdsEventLoop eventLoop;
    
    
    // connect RAPID frame-updaters for local-robot updates
    if (m_params->frameStoreConfig.enabled) {      
      eventLoop.connect<rapid::FrameStoreConfig>(&fsConfigUpdater, rapid::FRAMESTORE_CONFIG_TOPIC +
                                                 m_params->frameStoreConfig.topicSuffix,
                                                 m_params->frameStoreConfig.parentNode,
                                                 m_params->frameStoreConfig.profile,
                                                 m_params->frameStoreConfig.library);
    }
    
    for (unsigned int i = 0; i < m_params->positionUpdaters.size(); ++i) {
      fsPositionUpdaters.push_back(FsPositionUpdaterPtr(new rapid::FsPositionUpdater(*m_frameStore, 
                                                                                     m_params->positionUpdaters[i])));
      fsPositionUpdaters.back()->connect(eventLoop);
    }
    
    for (unsigned int i = 0; i < m_params->jointUpdaters.size(); ++i) {
      fsJointUpdaters.push_back(FsJointUpdaterPtr(new rapid::FsJointUpdater(*m_frameStore,
                                                                            m_params->jointUpdaters[i])));
      fsJointUpdaters.back()->connect(eventLoop);
    }

    // enter processing loop
    MIRO_LOG(LL_NOTICE, "Entering (detached) rapid framestore update loop.");
    ACE_Thread_Manager * mgr = this->thr_mgr();
    while (!mgr->testcancel(mgr->thr_self())) {

      // 10Hz processing
      eventLoop.processEvents(ACE_Time_Value(0, 100000));
    }

    MIRO_LOG(LL_NOTICE, "Exiting (detached) rapid framestore updater loop.");

    return 0;
  }

  int
  FrameStoreUpdaterSvc::parseArgs(int& argc, char * argv[])
  {
    int rc = 0;
    int c;

    m_verbose = 0;
    
    // initialize parameters from command line
    ACE_Get_Opt get_opts (argc, argv, "v?");
  
    while ((c = get_opts()) != -1) {
      switch (c) {
      case 'v':
        ++m_verbose;
	break;
      case '?':
      default:
        ACE_OS::last_error(EINVAL);
        rc = -1;
      }
    }

    // debug output
    if (rc != 0) {
      cerr << "usage: " << argv[0] << " [-n name] [-v?]\n"
           << "  -v verbose mode\n"
           << "  -? help: print this text and stop" << endl;
    }
    
    // initialize parameters with global instance
    m_params =  FrameStoreUpdaterSvcParameters::instance();
    // initialize parameters from config file
    Miro::ConfigDocument * config = Miro::Configuration::document();
    config->setSection("FrameStore");
    config->getParameters("kn::FrameStoreUpdaterSvcParameters", *m_params);
    
    if (m_verbose) {
      cerr << "FrameStoreUpdater Parameters: " << endl
	   << *m_params << endl;
    }

    return rc;
  }
}

// Create an object that will insert the <Timer_Service> into the list
// of statically linked services that the <ACE_Service_Config> will
// process at run-time.
ACE_FACTORY_NAMESPACE_DEFINE (knFrameStoreSvc, kn_FrameStoreUpdaterSvc, kn::FrameStoreUpdaterSvc);
ACE_STATIC_SVC_DEFINE (kn_FrameStoreUpdaterSvc,
		       ACE_TEXT("FrameStoreUpdaterSvc"),
		       ACE_SVC_OBJ_T,
		       &ACE_SVC_NAME(kn_FrameStoreUpdaterSvc),
		       ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
		       0);
ACE_STATIC_SVC_REQUIRE(kn_FrameStoreUpdaterSvc);
