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
#include <stdio.h>
#include <stdlib.h>
#include "Utmll.h"

using namespace irg;

//=========================================
int main(int argc, char* argv[] ) 
{
  bool argsOk = true;
  if(argc != 5) {
    fprintf(stderr, "********************************************************\n");
    fprintf(stderr, "Usage: %s <zoneNumber> <zoneLetter> <easting> <northing>\n", argv[0]);
    fprintf(stderr, "********************************************************\n");
    argsOk = false;
    //return -1;
  }
  
   // default to site frame
  int    zoneNumber   = 10;
  char   zoneLetter   = 'S';
  double easting      =  582670.0;
  double northing     = 4141480.0;
  double outLatitude  = 0;
  double outLongitude = 0;
  
  if(argsOk) {
    zoneNumber = atoi(argv[1]);
    zoneLetter = argv[2][0];
    easting    = atof(argv[3]);
    northing   = atof(argv[4]);
  }
  
  fprintf(stdout, "-----------------------\n");
  fprintf(stdout, "zone      =  %d%c\n", zoneNumber, zoneLetter);
  fprintf(stdout, "easting   = % .13f\n", easting);
  fprintf(stdout, "northing  = % .13f\n", northing);
  fprintf(stdout, "-----------------------\n");
  
  Utmll::toLatLon(easting, northing, zoneNumber, zoneLetter,
                outLatitude, outLongitude);
  
  fprintf(stdout, "latitude  = % .13f\n", outLatitude);
  fprintf(stdout, "longitude = % .13f\n", outLongitude);
  fprintf(stdout, "-----------------------\n");
  
  
  return 0;
}
