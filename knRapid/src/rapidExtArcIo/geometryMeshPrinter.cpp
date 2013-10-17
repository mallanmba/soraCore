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
#include "GeometryIo.h"
#include "RapidExtArcIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidIo/HeaderIo.h"

#include "rapidExtArcDds/GeometryConfig.h"
#include "rapidExtArcDds/GeometryConfigSupport.h"
#include "rapidExtArcDds/GeometryMeshSample.h"
#include "rapidExtArcDds/GeometryMeshSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include "rapidUtil/RapidHelper.h"

#include <iostream>

using namespace std;

namespace rapid
{
  typedef TopicPairApp_T<ext::arc::GeometryConfig, ext::arc::GeometryMeshSample, ext::arc::GeometryMeshTopicPairParameters> TopicPairApp;

  template<>
  void TopicPairApp::Printer::printData(ext::arc::GeometryMeshSample const& event)
  {
     cout << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << endl;
    if (s_verbose > 3) {
      rapid::ext::arc::GeometryMeshSample::TypeSupport::print_data(&event);
    }
    if (s_verbose > 0) {
      cout << event.hdr << endl
           << " geometryId=" << event.geometryId
           << " indexModes[" << event.indexModes.length() << "], " << flush
           << " indexLengths[" << event.indexLengths.length() << "], " << flush
           << " indexData[" << event.indexData.length() << "]" << endl
           << " vertexScale=" << event.vertexScale << " vertexData[" << event.vertexData.length() << "]" << endl;
    }
  }
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::arc::GeometryMeshTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::arc::GEOMETRY_CONFIG_TOPIC, ext::arc::GEOMETRYMESH_SAMPLE_TOPIC);

  return 0;
}
