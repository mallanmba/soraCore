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
#include "rapidUtil/GenericPrinter_T.h"

#include "rapidExtArcDds/WheelGroupSample.h"
#include "rapidExtArcDds/WheelGroupSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidUtil/RapidHelper.h"

#include "miro/TimeHelper.h"

#include "knRapidConfig.h"

#include <iostream>
#include <climits>

using namespace std;

namespace
{
  // hack this is a copy from knHw
  static int const KNMOTOR_OKAY = 0;
  static int const KNMOTOR_IDLE = 0;
  static int const KNMOTOR_BUSY = 1;
  static int const KNMOTOR_BUSY_INTERRUPTABLE = 3;
  static int const KNMOTOR_BUSY_CALIBRATING = 5;

  static int const KNMOTOR_ERR_OTHER =         INT_MIN +    1; //!< unspecified error
  static int const KNMOTOR_ERR_NUM_MOTORS =    INT_MIN +    2; //!< parameter vector length does not match number of motors
  static int const KNMOTOR_ERR_PARAM_RANGE =   INT_MIN +    4; //!< parameter out of range
  static int const KNMOTOR_ERR_CALIBRATION =   INT_MIN +    8; //!< not calibrated
  static int const KNMOTOR_ERR_TIMEOUT =       INT_MIN +   16; //!< timeout in waiting for reply or trajectory ref no longer overwriteable
  static int const KNMOTOR_ERR_TRAJ_CMD =      INT_MIN +   32; //!< inconsistend trajectory command vectors
  static int const KNMOTOR_ERR_HW_ESTOP =      INT_MIN +   64; //!< hardware is estopped
  static int const KNMOTOR_ERR_SW_ESTOP =      INT_MIN +  128; //!< sticky software estopp
  static int const KNMOTOR_ERR_TRAJ_EXEC =     INT_MIN +  256; //!< trajectory execution went south (buffer underrun)
  static int const KNMOTOR_ERR_POS_ERROR =     INT_MIN +  512; //!< motor position errors exceed safety thresholds
  static int const KNMOTOR_ERR_OVERCURRENT =   INT_MIN + 1024; //!< motor reported overcurrent
  static int const KNMOTOR_ERR_POWER_FAULT =   INT_MIN + 2048; //!< motor reported loss of power
  static int const KNMOTOR_ERR_HW_COM =        INT_MIN + 4096; //!< hardware comm problem (bus error)
  static int const KNMOTOR_ERR_NOT_SUPPORTED = INT_MIN + 8192; //!< command not supported by device

  char const * const errorNames[] = {
    "OTHER",
    "NUM_MOTORS",
    "RANGE",
    "CALIBRATION",
    "TIMEOUT",
    "TRAJ_CMD",
    "HW_ESTOP",
    "SW_ESTOP",
    "TRAJ_EXEC",
    "POS_ERROR",
    "OVERCURRENT",
    "POWER_FAULT",
    "HW_COMM",
    "UNSUPPORTED"
  };

  int const NUM_ERRORS = sizeof(errorNames) / sizeof(char const * const);
  void printMotorStatus(int status)
  {
    cout << "[";
    if (status >= 0) {
      char const * name = "UNKNOWN";
      switch(status) {
      case KNMOTOR_OKAY:
        name = "OKAY";
        break;
      case KNMOTOR_BUSY:
        name = "BUSY";
        break;
      case KNMOTOR_BUSY_INTERRUPTABLE:
        name = "INTERRUPTABLE";
        break;
      case KNMOTOR_BUSY_CALIBRATING:
        name = "CALIBRATE";
        break;
      default:
        break;
      }
      cout << name;
    }
    else {
      cout << "ERR: ";
      // kill negative sign
      status &= INT_MAX;
      int bit = 1;
      int errors = 0;
      for (int i = 0; i < NUM_ERRORS; ++i) {
        if ((status & bit) != 0) {
          if (errors > 0) {
            cout << "|";
          }
          cout << errorNames[i];
          ++errors;
        }
        bit <<= 1;
      }
    }
    cout << "]";
  }

