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

#include "rapidDds/FileQueueEntryState.h"
#include "rapidDds/FileQueueEntryStateSupport.h"
#include "rapidDds/RapidConstants.h"

#include "knDds/KnDdsParameters.h"

#include "miro/Robot.h"
#include "miro/TimeHelper.h"

#include <iostream>

#include <boost/program_options.hpp>

#include <ace/OS_NS_sys_time.h>

#include <iostream>
#include <map>
#include <set>

using namespace std;
namespace po = boost::program_options;

int verbose = false;
bool pretty = false;
bool receiver = false;
string topic = rapid::FILEQUEUEENTRY_STATE_TOPIC;

namespace
{
  char const *  fileTransferStatus[] = {
    "RAPID_FILE_PREFETCH_PENDING",
    "RAPID_FILE_PREFETCHING",
    "RAPID_FILE_PENDING",
    "RAPID_FILE_ACTIVE",
    "RAPID_FILE_PAUSED",
    "RAPID_FILE_DONE",
    "RAPID_FILE_CANCELED",
    "RAPID_FILE_ERROR"
  };
}
namespace rapid
{
  struct Entry
  {
    ACE_Time_Value timestamp;
    string fileUuid;
    rapid::FileTransferStatus status;
    int chunksSent;
    int numChunks;
    long long submissionTime;
    float priority;
    short channelId;

    void set(rapid::FileQueueEntryState const& sample)
    {
      timestamp = ACE_OS::gettimeofday();
      fileUuid = sample.fileUuid;
      status = sample.status;
      chunksSent = sample.chunksSent;
      numChunks = sample.numChunks;
      submissionTime = sample.submissionTime;
      priority = sample.priority;
      channelId = sample.channelId;
    }
  };

  bool operator<(Entry const& lhs, Entry const& rhs) {
    return lhs.timestamp < rhs.timestamp;
  }

  ostream& operator<<(ostream& ostr, Entry const& rhs) {
    ostr << rhs.fileUuid << " - " << flush
         << fileTransferStatus[rhs.status]
         << " p=" << rhs.priority
         << " c=" << rhs.channelId;
    if (rhs.status == rapid::RAPID_FILE_ACTIVE) {
      cout << "  t=" << rhs.chunksSent << "/" << rhs.numChunks;
    }

    return ostr;
  }

  typedef set<Entry> EntrySet;
  typedef map<string, Entry> EntryMap;
  EntryMap entryMap;

  template<>
  struct GenericPrinter_T<rapid::FileQueueEntryState>::Printer
  {
    void operator() (rapid::FileQueueEntryState const * event) throw() {
      if (event != NULL) {
        if (!pretty) {
          cout << event->fileUuid << " - " << flush
               << fileTransferStatus[event->status]
               << " p=" << event->priority
               << " c=" << event->channelId
               << " t=" << event->chunksSent << "/" << event->numChunks
               << endl;
          if (event->status == rapid::RAPID_FILE_ACTIVE) {
            cout << "  chunks: " << event->chunksSent
                 << "/" << event->numChunks << endl;
          }
        }
        else {
          cout << endl << "State update: " << endl;

          Entry e;
          e.set(*event);
          entryMap[event->fileUuid] = e;

          EntrySet entries;
          {
            EntryMap::const_iterator first, last = entryMap.end();
            for (first = entryMap.begin(); first != last; ++first) {
              entries.insert(first->second);
            }
          }

          {
            EntrySet::const_iterator first, last = entries.end();
            for (first = entries.begin(); first != last; ++first) {
              cout << ((first->fileUuid == e.fileUuid)? " * " : "   ");
              cout << *first << endl;
            }

          }
        }
      }
      else
        std::cerr << "received event is not of expected type." << std::endl;
    }
  };
}

int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv); // for MLL
  Miro::Robot::init(argc, argv);

  kn::DdsEntitiesFactorySvcParameters * ddsEntitiesParams =
    kn::DdsEntitiesFactorySvcParameters::instance();

  // alter default parameters
  ddsEntitiesParams->defaultLibrary = "RapidQosLibrary";

  kn::DdsSupport::init(argc, argv);

  // Hardcode participant name and participant Qos Profile
  ddsEntitiesParams->participants[0].participantName = "FileQueueEntryStateReader";
  ddsEntitiesParams->participants[0].profile = "RapidDefaultQos";

  po::options_description options("Non generic consumer options");
  options.add_options()
    ("help,h", "Display this help message")
    ("verbose,v", "Verbose output")
    ("pretty,p", "Pretty print output")
    ("receiver,r", "Filequeue receiver configuration")
    ("topic,t", po::value<string>(&topic)->default_value(rapid::FILEQUEUEENTRY_STATE_TOPIC),
     "RAPID topic name")
    ;

  po::variables_map vm;
  po::parsed_options parser =
    po::command_line_parser(argc, argv).options(options).allow_unregistered().run();
  po::store(parser, vm);
  notify(vm);

  if (vm.count("help")) {
    cout << "Print RAPID/DDS position samples\n"
   << "Usage: " << argv[0] << " [options]\n"
   << "-? : for kn::Generic Consumer options\n"
   << "Other options: \n"
   << options << endl;
    exit(0);
  }

  verbose = vm.count("verbose");
  receiver = vm.count("receiver");
  pretty = vm.count("pretty");

  string profile = "RapidFileQueueEntryStateProfile";

  if (receiver) {
    ddsEntitiesParams->participants[0].participantName = "FileQueueReceiverEntryStateReader";
    profile = "RapidFileQueueReceiverEntryStateProfile";
    if (vm.count("topic") == 0) {
      topic = rapid::FILEQUEUEENTRY_STATE_RECEIVER_TOPIC;
    }
  }

  rapid::GenericPrinter_T<rapid::FileQueueEntryState> printer(profile);

  printer.run(topic);

  return 0;
}
