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
#include "PointCloudIo.h"
#include "RapidIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidDds/PointCloudConfig.h"
#include "rapidDds/PointCloudConfigSupport.h"
#include "rapidDds/PointCloudSample.h"
#include "rapidDds/PointCloudSampleSupport.h"
#include "rapidDds/RapidConstants.h"

#include <iostream>

using namespace std;

namespace rapid
{
  typedef TopicPairApp_T<PointCloudConfig, PointCloudSample, PointCloudTopicPairParameters> TopicPairApp;

  template<>
  void
  TopicPairApp::Printer::printData(PointCloudSample const& event)
  {
    if (s_verbose < 3) {
      cout << event.hdr.timeStamp << " points: " << event.points.length() << endl;
    }
    else if (s_verbose >= 3) {
      rapid::PointCloudSample::TypeSupport::print_data(&event);
    }
  }
}

using namespace rapid;

int main(int argc, char * argv[])
{
  PointCloudTopicPairParameters params;
  TopicPairApp app(argc, argv, params);
  app.run(POINTCLOUD_CONFIG_TOPIC, POINTCLOUD_SAMPLE_TOPIC);

  return 0;
}
