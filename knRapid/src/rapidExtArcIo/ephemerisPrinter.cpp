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
#include "EphemerisIo.h"
#include "RapidExtArcIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtArcDds/EphemerisConfig.h"
#include "rapidExtArcDds/EphemerisConfigSupport.h"
#include "rapidExtArcDds/EphemerisSample.h"
#include "rapidExtArcDds/EphemerisSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include <iostream>

using namespace std;

namespace rapid
{
  typedef TopicPairApp_T<ext::arc::EphemerisConfig, ext::arc::EphemerisSample, ext::arc::EphemerisTopicPairParameters> TopicPairApp;
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::arc::EphemerisTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::arc::EPHEMERIS_CONFIG_TOPIC, ext::arc::EPHEMERIS_SAMPLE_TOPIC);

  return 0;
}
