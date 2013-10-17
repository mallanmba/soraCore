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
#include "NavMapIo.h"

#include "rapidIo/HeaderIo.h"

#include "rapidUtil/TopicPairApp_T.h"
#include "rapidUtil/RapidHelper.h"
#include "rapidUtil/Transform3DHelper.h"

#include "rapidExtDds/NavMapConfig.h"
#include "rapidExtDds/NavMapConfigSupport.h"
#include "rapidExtDds/NavMapSample.h"
#include "rapidExtDds/NavMapSampleSupport.h"
#include "rapidExtDds/ExtConstants.h"

#include "knMath/EulerAngles.h"

#include <iostream>
#include <string>

using namespace std;
using namespace rapid;

rapid::RotationEncoding encoding = rapid::RAPID_ROT_M33;

namespace rapid
{
  typedef TopicPairApp_T<ext::NavMapConfig, ext::NavMapSample, ext::NavMapTopicPairParameters> TopicPairApp;

  template<>
  void
  TopicPairApp::Printer::printData(ext::NavMapSample const& event)
  {
    if (s_verbose > 3) {
      rapid::ext::NavMapSample::TypeSupport::print_data(&event);
    }
    else {
      cout << event.hdr << endl
           << " idX: " << event.tileId[0]
           << " idY: " << event.tileId[1] << endl;
      
      if (s_verbose > 1) {
        kn::ATrans3 poseTrans;
        rapid::Transform3DHelper::transform3DToATrans3(poseTrans, event.location, encoding);
        kn::Vector3 poseRpy =  kn::rotationMatrixToEulerXyz(poseTrans.rotation());
        //            reportNonRotationMatrix(poseTrans.rotation());
        
        cout << "xyz (m)   = " << poseTrans.translation() << endl
             << "rpy (deg) = " << (poseRpy * 180./M_PI) << endl;
      }
      
      cout << " octet layers: " << event.octetLayers.length() << endl;
      if (s_verbose > 0) {
          for (int i = 0; i < event.octetLayers.length(); ++i) {
            cout << "  " << i << " " << event.octetLayers[i].data.length()
                 << "  " << event.octetLayers[i].density << endl;
            if (s_verbose > 2) {
              for (int j = 0; j < event.octetLayers[i].data.length(); ++j) {
                cout << " " << (int)event.octetLayers[i].data[j];
              }
              cout << endl;
            }
          }
      }
      cout <<" short layers: " << event.shortLayers.length() << endl;
      if (s_verbose > 0) {
        for (int i = 0; i < event.shortLayers.length(); ++i) {
          cout << "  " << i << " " << event.shortLayers[i].data.length()
               << "  " << event.shortLayers[i].density << endl;
          if (s_verbose > 2) {
            for (int j = 0; j < event.shortLayers[i].data.length(); ++j) {
              cout << " " << (int)event.shortLayers[i].data[j];
            }
            cout << endl;
          }
        }
      }
    }
  }
}

int main(int argc, char * argv[])
{
  ext::NavMapTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::NAVMAP_CONFIG_TOPIC, ext::NAVMAP_SAMPLE_TOPIC);

  return 0;
}
