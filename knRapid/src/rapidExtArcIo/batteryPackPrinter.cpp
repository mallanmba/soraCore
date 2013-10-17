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
#include "BatteryPackIo.h"
#include "RapidExtArcIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidIo/HeaderIo.h"

#include "rapidExtArcDds/BatteryPackConfig.h"
#include "rapidExtArcDds/BatteryPackConfigSupport.h"
#include "rapidExtArcDds/BatteryPackSample.h"
#include "rapidExtArcDds/BatteryPackSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include "rapidUtil/RapidHelper.h"

#include "miro/TimeHelper.h"

#include <iostream>

using namespace std;

struct BitName
{
  char bit;
  char const * const name;
};

BitName bitNames[] = {
  { 'p', "PRESENT" },
  { 'c', "CHARGING" },
  { 's', "SUPPLYING POWER" },
  { 'P', "CHARGE POWER PRESENT" },
  { 'N', "POWER NO GOOD" },
  { 'I', "CHARGE INHIBITED"}
};

int const NUM_BIT_NAMES = sizeof(bitNames) / sizeof(BitName);


void printBitNames(char status)
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



namespace rapid
{
  typedef TopicPairApp_T<ext::arc::BatteryPackConfig, ext::arc::BatteryPackSample, ext::arc::BatteryPackTopicPairParameters> TopicPairApp;

  template<>
  void TopicPairApp::Printer::printData(ext::arc::BatteryPackSample const& event)
  {
    // print csv
    
    if (s_verbose < 4) {
      cout << "BatteryPackSample: {" << endl;
      if (s_verbose > 2) {
        cout  <<   event.hdr <<", " << endl;
      }
      cout << "message = " << event.message << endl
           << "minutes to empty = " << event.minutesToEmpty 
           << ", overall charge = " << (int) event.overallCharge << endl;
      
      
      if (s_verbose > 0) {
        cout  << "{";
        // print battery slots
        // print serial, temperature
        if (s_verbose > 1) {
          
        }
        // print voltage, current, absolute state
        
        // print relative, remainingCapacity, fullChargeCapacity, remainingTime, averageRemainingTime, averageRemainingChargeTime, numberOfChargeCycles
        if (s_verbose > 2) {
          
          
        }
      }
      cout << "}" << endl;
    }
    else {
      ext::arc::BatteryPackSample::TypeSupport::print_data(&event);
    }
  }
}

using namespace rapid;

int main(int argc, char * argv[])
{
  ext::arc::BatteryPackTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::arc::BATTERYPACK_CONFIG_TOPIC, ext::arc::BATTERYPACK_SAMPLE_TOPIC);

  return 0;
}
