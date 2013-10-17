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

#include "rapidDds/FileQueueSample.h"
#include "rapidDds/FileQueueSampleSupport.h"
#include "rapidDds/RapidConstants.h"

#include "miro/TimeHelper.h"

#include <ace/OS_NS_time.h>
#include <ace/OS_NS_sys_time.h>
#include <ace/Time_Value.h>

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <numeric>

using namespace std;

namespace rapid
{
  // File Staticstics
  string g_currentFile = "";
  long g_lastChunkNum = 0;
  int g_lastIndex = 0;
  ACE_Time_Value g_lastTime;

  int g_index = 0;

  template<>
  struct GenericPrinter_T<rapid::FileQueueSample>::Printer
  {
    void operator() (rapid::FileQueueSample const * event) throw() {
      if (event != NULL) {
        ACE_Time_Value currentTime = ACE_OS::gettimeofday();

  bool firstSample = (event->chunkId == 0);
  bool lastSample = (event->chunkId + 1 == event->numChunks);
  bool timeout = (currentTime - g_lastTime > ACE_Time_Value(0, 500000));
  bool each100 = (event->chunkId % 100 == 0);

  // new file
  if (firstSample || lastSample)
    cout << "hhutz " << currentTime << " " << g_index<< " " << event->fileUuid << endl;

  // periodic chunk display
  if (timeout || each100 || firstSample || lastSample)
    cout << "hhutz " << currentTime << " " << g_index<< " " << event->chunkId << "/" << event->numChunks << endl;

        // Check for in-order chunking and lost samples
        if ((event->chunkId != g_lastChunkNum + 1) && !g_currentFile.empty()) {
          cout << "hhutz " << ACE_OS::gettimeofday()  << "  [out of order! " << event->chunkId << " after " << g_lastChunkNum << "]" << endl;
        }

  if (timeout || firstSample || lastSample || each100) {
    g_lastTime = currentTime;
  }
  if (firstSample) {
    g_currentFile = event->fileUuid;
  }

        g_lastChunkNum = event->chunkId;
  g_lastIndex = g_index;
  ++g_index;
      }
      else {
        std::cerr << "received event is not of expected type." << std::endl;
      }
    }
  };
}

int main(int argc, char * argv[])
{
  rapid::GenericPrinter_T<rapid::FileQueueSample> 
    printer(argc, argv, "RapidFileQueueSampleProfile");
  printer.run(rapid::FILEQUEUE_SAMPLE_TOPIC);

  return 0;
}