  char const * const ctrlModes[] = {
    "CTRL_POSITION",
    "CTRL_TRAPECOID",
    "CTRL_TRAJECTORY",
    "CTRL_HOLD",
    "CTRL_OFF"
  };
  char const * const positionModes[] = {
    "POS_ABS",
    "POS_REL",
    "POS_NA"
  };
}

namespace rapid
{
  typedef GenericPrinter_T<rapid::ext::arc::WheelGroupSample> WheelGroupSamplePrinter;

  namespace
  {
    void printFloat(double value, int width = 5, float scale = 1.f)
    {
      cout.precision(1);
      cout.width(width);
      cout.fill(' ');
      cout << fixed << value * scale;
    };

    void printFloatSequence(FloatSequence32 const& seq, int width = 5, float scale = 1.f)
    {
      cout << "[";
      for (int i = 0; i < seq.length(); ++i) {
        if (i > 0) {
          cout << ", ";
        }
        printFloat(seq[i], width, scale);
      }
      cout << "]";
    }
  }

  template<>
  void
  GenericPrinter_T<rapid::ext::arc::WheelGroupSample>::Printer::operator() (rapid::ext::arc::WheelGroupSample const * event) throw()
  {
    assert(event != NULL);

    if (s_verbose > 3) {
      rapid::ext::arc::WheelGroupSample::TypeSupport::print_data(event);
    }
    else {
      cout << "{";
      if (s_verbose > 1) {
        cout << event->hdr << endl;
      }
      else {
        cout << rapid::RapidHelper::rapidTime2AceTimeValue(event->hdr.timeStamp)
             << ", ";
        printMotorStatus(event->hdr.statusCode);
        cout << endl;
      }
      if (event->motorStatus.length() > 0) {
        cout << "motorStatus: {";
        for (int i = 0; i < event->motorStatus.length(); ++i) {
          if (i > 0) {
            cout << ", ";
          }
          printMotorStatus(event->motorStatus[i]);
        }
        cout << "}" << endl;
      }

      // current state
      cout << "{";
      printFloat(event->curvature);
      cout << ", ";
      printFloat(event->crabAngle);
      cout << ", ";
      printFloat(event->speed);
      cout << ", ";
      printFloat(event->curvatureRate);
      cout << "}";

      if (s_verbose > 0) {

        cout << ", " << rapid::RapidHelper::rapidTime2AceTimeValue(event->targetTime);

        // target state
        cout << ", {";
        printFloat(event->targetCurvature);
        cout << ", ";
        printFloat(event->targetCrabAngle);
        cout << ", ";
        printFloat(event->targetSpeed);
        cout << ", ";
        printFloat(event->targetCurvatureRate);
        cout << ", ";
        printFloat(event->targetCrabRate);
        cout << "}";

        if (s_verbose > 1) {
          cout << endl
               << "[ ";
          for (int i = 0; i < event->motors.length(); ++i) {
            if (i > 0) {
              cout << ", " << endl << "  ";
            }
            cout << "{";
            printFloat(event->motors[i].position, 8, 180./M_PI);
            cout << ", ";
            printFloat(event->motors[i].speed, 5, 180./M_PI);

            if (s_verbose > 2) {
              cout << ", {";
              printFloat(event->motors[i].cmd.position, 8, 180./M_PI);
              cout << ", ";
              printFloat(event->motors[i].cmd.speed, 5, 180./M_PI);
              cout << ", ";
              printFloat(event->motors[i].cmd.acc, 5, 180./M_PI);
              cout << ", "
                   << ctrlModes[event->motors[i].cmd.ctrlMode] << ", "
                   << positionModes[event->motors[i].cmd.posMode]
                   << "}";
            }
            cout << "}";
          }
          cout << "]";
        }
      }

      if (s_verbose > 2) {
        cout << endl
             << "currents (amp): ";
        printFloatSequence(event->currents);
        cout << endl;
        cout << "temperatures (C): ";
        printFloatSequence(event->temperatures);
        cout << endl;
      }
      cout << "}" << endl;
    }
  }
}

using namespace rapid;

int main(int argc, char * argv[])
{
  WheelGroupSamplePrinter printer(argc, argv, "RapidSampleQos");
  printer.run(ext::arc::WHEELGROUP_SAMPLE_TOPIC);

  return 0;
}
