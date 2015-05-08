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
#include "GpsIo.h"
#include "RapidExtArcIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtArcDds/GpsConfig.h"
#include "rapidExtArcDds/GpsConfigSupport.h"
#include "rapidExtArcDds/GpsSample.h"
#include "rapidExtArcDds/GpsSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"
#include "rapidDds/BaseTypes.h"

#include "rapidUtil/RapidHelper.h"

#include "miro/TimeHelper.h"

#include <iostream>
#include <iomanip>

using namespace std;

namespace rapid
{

  struct SolValue
  {
    const char * const name;
    int32_t value;
  };

  SolValue sol2Value[] = {
    {"NONE", 0x00},
    {"FIXDPOS", 0x01},
    {"FIXEDHEIGHT", 0x02},
    {"FIXEDVEL", 0x03},
    {"DOPPLER_VELOCITY", 0x08},
    {"SINGLE", 0x10},
    {"PSRDIFF", 0x11},
    {"WAAS", 0x12},
    {"OMNISTAR", 0x14},
    {"L1_FLOAT", 0x20},
    {"IONOFREE_FLOAT", 0x21},
    {"NARROW_FLOAT", 0x22},
    {"L1_INT", 0x30},
    {"WIDE_INT", 0x31},
    {"NARROW_INT", 0x32},
    {"RTK_DIRECT_INS", 0x33},
    {"INS", 0x34},
    {"OMNISTAR_HP", 0x40}
  };

  const unsigned int NUM_SOL_MODES = sizeof(sol2Value) / sizeof(SolValue);


  typedef TopicPairApp_T<ext::arc::GpsConfig, ext::arc::GpsSample, ext::arc::GpsTopicPairParameters> TopicPairApp;

  template<>
  void TopicPairApp::Printer::printData(ext::arc::GpsSample const& event)
  {
    if (s_csv > 0) {
      cout << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << ", "
           << setprecision (12) << event.xyz[0] << ", "
           << setprecision (12) << event.xyz[1] << ", "
           << setprecision (12) << event.xyz[2] << ", "
           << setprecision (12) << event.sigmaXyz[0] << ", "
           << setprecision (12) << event.sigmaXyz[1] << ", "
           << setprecision (12) << event.sigmaXyz[2] << ", "
           << setprecision (12) << event.undulation 
           << endl;
      return;
    }

    cout << "timestamp: " << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << endl;
    if (s_verbose == 1) {
      cout << "xyz: { ";
      for (long i = 0; i < 3; ++i){
        if (i > 0) {
          cout << " , ";
        }
        cout << event.xyz[i];
      }
      cout << " }" << endl;
      
      cout << "Sigma xyz: { ";
      for (long i = 0; i < 3; ++i){
        if (i > 0) {
          cout << " , ";
        }
        cout << event.sigmaXyz[i];
      }
      cout << " }" << endl;
      
      // find mode
      std::string mode;
      for (unsigned int i = 0; i < NUM_SOL_MODES; ++i) {
        if (sol2Value[i].value == (int)event.mode) {
          mode = sol2Value[i].name;
        }
      } if (mode.empty()) {
        mode = event.mode;
      }
      
      cout << "undulation: " << event.undulation << endl;
      cout << "utmZone: " << (int)event.utmZone << endl;
      cout << "utmDesig: " << event.utmDesig << endl;
      cout << "mode: " << mode << endl;
      cout << "numSats: " << (int)event.numSats << endl;
      cout << "diffAge: " << event.diffAge << endl;
      cout << "solAge: " << event.solAge << endl;
    }
    else if (s_verbose >= 2) {
      rapid::ext::arc::GpsSample::TypeSupport::print_data(&event);
    }
  }
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::arc::GpsTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  if (app.s_csv > 0) {
    cout << "#time, x, y , z, sigmaX, sigmaY, sigmaZ, undulation" << endl;
  }
  app.run(ext::arc::GPS_CONFIG_TOPIC, ext::arc::GPS_SAMPLE_TOPIC); 

  return 0;
}

