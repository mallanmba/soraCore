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
#include "RapidExtIoParameters.h"
#include "RangeScanIo.h"

#include "rapidIo/HeaderIo.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtDds/RangeScanConfig.h"
#include "rapidExtDds/RangeScanConfigSupport.h"
#include "rapidExtDds/RangeScanSample.h"
#include "rapidExtDds/RangeScanSampleSupport.h"
#include "rapidExtDds/ExtConstants.h"

#include "miro/TimeHelper.h"

#include <iostream>
#include <string>

using namespace std;
using namespace rapid;

namespace rapid
{
  typedef TopicPairApp_T<ext::RangeScanConfig, ext::RangeScanSample, ext::RangeScanTopicPairParameters> TopicPairApp;

  template<>
  void
  TopicPairApp::Printer::printData(ext::RangeScanSample const& event)
  {
    if (s_verbose > 3) {
      rapid::ext::RangeScanSample::TypeSupport::print_data(&event);
    }
    else {
      if (s_verbose == 0) {
        ACE_Time_Value timeStamp;
        timeStamp.set((event.hdr.timeStamp) / 1000000.0);
        cout << timeStamp << " " << event.scanAzimuth[0] / 100.0 << endl;
      }
      else {
        cout << event.hdr << endl;
      }
    }
  }
}

int main(int argc, char * argv[])
{
  ext::RangeScanTopicPairParameters params;
 
  TopicPairApp app(argc, argv, params);
  app.run(ext::RANGESCAN_CONFIG_TOPIC, ext::RANGESCAN_SAMPLE_TOPIC);

  return 0;
}
