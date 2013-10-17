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
#include "HeaderIo.h"
#include "JointIo.h"
#include "RapidIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidDds/JointConfig.h"
#include "rapidDds/JointConfigSupport.h"
#include "rapidDds/JointSample.h"
#include "rapidDds/JointSampleSupport.h"
#include "rapidDds/RapidConstants.h"

#include "miro/TimeHelper.h"

#include "knRapidConfig.h"

#include <iostream>

using namespace std;
using namespace rapid;

struct BitName
{
  int bit;
  char const * const name;
};

BitName bitNames[] = {
  { rapid::JOINT_ENABLED,                                "ENABLED" },
  { rapid::JOINT_DISABLED,                               "DISABLED" },
  { rapid::JOINT_FROZEN         - rapid::JOINT_DISABLED, "FROZEN" },
  { rapid::JOINT_ESTOP          - rapid::JOINT_DISABLED, "ESTOP" },
  { rapid::JOINT_FAILURE,                                "FAILURE" },
  { rapid::JOINT_OVER_CURRENT   - rapid::JOINT_FAILURE,  "OVER_CURRENT" },
  { rapid::JOINT_POSITION_ERROR - rapid::JOINT_FAILURE,  "POSITION_ERROR" }
};

int const NUM_BIT_NAMES = sizeof(bitNames) / sizeof(BitName);

    //@copy-declaration /** Joint is enabled. */
    const long JOINT_ENABLED        = 0x0000;

    //@copy-declaration /** Joint is disabled. */
    const long JOINT_DISABLED       = 0x0001;

     //@copy-declaration /** Joint is unable to move. */
    const long JOINT_FROZEN         = 0x0003;

     //@copy-declaration /** Joint has been e-stopped. */
    const long JOINT_ESTOP          = 0x0005;

     //@copy-declaration /** Joint has had a failure. */
    const long JOINT_FAILURE        = 0x0100;

     //@copy-declaration /** Joint is drawing too much current. */
    const long JOINT_OVER_CURRENT   = 0x0300;

    //@copy-declaration /** Joint is exceeded position error limits. */
    const long JOINT_POSITION_ERROR = 0x0500;


void printBitNames(int status)
{
  cout << "[";
  int n = 0;
  if (status == 0) {
    cout << bitNames[0].name;
  }
  else {
    for (int i = 0; i < NUM_BIT_NAMES; ++i) {
      if (status & bitNames[i].bit) {
        if (n > 0) {
          cout << "|";
        }
        cout << bitNames[i].name;
        ++n;
      }
    }
  }
  cout << "]";
}

double factor = 1.0;

std::ostream& operator<< (std::ostream& ostr, rapid::FloatSequence64 const& rhs)
{
  cout << "{";
  for (int i = 0; i < rhs.length(); ++i) {
    if (i > 0)
      ostr << ", ";
    ostr << rhs[i] * factor;
  }
  cout << "}";
  return ostr;
}

namespace rapid
{
  template<>
  void
  TopicPairApp_T<JointConfig, JointSample, JointTopicPairParameters>::Printer::printData(JointSample const& event)
  {
    if (TopicPairAppBase::s_csv > 0) {
      cout << RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << ", ";
      for (int i = 0; i < event.anglePos.length(); ++i) {
        if (i > 0) {
          cout << ", ";
        }
        cout << event.anglePos[i];
      }
      cout << endl;

      return;
    }
    else {
      if (TopicPairAppBase::s_verbose < 3) {
        cout << "JointSample: {";
        if (TopicPairAppBase::s_verbose > 1)
          cout  << "{" << event.hdr <<"}, ";

        printBitNames(event.hdr.statusCode);
        cout << ", ";

        if (TopicPairAppBase::s_verbose > 0) {
          factor = 180./M_PI;
          cout << endl
               << "deg: " << event.anglePos << ", " << endl
               << "deg/s: " << event.angleVel;
        }
        if (TopicPairAppBase::s_verbose > 1) {
          cout << ", " << endl;
          factor = 1.;
          if (event.current.length() > 0) {
            cout << endl
                 << "current (amp): " << event.current << ", ";
          }
          if (event.torque.length() > 0) {
            cout << endl
                 << "torque: " << event.torque << ", ";
          }
          if (event.temperature.length() > 0) {
            cout << endl
                 << "temperature: " << event.temperature << ", ";
          }

          if (event.status.length() > 0) {
            cout << endl;
            for (int i = 0; i < event.status.length(); ++i) {
              if (i > 0)
                cout << ", ";
              cout << i;
              printBitNames(event.status[i]);
            }
          }
        }

        cout << "}" <<endl;
      }

      else {
        JointSample::TypeSupport::print_data(&event);
      }
    }
  }
}

int main(int argc, char * argv[])
{
  JointTopicPairParameters params;
  rapid::TopicPairApp_T<JointConfig, JointSample, JointTopicPairParameters>
    printer(argc, argv, params);

  if (printer.s_csv > 0) {
    cout << "#time, leftFrontDrive, rightFrontDrive, leftRearDrive, rightRearDrive, leftFrontSteer, rightFrontSteer, leftRearSteer, rightRearSteer" << endl;
  }

  printer.run(JOINT_CONFIG_TOPIC, JOINT_SAMPLE_TOPIC);

  return 0;
}
