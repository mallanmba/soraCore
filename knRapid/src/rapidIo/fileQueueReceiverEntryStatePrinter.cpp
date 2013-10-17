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

#include "miro/TimeHelper.h"

#include <iostream>

using namespace std;

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

  template<>
  struct GenericPrinter_T<rapid::FileQueueEntryState>::Printer
  {
    void operator() (rapid::FileQueueEntryState const * event) throw() {
      if (event != NULL) {
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
      else
        std::cerr << "received event is not of expected type." << std::endl;
      }
  };
}

char const * topic = rapid::FILEQUEUEENTRY_STATE_RECEIVER_TOPIC;

int main(int argc, char * argv[])
{
  rapid::GenericPrinter_T<rapid::FileQueueEntryState>
    printer(argc, argv, "RapidFileQueueReceiverEntryStateProfile");

  printer.run(topic);

  return 0;
}
