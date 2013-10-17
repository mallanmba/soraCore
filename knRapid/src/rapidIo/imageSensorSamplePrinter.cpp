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
#include "BaseTypesIo.h"

#include "rapidUtil/GenericPrinter_T.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidDds/ImageSensorSample.h"
#include "rapidDds/ImageSensorSampleSupport.h"
#include "rapidDds/ImageMetadataSupport.h"
#include "rapidDds/RapidConstants.h"
#include "rapidIo/HeaderIo.h"

#include <ace/Arg_Shifter.h>

#include <iostream>

using namespace std;
using namespace rapid;

string profile = "RapidImageSensorSampleProfile";

namespace rapid
{
  template<>
  void
  GenericPrinter_T<ImageSensorSample>::Printer::operator() (ImageSensorSample const * event) throw() 
  {
    assert (event != NULL);

    if (s_verbose < 4) {
      if (s_verbose > 1) {
        cout << event->hdr << endl;
      }
      cout << "image sensor: " << event->meta.sensorName << endl
           << "time: " 
           << rapid::RapidHelper::rapidTime2AceTimeValue(event->hdr.timeStamp)
           << endl
           << "now:  " << ACE_OS::gettimeofday() << endl
           << "image type: " << event->mimeType << endl
           << "image size: " << event->data.length() << endl;

      if (s_verbose > 2) {
        ImageMetadataTypeSupport::print_data(&event->meta);

      }
    }
    else {
      ImageSensorSample::TypeSupport::print_data(event);
    }
  }
}

int main(int argc, char * argv[])
{
  GenericPrinter_T<ImageSensorSample> printer(argc, argv, profile);
  printer.run(IMAGESENSOR_SAMPLE_TOPIC);

  return 0;
}
