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
#include "TopicPairApp_T.h"

#include "RapidUtilParameters.h"

namespace rapid
{
  using namespace std;

  bool TopicPairAppBase::s_printConfig = true;
  bool TopicPairAppBase::s_printData = true;
  int TopicPairAppBase::s_verbose = 0;
  int TopicPairAppBase::s_csv = 0;

  TopicPairAppBase::TopicPairAppBase(int& argc, char * argv[],
                                     TopicPairParameters& p) :
    m_params(p)
  {
    // for naming context
    Miro::Log::init(argc, argv);
    Miro::Robot::init(argc, argv);
    
    kn::DdsEntitiesFactorySvcParameters * params =
      kn::DdsEntitiesFactorySvcParameters::instance();

    params->publishers.clear(); // we don't have any publishers, here
    params->defaultLibrary = "RapidQosLibrary";
    params->defaultProfile = "RapidDefaultQos";
    
    kn::DdsSupport::init(argc, argv);
    
    // Hardcode participant name and participant Qos Profile
    if (argc > 0) {
      params->participants[0].participantName = argv[0];
    }
    
    int rc = parseArgs(argc, argv);
    if (rc == 1)
      throw logic_error("argument parsing failed");
    if (rc == 2)
      exit(0);
    
    m_ddsEntities.init(params);
  }

  TopicPairAppBase::TopicPairAppBase(TopicPairParameters& p) :
    m_params(p)
  {
    kn::DdsEntitiesFactorySvcParameters * params =
      kn::DdsEntitiesFactorySvcParameters::instance();
    
    m_ddsEntities.init(params);
  }
  
  TopicPairAppBase::~TopicPairAppBase()
  {
    m_ddsEntities.fini();
  }
  
  int TopicPairAppBase::parseArgs(int& argc, char* argv[])
  {
    int rc = 0;
    int c;
    bool help = false;
    
    // initialize parameters from command line
    ACE_Get_Opt get_opts(argc, argv, "p:t:T:CDs:vc?");
    
    while ((c = get_opts()) != -1) {
      switch (c) {
      case 'p':
        m_params.dataProfile = get_opts.optarg;
        break;
      case 't':
        m_configTopic = get_opts.optarg;
        break;
      case 'T':
        m_dataTopic = get_opts.optarg;
        break;
      case 's':
        m_params.topicSuffix = "-";
        m_params.topicSuffix += get_opts.optarg;
        break;
      case 'C':
        s_printConfig = false;
        break;
      case 'D':
        s_printData = false;
        break;
      case 'v':
        ++s_verbose;
        break;
      case 'c':
        ++s_csv;
        break;        
      case '?':
        help = true;
      default:
        cerr << "usage: " << argv[0] << "[-v?]" << endl
             << "  -C don't print config samples (use default config from xml)" << endl
             << "  -D don't print data samples" << endl
             << "  -p <qos profile> qos profile of the data topic" << endl
             << "  -s <topic suffix> a topic suffix (w/o -) (default is none)" << endl
             << "  -v verbose mode" << endl
             << "  -c csv print mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
      }
    }
    
    if (s_verbose) {
      cerr << argv[0] << " parameters:" << endl;
      if (!m_configTopic.empty())
        cerr << "config topic name: " << m_configTopic << endl;
      if (!m_dataTopic.empty())
        cerr << "data topic name: " << m_dataTopic << endl;
      cerr << m_params << endl;
    }
    return help? 2 : rc;
  }
}
