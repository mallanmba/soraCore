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
#include "Float32Io.h"
#include "RapidExtArcIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtArcDds/Float32Config.h"
#include "rapidExtArcDds/Float32ConfigSupport.h"
#include "rapidExtArcDds/Float32Sample.h"
#include "rapidExtArcDds/Float32SampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"
#include "rapidDds/BaseTypes.h"

#include "rapidUtil/RapidHelper.h"

#include "miro/TimeHelper.h"

#include <iostream>

using namespace std;

namespace rapid
{
  typedef TopicPairApp_T<ext::arc::Float32Config, ext::arc::Float32Sample, ext::arc::Float32TopicPairParameters> TopicPairApp;

  template<>
  void TopicPairApp::Printer::printData(ext::arc::Float32Sample const& event)
  {
    if (s_csv > 0) {
      cout << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << ", ";
      for (long i = 0; i < event.data.length(); ++i){
        if (i > 0) {
          cout << ", ";
        }
        cout << event.data[i];
      }
      cout << endl;
      return;
    }
    else {
      cout << "timestamp: " << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << endl;
      if (s_verbose == 1) {
        cout << "Float sequence: { ";
        for (long i = 0; i < event.data.length(); ++i){
          if (i > 0) {
            cout << " , ";
          }

          cout.precision(3);
          cout.width(6);
          cout.fill(' ');
          cout << fixed << event.data[i];
        }
        cout << " }" << endl;
        cout << endl;
      }
      else if (s_verbose >= 2) {
        rapid::ext::arc::Float32Sample::TypeSupport::print_data(&event);
      }
    }
  }
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::arc::Float32TopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::arc::FLOAT32_CONFIG_TOPIC, ext::arc::FLOAT32_SAMPLE_TOPIC);

  return 0;
}

