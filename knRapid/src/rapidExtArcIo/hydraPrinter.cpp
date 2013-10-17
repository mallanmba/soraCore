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
#include "GenericIo.h"
#include "RapidExtArcIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtArcDds/GenericConfig.h"
#include "rapidExtArcDds/GenericConfigSupport.h"
#include "rapidExtArcDds/HydraSample.h"
#include "rapidExtArcDds/HydraSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include "rapidUtil/RapidHelper.h"

#include <iostream>

namespace rapid
{
   typedef TopicPairApp_T<ext::arc::GenericConfig, ext::arc::HydraSample, ext::arc::HydraTopicPairParameters> TopicPairApp;

   template<>
   void TopicPairApp::Printer::printData(ext::arc::HydraSample const& event)
   {
      std::cout << "timestamp: " << RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << std::endl;

      if (s_verbose >=2)
      {
         ext::arc::HydraSample::TypeSupport::print_data(&event);
      }
   }

}

using namespace rapid;

int main(int argc, char * argv[])
{
   ext::arc::HydraTopicPairParameters params;
   TopicPairApp app(argc, argv, params);

   app.run(ext::arc::HYDRA_CONFIG_TOPIC, ext::arc::HYDRA_SAMPLE_TOPIC);

   return 0;
}
