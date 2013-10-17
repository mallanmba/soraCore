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

#include "rapidExtDds/SystemInfoConfig.h"
#include "rapidExtDds/SystemInfoConfigSupport.h"
#include "rapidExtDds/ExtConstants.h"

using namespace std;

int main(int argc, char * argv[])
{
  rapid::GenericPrinter_T<rapid::ext::SystemInfoConfig> 
    printer(argc, argv,
             "RapidReliableDurableQos");

  printer.run(rapid::ext::SYSTEMINFO_CONFIG_TOPIC);

  return 0;
}
