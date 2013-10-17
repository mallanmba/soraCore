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
#include "RapidIoParameters.h"
#include "PositionIo.h"

#include "rapidUtil/TopicPairApp_T.h"
#include "rapidUtil/Transform3DHelper.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidDds/PositionConfig.h"
#include "rapidDds/PositionConfigSupport.h"
#include "rapidDds/PositionSample.h"
#include "rapidDds/PositionSampleSupport.h"
#include "rapidDds/RapidConstants.h"

#include "miro/TimeHelper.h"

#include "knMath/Matrix.h"
#include "knMath/EulerAngles.h"
#include "knMath/Vector.h"

#include <ace/Arg_Shifter.h>

#include <iostream>
#include <iomanip>

rapid::RotationEncoding encodings[] = {
  rapid::RAPID_ROT_NONE,
  rapid::RAPID_ROT_M33,
  rapid::RAPID_ROT_QUAT,
  rapid::RAPID_ROT_XYZ,
  rapid::RAPID_ROT_ZYX,
  rapid::RAPID_ROT_ZYZ,
  rapid::RAPID_ROT_VEL
};
int const numEncodings = sizeof(encodings) / sizeof(rapid::RotationEncoding);

namespace rapid
{
  using namespace std;

  void
  reportNonRotationMatrix(kn::Matrix3x3 const& rotation)
  {
    // check if rotation matrix   
    kn::Matrix3x3 I = rotation.inverse();
    
    double d = rotation.determinant();
    kn::Matrix3x3 T = rotation.transpose();
    kn::Matrix3x3 tmp = T - I;
    double unorthogonality = tmp.sum();
    
    if ( fabs(unorthogonality) > 0.0001 || fabs(d - 1.) > 0.0001 ) {
      cerr << "FsPositionUpdater - not a good rotation matrix: ortho=" << unorthogonality << " det=" << d << endl;
    }
  }


  typedef TopicPairApp_T<PositionConfig, PositionSample, PositionTopicPairParameters> TopicPairApp;

  template<>
  void
  TopicPairApp::Printer::printData(PositionSample const& event)
  {
    kn::ATrans3 poseTrans;
    rapid::Transform3DHelper::transform3DToATrans3(poseTrans, event.pose, Super::m_config.poseEncoding);
    kn::Vector3 poseRpy =  kn::rotationMatrixToEulerXyz(poseTrans.rotation());
    reportNonRotationMatrix(poseTrans.rotation());
    
    kn::ATrans3 velTrans;
    rapid::Transform3DHelper::transform3DToATrans3(velTrans, event.velocity, Super::m_config.velocityEncoding);
    kn::Vector3 velRpy =  kn::rotationMatrixToEulerXyz(velTrans.rotation());
    reportNonRotationMatrix(velTrans.rotation());
    
    if (s_csv > 0) {
      cout << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << ", "
           << setprecision (12) << poseTrans.translation().x() << ", "
           << setprecision (12) << poseTrans.translation().y() << ", "
           << setprecision (12) << poseTrans.translation().z() << ", "
           << setprecision (12) << poseRpy[0] << ", "
           << setprecision (12) << poseRpy[1] << ", "
           << setprecision (12) << poseRpy[2]
           << endl;
      return;
    }
    else {
      cout << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << endl;
      if (s_verbose == 1) {
        
        cout << "xyz (m)   = " << poseTrans.translation() << endl
               << "rpy (deg) = " << (poseRpy * 180./M_PI) << endl
             << "velocity (m/s) = " << velTrans.translation() << endl;
        if (Super::m_config.velocityEncoding > 0) {
          cout << "gyro (deg/s) = " << (velRpy * 180./M_PI) << endl;
        }
        if (event.values.length() > 0) {
          cout << "values: { ";
          for(long i = 0; i < event.values.length(); ++i){
            if (i > 0) {
              cout << " , ";
            }
            
            switch(event.values[i]._d) {
            case rapid::RAPID_BOOL:
              cout << event.values[i]._u.b;
              break;
            case rapid::RAPID_DOUBLE:
                cout << event.values[i]._u.d;
                break;
            case rapid::RAPID_FLOAT:
              cout << event.values[i]._u.f;
              break;
            case rapid::RAPID_INT:
              cout << event.values[i]._u.i;
              break;
            case rapid::RAPID_LONGLONG:
              cout << event.values[i]._u.ll;
              break;
            case rapid::RAPID_STRING:
              cout << event.values[i]._u.s;
              break;
            case rapid::RAPID_VEC3d:
              cout << "printing vec3d not supported." << endl;
              break;
            case rapid::RAPID_MAT33f:
              cout << "printing mat33f not supported." << endl;
              break;
            }
          }
          cout << " }" << endl;
        }
      }
      else if (s_verbose == 2) {
        cout << "pose trans = " << kn::ATrans3Out(poseTrans) << endl
             << "vel trans = " << kn::ATrans3Out(velTrans) << endl
             << "time = " << event.hdr.timeStamp << endl 
             << endl;
      }
      else if (s_verbose >= 3) {
        PositionSample::TypeSupport::print_data(&event);
      }
    }
  }
}


using namespace rapid;

int main(int argc, char * argv[])
{
  rapid::PositionTopicPairParameters params;

  ACE_Arg_Shifter arg_shifter(argc, argv);
  while (arg_shifter.is_anything_left()) {
    const ACE_TCHAR *current_arg = arg_shifter.get_current();

    // Qos file
    if (ACE_OS::strcasecmp("-r", current_arg) == 0) {
      arg_shifter.consume_arg();

      params.useConfigTopic = false;
      if (arg_shifter.is_parameter_next()) {
        int index = atoi(arg_shifter.get_current());
        arg_shifter.consume_arg();
   
        if (index > 0 && index < numEncodings) {
          params.config.poseEncoding = encodings[index];
        }
      }
    }
    else if (ACE_OS::strcasecmp("-R", current_arg) == 0) {
      arg_shifter.consume_arg();

      params.useConfigTopic = false;
      if (arg_shifter.is_parameter_next()) {
        int index = atoi(arg_shifter.get_current());
        arg_shifter.consume_arg();
   
        if (index > 0 && index < numEncodings) {
          params.config.velocityEncoding = encodings[index];
        }
      }
    }
    else
      arg_shifter.ignore_arg();
  }

  TopicPairApp app(argc, argv, params);

  if (app.s_csv > 0) {
    std::cout << "#time, x, y, z, r, p, y" << std::endl;
  }

  app.run(POSITION_CONFIG_TOPIC, POSITION_SAMPLE_TOPIC);
  return 0;
}
  
