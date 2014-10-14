#include "Opts.h"

#include <iostream>

#include <ace/Get_Opt.h>

#include "rapidDds/RapidConstants.h"

using namespace std;

string Opts::topicName   = rapid::IMAGESENSOR_SAMPLE_TOPIC;
string Opts::topicSuffix = "";
string Opts::qosProfile  = "RapidImageSensorSampleProfile";
int    Opts::verbosity   = 0;

int Opts::parseArgs(int& argc, char* argv[])
{
  int rc = 0;
  int c;
  bool help = false;

  ACE_Get_Opt get_opts(argc, argv, "p:t:s:v?");

  while ((c = get_opts()) != -1) {
    switch (c) {
      case 'p': Opts::qosProfile  = get_opts.optarg; break;
      case 't': Opts::topicName   = get_opts.optarg; break;
      case 's': Opts::topicSuffix = get_opts.optarg; break;
      case 'v': ++Opts::verbosity; break;
    case '?':
      help = true;
    default:
      cerr << "usage: " << argv[0] << "[...]" << endl
            << "  -p <qos profile> qos profile to use for topic subscription. Default: " << Opts::qosProfile << endl
            << "  -t <topic name> topic name. Default: " << Opts::topicName << endl
            << "  -s <topic suffix> suffix to append to topic name (w/o -). Default: NONE" << endl
            << "  -v verbose mode" << endl
            << "  -? help: emit this text and stop" << endl;
      rc = 1;
    }
  }

  if (Opts::verbosity > 0) {
    cerr << argv[0] << " parameters:" << endl;
    cerr << " qosProfile=" << Opts::qosProfile << endl
         << "  topicName=" << Opts::topicName << endl
         << "topicSuffix=" << Opts::topicSuffix << endl
         << "  verbosity=" << Opts::verbosity << endl;
  }
  return help ? 2 : rc;
}

