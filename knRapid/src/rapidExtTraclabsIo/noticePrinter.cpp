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
#include "NoticeIo.h"
#include "RapidExtTraclabsIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtTraclabsDds/NoticeConfig.h"
#include "rapidExtTraclabsDds/NoticeConfigSupport.h"
#include "rapidExtTraclabsDds/NoticeState.h"
#include "rapidExtTraclabsDds/NoticeStateSupport.h"
#include "rapidExtTraclabsDds/ExtTraclabsConstants.h"

#include <iostream>

using namespace std;

namespace rapid
{
  typedef TopicPairApp_T<ext::traclabs::NoticeConfig, ext::traclabs::NoticeState, ext::traclabs::NoticeTopicPairParameters> TopicPairApp;
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::traclabs::NoticeTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::traclabs::NOTICE_CONFIG_TOPIC, ext::traclabs::NOTICE_STATE_TOPIC);

  return 0;
}
