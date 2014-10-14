#include "miro/Robot.h" // for MNC parsing

#include "rapidDds/RapidConstants.h"
#include "rapidDds/TextMessage.h"
#include "rapidDds/TextMessageSupport.h"

#include "knShare/Log.h"

#include "knDds/DdsEntitiesFactory.h"

#include <ace/Get_Opt.h>

#include <string>
#include <iostream>

#include "TextMessager.h"


using namespace std;
using namespace rapid;
using namespace kn;

string topicBase   = rapid::TEXTMESSAGE_TOPIC;
string topicSuffix = "";
string profile     = "RapidTextMessageProfile";
bool   strictFail  = false;
int    defaultMsgLevel = -1;
string defaultCategory;

void printMessageLevels(FILE* out)
{
  fprintf(out, "    %d : DEBUG     \n", MSG_DEBUG);
  fprintf(out, "    %d : INFO      \n", MSG_INFO);
  fprintf(out, "    %d : ATTENTION \n", MSG_ATTENTION);
  fprintf(out, "    %d : WARN      \n", MSG_WARN);
  fprintf(out, "    %d : ERROR     \n", MSG_ERROR);
  fprintf(out, "    %d : CRITICAL  \n", MSG_CRITICAL);
}

void printHelp(const char* processName) {
  cerr << "usage: " << processName << " [opts]" << endl
        << "  -t <topic name> user-defined topic name (default=" << topicBase << ")" << endl
        << "  -s <topic suffix> a topic suffix (w/o -) (default is none)" << endl
        << "  -p <qos profile> qos profile to use for the topic publication (default=" << profile << ")" << endl
        << "  -f strict fail: if user input is bad, exit (default=false)" << endl
        << "  -C default Category (default=none)" << endl
        << "  -L default message Level (default=none)" << endl
        << "  -? help: emit this text and stop" << endl;
  cerr << "  message levels:" << endl;
  printMessageLevels(stderr);
}

/**
 *
 */
int
parseArgs(int& argc, char* argv[])
{
  int  c,tmp;
  int  retVal = 0;

  ACE_Get_Opt get_opts (argc, argv, "t:s:p:L:C:f?");

  while ((c = get_opts()) != -1) {
    switch (c) {
      case 't':
        topicBase = get_opts.optarg;
        break;
      case 's':
        topicSuffix = get_opts.optarg;
        break;
      case 'p':
        profile = get_opts.optarg;
        break;
      case 'f':
        strictFail = true;
        break;
      case 'C':
        defaultCategory = get_opts.optarg;
        break;
      case 'L':
        tmp = get_opts.optarg[0] - '0';
        if(tmp < MSG_DEBUG || tmp > MSG_CRITICAL) {
          cerr << endl << "ERROR: invalid MsgLevel: " << tmp << endl << endl;
          retVal = 1;
        }
        defaultMsgLevel = tmp;
        break;
      case '?':
      default:
        //printHelp(argv[0]);
        retVal = 1;
    }
  }
  return retVal;
}

/**
 *
 */
int
main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  Miro::Robot::init(argc, argv); // for MRN

  kn::DdsEntitiesFactorySvcParameters* ddsFactoryParams =
    kn::DdsEntitiesFactorySvcParameters::instance();
  ddsFactoryParams->subscribers.clear(); // no subscribers
  kn::DdsSupport::init(argc, argv);

  int rc = parseArgs(argc, argv);
  if(rc) {
    printHelp(argv[0]);
    return rc;
  }

  DdsEntitiesFactory ddsEntities(*ddsFactoryParams);

  string topicName;
  if(topicSuffix.length() > 1) {
    topicName = topicBase + "-" + topicSuffix;
  }
  else {
    topicName = topicBase;
  }

  TextMessagerParameters params;
  params.profile = profile;
  params.topic   = topicName;

  TextMessager messager(params);

  const unsigned CategorySize = 64;
  const unsigned MessageSize  = 2048;
  int    msgLevel;
  string category;
  string message;
  string input;
  category.reserve(CategorySize);
  message.reserve(MessageSize);
  input.reserve(MessageSize);

  while(true) {
    if(defaultMsgLevel == -1) {
      fprintf(stdout, "\nEnter MessageLevel, or \'q\' to quit:\n");
      printMessageLevels(stdout);

      fprintf(stdout, " MessageLevel: ");
      getline(cin, input);
      if(input[0] == 'q' || input[0] == 'Q') {
        exit(0);
      }
      msgLevel = input[0] - '0';
      if(msgLevel < MSG_DEBUG || msgLevel > MSG_CRITICAL) {
        if(input[0] == '\0') {
          KN_ERROR("No input");
          exit(-1);
        }
        KN_ERROR("Unrecognized MessageLevel(%d)\n", msgLevel);
        if(strictFail) {
          exit(-1);
        }
        continue;
      }
    }
    else {
      msgLevel = defaultMsgLevel;
    }

    if(defaultCategory.length() == 0) {
      fprintf(stdout, "     Category: ");
      getline(cin, input);
      if(input.length() >= CategorySize-1) {
        KN_WARN("Category is limited to %d characters", CategorySize-1);
        if(strictFail) {
          exit(-2);
        }
        input[CategorySize] = '\0';
      }
      category = input.c_str();
    }
    else {
      category = defaultCategory;
    }

    fprintf(stdout, "      Message: ");
    getline(cin, input);
    if(input[0] == '\0') {
      KN_ERROR("No input");
      exit(-1);
    }
    if(input.length() >= MessageSize-1) {
      KN_WARN("Message is limited to %d characters", CategorySize-1);
      if(strictFail) {
        exit(-3);
      }
      input[MessageSize] = '\0';
    }
    message = input.c_str();

    messager.sendText(category.c_str(), (MessageLevel)msgLevel, message.c_str());
  }

  return 0;
}
