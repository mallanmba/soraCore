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
#include "Trajectory2DIo.h"
#include "RapidExtIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtDds/Trajectory2DConfig.h"
#include "rapidExtDds/Trajectory2DConfigSupport.h"
#include "rapidExtDds/Trajectory2DSample.h"
#include "rapidExtDds/Trajectory2DSampleSupport.h"
#include "rapidExtDds/ExtConstants.h"

#include <iostream>

using namespace std;

namespace rapid
{
  typedef TopicPairApp_T<ext::Trajectory2DConfig, ext::Trajectory2DSample, ext::Trajectory2DTopicPairParameters> TopicPairApp;
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::Trajectory2DTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::TRAJECTORY2D_CONFIG_TOPIC, ext::TRAJECTORY2D_SAMPLE_TOPIC);

  return 0;
}
