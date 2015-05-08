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
#include "DdsEntitiesFactorySvc.h"
#include "DdsEntitiesFactory.h"

#include "DdsEntityRepositories.h"
#include "DdsSupport.h"
#include "DdsTypeRegistrator.h"
#include "knDds/KnDdsParameters.h"

#include "miro/Log.h"
#include "miro/Configuration.h"
#include "miro/RobotParameters.h"

#include "knDdsConfig.h"

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#if defined(KNDDS_HAS_DDS_LBPlugin) && defined(RTIDDS_LB_BETA_VERSION)
#  include <LBEDiscoveryPlugin++.h>
#  include <LBPDiscoveryPlugin++.h>
#endif
#ifdef KNDDS_HAS_DDS_Monitor
#  include <monitor/monitor_common.h>
#endif

#include <ace/OS_NS_strings.h>
#include <ace/Get_Opt.h>

#include <vector>

namespace kn
{
  using namespace std;

  typedef vector<DdsParticipantParameters> ParticipantVector;
  typedef vector<DdsNodeParameters> NodeVector;
  typedef vector<DdsTopicParameters> TopicVector;
  typedef vector<string> StringVector;


  DdsEntitiesFactorySvc::DdsEntitiesFactorySvc() :
    m_factory(NULL)
  {
    MIRO_LOG_CTOR("kn::DdsEntitiesFactorySvc");
  }

  DdsEntitiesFactorySvc::~DdsEntitiesFactorySvc()
  {
    MIRO_LOG_DTOR("kn::DdsEntitiesFactorySvc");
    fini();
  }

  int
  DdsEntitiesFactorySvc::init(int argc, ACE_TCHAR *argv[])
  {
    MIRO_LOG(LL_NOTICE, "kn::DdsEntitiesFactorySvc::init()");

    // parasing the arguments
    if (parseArgs(argc, argv) != 0)
      return -1;

    DdsEntitiesFactorySvcParameters * params =
      DdsEntitiesFactorySvcParameters::instance();

    return init(params);
  }


  int
  DdsEntitiesFactorySvc::init(DdsEntitiesFactorySvcParameters const * params)
  {
    int rc = -1;

    try {
      m_factory = new DdsEntitiesFactory(*params);
      rc = 0;
    }
    catch(Miro::Exception const& e) {
      MIRO_LOG(LL_CRITICAL, e.what());
    }

    return rc;
  }

  int
  DdsEntitiesFactorySvc::info(ACE_TCHAR **bufferp, size_t len) const
  {
    char const * i = "MIRO DDS Entities Factory Service \n";

    if (*bufferp == 0)
      *bufferp = ACE::strnew(i);
    else
      ACE_OS_String::strncpy(*bufferp, i, len);

    return ACE_OS_String::strlen(*bufferp);
  }

  int
  DdsEntitiesFactorySvc::fini()
  {
    if (m_factory) {
      MIRO_LOG(LL_NOTICE, "kn::DdsEntitiesFactorySvc::fini()");

      delete m_factory;
      m_factory = NULL;
      MIRO_LOG(LL_NOTICE, "kn::DdsEntitiesFactorySvc::fini() done");
    }
    return 0;
  }

  // fix placeholders
  int
  DdsEntitiesFactorySvc::parseArgs(int& argc, char* argv[])
  {
    int rc = 0;
    int c;
    bool verbose;

    // initialize parameters from config file
    DdsEntitiesFactorySvcParameters * params =
      DdsEntitiesFactorySvcParameters::instance();

    DdsSupport::init(argc, argv);

    // initialize parameters from command line
    ACE_Get_Opt get_opts(argc, argv, "v?");

    while ((c = get_opts()) != -1) {
      switch (c) {
        case 'v':
          verbose = true;
          break;
        case '?':
        default:
          rc = 1;
      }
    }

    if (rc) {
      cerr << "usage: " << argv[0] << "[v?]" << endl
           << "  -v verbose mode" << endl
           << "  -? help: emit this text and stop" << endl;
    }

    if (verbose) {
      cerr << "DdsEntitiesFactorySvc parameters:" << endl
           << *params << endl;
    }
    return rc;
  }
}

ACE_FACTORY_NAMESPACE_DEFINE(knDds, kn_DdsEntitiesFactorySvc, kn::DdsEntitiesFactorySvc);
