#include <stdio.h>
#include <stdlib.h>

#include "Utmll.h"

using namespace irg;

//=========================================
int main(int argc, char* argv[] ) 
{
  bool argsOk = true;
  if(argc != 3) {
    fprintf(stderr, "********************************************************\n");
    fprintf(stderr, "Usage: %s <lat> <lon>\n", argv[0]);
    fprintf(stderr, "********************************************************\n");
    argsOk = false;
    //return -1;
  }
  
   // default to site frame
  int    zoneNumber   =  0;
  char   zoneLetter   =  0;
  double easting      =  0.0;
  double northing     =  0.0;
  double latitude     =   37.4164347908675;
  double longitude    = -122.0657650621390;
  
  if(argsOk) {
    latitude  = atof(argv[1]);
    longitude = atof(argv[2]);
  }
  
  fprintf(stdout, "-----------------------\n");
  fprintf(stdout, "latitude  = % .13f\n", latitude);
  fprintf(stdout, "longitude = % .13f\n", longitude);
  fprintf(stdout, "-----------------------\n");
  
  Utmll::toUtm(latitude, longitude,
               easting, northing, zoneNumber, zoneLetter);

  fprintf(stdout, "zone      =  %d%c\n", zoneNumber, zoneLetter);
  fprintf(stdout, "easting   = % .13f\n", easting);
  fprintf(stdout, "northing  = % .13f\n", northing);
  fprintf(stdout, "-----------------------\n");
  
  return 0;
}
