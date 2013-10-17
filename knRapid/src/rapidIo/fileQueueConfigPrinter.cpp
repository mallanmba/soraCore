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

#include "rapidDds/FileQueueConfig.h"
#include "rapidDds/FileQueueConfigSupport.h"
#include "rapidDds/RapidConstants.h"

#include <iostream>

using namespace std;

namespace rapid
{

  template<>
  struct  GenericPrinter_T<rapid::FileQueueConfig>::Printer
  {
    void operator() (rapid::FileQueueConfig const * event) throw() {
      if (event != NULL) {
        cout << "File Queue Configuration: " << endl;
        for (int i = 0; i < event->channels.length(); ++i) {
          cout << "  " << "Name: " << event->channels[i].name << " - Tokens: " << event->channels[i].numTokens << endl;
        }
      }
      else
        std::cerr << "received event is not of expected type." << std::endl;
      }
  };
}

int main(int argc, char * argv[])
{
  rapid::GenericPrinter_T<rapid::FileQueueConfig>
    printer(argc, argv,"RapidFileQueueConfigProfile");

  printer.run(rapid::FILEQUEUE_CONFIG_TOPIC);

  return 0;
}
