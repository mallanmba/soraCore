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

#include "rapidDds/FileAnnounce.h"
#include "rapidDds/FileAnnounceSupport.h"
#include "rapidDds/RapidConstants.h"

#include <iostream>
#include <set>
#include <string>

using namespace std;

namespace rapid
{

  unsigned int counter = 0;
  unsigned int uniqueCounter = 0;

  set<string> topics;

  template<>
  struct GenericPrinter_T<rapid::FileAnnounce>::Printer
  {
    void operator() (rapid::FileAnnounce const * event) throw() {
      if (event != NULL) {
        if (topics.insert(string(event->fileUuid)).second == false) {
          cout << "d-";
        }
        else {
          cout << "o-";
          uniqueCounter++;
        }
        if (s_verbose) {
          rapid::FileAnnounce::TypeSupport::print_data(event);
        }
        else {
          cout << counter++ << ": " << event->fileUuid << " " << event->fileLocator << endl;
        }
      }
      else
        std::cerr << "Received event is not of expected type." << std::endl;
      }
  };
}

int main(int argc, char * argv[])
{
  rapid::GenericPrinter_T<rapid::FileAnnounce>
    printer(argc, argv, "RapidFileAnnounceProfile");

  printer.run(rapid::FILEANNOUNCE_TOPIC);

  cout << "unique announcements: " << rapid::uniqueCounter << endl;

  return 0;
}
