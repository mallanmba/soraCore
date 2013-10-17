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
#include "VEStopIo.h"
#include "RapidExtIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtDds/VEStopConfig.h"
#include "rapidExtDds/VEStopConfigSupport.h"
#include "rapidExtDds/VEStopState.h"
#include "rapidExtDds/VEStopStateSupport.h"
#include "rapidExtDds/ExtConstants.h"

#include <iostream>

using namespace std;

namespace rapid
{
  typedef TopicPairApp_T<ext::VEStopConfig, ext::VEStopState, ext::VEStopTopicPairParameters> TopicPairApp;
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::VEStopTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::VESTOP_CONFIG_TOPIC, ext::VESTOP_STATE_TOPIC);

  return 0;
}
