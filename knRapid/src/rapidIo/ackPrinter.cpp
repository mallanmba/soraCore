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

#include "rapidDds/Ack.h"
#include "rapidDds/AckSupport.h"
#include "rapidDds/RapidConstants.h"

#include <iostream>

using namespace std;
using namespace rapid;

namespace
{
  char const * ackStatus[] = {
    "ACK_QUEUED",
    "ACK_EXECUTING",
    "ACK_REQUEUED",
    "ACK_COMPLETED"
  };

  char const * ackCompletedStatus[] = {
   "ACK_COMPLETED_NOT",
   "ACK_COMPLETED_OK",
   "ACK_COMPLETED_BAD_SYNTAX",
   "ACK_COMPLETED_EXEC_FAILED",
   "ACK_COMPLETED_CANCELED"
  };
}

namespace rapid
{
  template<>
  void
  GenericPrinter_T<Ack>::Printer::operator() (Ack const * event) throw() 
  {
    assert (event != NULL);

    cout << "srcName=" << event->hdr.srcName 
         << " assetName=" << event->hdr.assetName << endl
         << "timeStamp=" << event->hdr.timeStamp 
         << " statuscode=" << event->hdr.statusCode
         << " serial=" << event->hdr.serial << endl
         << "cmdId=" << event->cmdId << endl
         << "status=" << ackStatus[event->status] << endl
         << "completedStatus=" << ackCompletedStatus[event->completedStatus] << endl
         << "message: " << event->message << endl;
  }
}

int main(int argc, char * argv[])
{
  GenericPrinter_T<Ack> printer(argc, argv, "RapidAckProfile");

  printer.run(ACK_TOPIC);

  return 0;
}
