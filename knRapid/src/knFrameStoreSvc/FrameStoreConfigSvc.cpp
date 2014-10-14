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
#include "FrameStoreConfigSvc.h"
#include "FrameStoreParameters.h"

#include "knFrameStore/FrameStoreSingleton.h"

#include "rapidFrameStore/FrameStoreInit.h"
#ifdef RTIDDS_FOUND
#  include "rapidDds/RapidConstants.h"
#  include "rapidDds/FrameStoreConfig.h"
#  include "rapidDds/FrameStoreConfigSupport.h"

#  include "knDds/DdsTypedSupplier.h"
#endif

#include "miro/Log.h"
#include "miro/Configuration.h"
#include "miro/RobotParameters.h"

#include "knFrameStore/FrameStore.h"

#include <ace/OS_NS_string.h>
#include <ace/Get_Opt.h>

#include <iostream>

namespace kn
{
  using namespace std;
  
  const char* svcName = "FrameStoreConfigSvc";
  
  FrameStoreConfigSvc::FrameStoreConfigSvc() :
      m_params(NULL),
      m_verbose(false),
      m_fsConfigPublisher(NULL)
  {
    MIRO_LOG_CTOR("kn::FrameStoreConfigSvc");
  }

  FrameStoreConfigSvc::~FrameStoreConfigSvc()
  {
    MIRO_LOG_DTOR("kn::FrameStoreConfigSvc");
  }

  int
  FrameStoreConfigSvc::init(int argc, ACE_TCHAR *argv[])
  {
    MIRO_LOG(LL_NOTICE, "kn::FrameStoreConfigSvc::init()");

    if (parseArgs(argc, argv) == -1)
      return -1;

    // set up base frames
    // set up configuration frames
    string const& robotName = Miro::RobotParameters::instance()->name;
    rapid::FrameStoreInit frameStoreInit(*Miro::Configuration::document(),
                                         kn::FrameStoreSingleton::instance(),
                                         robotName,
                                         m_params->siteFrame);

    // connect robot frame to chosen site frame
    FrameStore * fs = frameStoreInit.getFrameStore();
    if (m_params->siteFrame.length() != 0) {
      FrameHandle siteFrame = fs->lookup(m_params->siteFrame);
      if (siteFrame == FrameHandle::NULL_HANDLE) {
        MIRO_LOG_OSTR(LL_CRITICAL, "FrameStoreConfigSvc: site frame specified but not in FrameStore: " << m_params->siteFrame);
        ACE_OS::last_error(EINVAL);
        return -1;
      }

      std::string const& robotName = Miro::RobotParameters::instance()->name;
      FrameHandle roverFrame = fs->lookup(robotName);
      if (roverFrame == FrameHandle::NULL_HANDLE) {
        MIRO_LOG_OSTR(LL_CRITICAL, "FrameStoreConfigSvc: site frame specified but rover frame not in FrameStore: " << robotName);
        ACE_OS::last_error(EINVAL);
        return -1;
      }

      fs->setParent(roverFrame, siteFrame);
    }

#ifdef RTIDDS_FOUND
    if (m_params->ddsConfig) {
      m_fsConfigPublisher = new FsConfigPublisher(rapid::FRAMESTORE_CONFIG_TOPIC,
          m_params->publisher,
          m_params->profile,
          m_params->library,
          svcName);

      rapid::FrameStoreConfig * config =
        frameStoreInit.createFrameStoreConfig();

      m_fsConfigPublisher->sendEvent(*config);
      rapid::FrameStoreConfigTypeSupport::delete_data(config);
    }
#endif

    return 0;
  }

  int
  FrameStoreConfigSvc::info(ACE_TCHAR **bufferp, size_t len) const
  {
    static const char i[] = "knFrameStoreConfig Service \n";

    if (*bufferp == 0)
      *bufferp = ACE::strnew(i);
    else
      ACE_OS_String::strncpy(*bufferp, i, len);

    return ACE_OS_String::strlen(*bufferp);
  }

  int
  FrameStoreConfigSvc::fini()
  {
    MIRO_LOG(LL_NOTICE, "kn::FrameStoreConfigSvc::fini()");

#ifdef RTIDDS_FOUND
    delete m_fsConfigPublisher;
#endif
    m_fsConfigPublisher = NULL;
    m_params = NULL;

    MIRO_LOG(LL_NOTICE, "kn::FrameStoreConfigSvc::fini() done");

    return 0;
  }

  int
  FrameStoreConfigSvc::parseArgs(int& argc, char * argv[])
  {
    int rc = 0;
    int c;

    m_verbose = 0;

    // initialize parameters with global instance
    m_params = FrameStoreConfigSvcParameters::instance();
    // reset defaults
    FrameStoreConfigSvcParameters defaultParams;
    *m_params = defaultParams;
    // initialize parameters from config file
    Miro::ConfigDocument * config = Miro::Configuration::document();
    config->setSection("FrameStore");
    config->getParameters("kn::FrameStoreConfigSvcParameters", *m_params);

    // initialize parameters from command line
    ACE_Get_Opt get_opts (argc, argv, "Cs:v?");

    while ((c = get_opts()) != -1) {
      switch (c) {
        case 's':
          m_params->siteFrame = get_opts.optarg;
          break;
        case 'C':
          m_params->ddsConfig = false;
        case 'v':
          ++m_verbose;
          break;
        case '?':
        default:
          ACE_OS::last_error(EINVAL);
          rc = -1;
      }
    }

    if (rc != 0) {
      cerr << "usage: " << argv[0] << " [-n name] [-vi?]\n"
           << "  -s <site> name of the siteFrame\n"
           << "  -C no config message published on DDS\n"
           << "  -v verbose mode\n"
           << "  -? help: print this text and stop" << endl;
    }

    if (m_verbose) {
      cerr << "FrameStoreConfig Parameters: " << endl
           << *m_params << endl;
    }

    return rc;
  }

}

// Create an object that will insert the <Timer_Service> into the list
// of statically linked services that the <ACE_Service_Config> will
// process at run-time.
ACE_FACTORY_NAMESPACE_DEFINE (knFrameStoreSvc, kn_FrameStoreConfigSvc, kn::FrameStoreConfigSvc);
ACE_STATIC_SVC_DEFINE (kn_FrameStoreConfigSvc,
                       ACE_TEXT("FrameStoreConfigSvc"),
                       ACE_SVC_OBJ_T,
                       &ACE_SVC_NAME(kn_FrameStoreConfigSvc),
                       ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
                       0);
ACE_STATIC_SVC_REQUIRE(kn_FrameStoreConfigSvc);
