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
#include "GenericBuiltinPrinter_T.h"

#include "knDds/DdsSupport.h"
#include "knDds/KnDdsParameters.h"

#include "miro/Robot.h" // for MNC parsing

#include <stdexcept>

namespace kn
{
  using namespace std;

  int GenericBuiltinPrinterBase::s_verbose = 0;
  int GenericBuiltinPrinterBase::s_csv = 0;

  GenericBuiltinPrinterBase::GenericBuiltinPrinterBase(int& argc, char * argv[]) 
  {
    // for naming context
    Miro::Log::init(argc, argv);
    Miro::Robot::init(argc, argv);
    
    kn::DdsEntitiesFactorySvcParameters * params =
      kn::DdsEntitiesFactorySvcParameters::instance();
    
    params->publishers.clear(); // we don't have any publishers, here
    params->subscribers.clear(); // we don't have any subscribers, here
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
  
  GenericBuiltinPrinterBase::~GenericBuiltinPrinterBase() throw()
  {
    m_ddsEntities.fini();
  }
  
  int 
  GenericBuiltinPrinterBase::parseArgs(int& argc, char* argv[])
  {
    int rc = 0;
    int c;
    bool help = false;
    
    // initialize parameters from command line
    ACE_Get_Opt get_opts(argc, argv, "vc?");
    
    while ((c = get_opts()) != -1) {
      switch (c) {
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
             << "  -v verbose mode" << endl
             << "  -c csv print mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
      }
    }
    
    if (s_verbose) {
      cerr << argv[0] << " parameters:" << endl;
    }
    return help? 2 : rc;
  }
}
