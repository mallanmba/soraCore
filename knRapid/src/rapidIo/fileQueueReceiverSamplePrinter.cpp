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

#include "rapidIo/HeaderIo.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidDds/FileQueueReceiverSample.h"
#include "rapidDds/FileQueueReceiverSampleSupport.h"
#include "rapidDds/RapidConstants.h"

#include <iostream>

using namespace std;
using namespace rapid;

namespace rapid
{

  template<>
  struct GenericPrinter_T<rapid::FileQueueReceiverSample>::Printer
  {
    void operator() (rapid::FileQueueReceiverSample const * event) throw() {
      if (event != NULL) {
        cout << "rapid::FileQueueReceiverSample{ " << event->hdr << endl
             << "connected=" << ((event->connected == true)? "true" : "false") << endl
             << "bufferedChunks=" << event->bufferedChunks << endl
             << "processedChunks=" << event->processedChunks << endl
             << "completedFiles=" << event->completedFiles
             << endl;
      }
      else
        std::cerr << "received event is not of expected type." << std::endl;
      }
  };
}

int main(int argc, char * argv[])
{
  rapid::GenericPrinter_T<rapid::FileQueueReceiverSample> 
    printer(argc, argv, "RapidFileQueueReceiverSampleProfile");

  printer.run(rapid::FILEQUEUERECEIVER_SAMPLE_TOPIC);

  return 0;
}
