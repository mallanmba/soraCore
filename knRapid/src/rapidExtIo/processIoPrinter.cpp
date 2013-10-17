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
#include "rapidUtil/GenericPrinter_T.h"

#include "rapidExtDds/ExtConstants.h"
#include "rapidExtDds/ProcessIoSample.h"
#include "rapidExtDds/ProcessIoSampleSupport.h"

#include "knDds/DdsSupport.h"
#include "knDds/KnDdsParameters.h"

#include "miro/Robot.h" // for MNC parsing

#include <ace/Get_Opt.h>

#include <string>
#include <cstring>

using namespace std;
using namespace Miro;
using namespace kn;
using namespace rapid;

string name = "rctld";
string topic = ext::PROCESSIO_SAMPLE_TOPIC;
string suffix;
int processIdx = 0;
bool stdOut = false;
bool stdErr = false;
bool stdIn = false;
int verbose = 0;

char const * const streamPrefix[] = {
  "I ",
  "O ",
  "E "
};

int 
parseArgs(int& argc, char* argv[])
{
  int rc = 0;
  int c;

  ACE_Get_Opt get_opts (argc, argv, "n:p:s:oeiv?");
  
  while ((c = get_opts()) != -1) {
    switch (c) {
    case 'n':
      name = get_opts.optarg;
      break;
    case 's':
      suffix = get_opts.optarg;
      break;
    case 'o':
      stdOut = true;
      break;
    case 'e':
      stdErr = true;
      break;
     case 'i':
      stdIn = true;
      break;
     break;
    case 'p':
      processIdx = atoi(get_opts.optarg);
      break;
    case 'v':
      ++verbose;
      break;
    case '?':
    default:
      cerr << "usage: " << argv[0] << "[-n name] [-v?]" << endl
	   << "  -n <name> name of the ProcessManager instance (default: Rctl)" << endl
	   << "  -s <topic suffix> suffix to the topic name (default: <none>)" << endl
	   << "  -p <idx> process index (default: 0)" << endl
	   << "  -o report std out stream (default: false)" << endl
	   << "  -e report std err stream (default: false)" << endl
	   << "  -i report std in stream (default: false)" << endl
	   << "  -v verbose mode" << endl
	   << "  -? help: emit this text and stop" << endl;
      rc = 1;
    }
  }

  if (verbose) {
    cerr << "process manager name: " << name << endl
         << "topic suffix: " << suffix << endl
         << "process idx: " << processIdx << endl
         << "cout: " << stdOut << endl
         << "cerr: " << stdErr << endl
         << "cin: " << stdIn << endl;
  }

  return rc;
}


namespace rapid
{

  template<>
  class GenericPrinter_T<ext::ProcessIoSample>::Printer
  {
  public:
    void operator() (ext::ProcessIoSample const * event) throw() {
      assert (event != NULL);

      if (verbose < 3) {
        if (strcmp(event->hdr.assetName, RobotParameters::instance()->name.c_str()) == 0 &&
            strcmp(event->hdr.srcName, name.c_str()) == 0 &&
            event->processIdx == processIdx) {
          if ( ( (event->stream == rapid::ext::PROCESS_STDOUT) && stdOut) ||
               ( (event->stream == rapid::ext::PROCESS_STDERR) && stdErr) ||
               ( (event->stream == rapid::ext::PROCESS_STDIN) && stdIn) ) {
            if (verbose < 2) {
              cout << streamPrefix[event->stream] << event->lineNumber << ": " << event->line;
            }
            else {
              rapid::ext::ProcessIoSample::TypeSupport::print_data(event);
              }
          }
        }
        else 
            MIRO_LOG(LL_NOTICE, "miss");
      }
      else {
        rapid::ext::ProcessIoSample::TypeSupport::print_data(event);
      }
    }
  };
}

int main(int argc, char * argv[])
{
  Robot::init(argc, argv);
  
  DdsEntitiesFactorySvcParameters * ddsEntitiesParams = 
    DdsEntitiesFactorySvcParameters::instance();

  // alter default parameters
  ddsEntitiesParams->defaultLibrary = "RapidQosLibrary";

  DdsSupport::init(argc, argv);

  // Hardcode participant name and participant Qos Profile
  ddsEntitiesParams->participants[0].participantName = "ProcessManagerIoSampleReader";
  ddsEntitiesParams->participants[0].profile = "RapidDefaultQos";

  if (parseArgs(argc, argv))
    return 1;

  stringstream topicName;
  topicName << topic;
  topicName << "-" << processIdx;
  topicName << suffix;

  GenericPrinter_T<ext::ProcessIoSample> printer("RapidProcessIoSampleProfile");
  printer.run(topicName.str());

  return 0;
}
