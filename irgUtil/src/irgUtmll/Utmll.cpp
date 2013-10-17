#ifdef WIN32
#  define snprintf _snprintf 
#endif //WIN32

// lat long to utm conversion
// refactored from http://www.gpsy.com/gpsinfo/geotoutm/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>

#include "Utmll.h"

/**
 * Reference ellipsoids derived from Peter H. Dana's website-
 * http://www.utexas.edu/depts/grg/gcraft/notes/datum/elist.html
 * Department of Geography, University of Texas at Austin
 * Internet: pdana@mail.utexas.edu
 * 3/22/95
 * 
 * Source:
 * Defense Mapping Agency. 1987b. DMA Technical Report: Supplement to Department of Defense World Geodetic System
 * 1984 Technical Report. Part I and II. Washington, DC: Defense Mapping Agency
 */
namespace irg {

const double PI = 3.14159265358979323846;
const double FOURTHPI = PI / 4;
const double deg2rad = PI / 180;
const double rad2deg = 180.0 / PI;


class Ellipsoid
{
public:
  Ellipsoid(){};
  Ellipsoid(int Id, const char* name, double radius, double ecc){
    id = Id; ellipsoidName = name;
    EquatorialRadius = radius; eccentricitySquared = ecc;
  }

  int     id;
  const char* ellipsoidName;
  double  EquatorialRadius;
  double  eccentricitySquared;

};

static Ellipsoid ellipsoid[] = {
//  id, Ellipsoid name, Equatorial Radius, square of eccentricity
    Ellipsoid( -1, "Placeholder", 0, 0),//placeholder only, To allow array indices to match id numbers
    Ellipsoid(  1, "Airy",                  6377563, 0.00667054),
    Ellipsoid(  2, "Australian National",   6378160, 0.006694542),
    Ellipsoid(  3, "Bessel 1841",           6377397, 0.006674372),
    Ellipsoid(  4, "Bessel 1841 (Nambia)",  6377484, 0.006674372),
    Ellipsoid(  5, "Clarke 1866",           6378206, 0.006768658),
    Ellipsoid(  6, "Clarke 1880",           6378249, 0.006803511),
    Ellipsoid(  7, "Everest",               6377276, 0.006637847),
    Ellipsoid(  8, "Fischer 1960 (Mercury)",6378166, 0.006693422),
    Ellipsoid(  9, "Fischer 1968",          6378150, 0.006693422),
    Ellipsoid( 10, "GRS 1967",              6378160, 0.006694605),
    Ellipsoid( 11, "GRS 1980",              6378137, 0.00669438),
    Ellipsoid( 12, "Helmert 1906",          6378200, 0.006693422),
    Ellipsoid( 13, "Hough",                 6378270, 0.00672267),
    Ellipsoid( 14, "International",         6378388, 0.00672267),
    Ellipsoid( 15, "Krassovsky",            6378245, 0.006693422),
    Ellipsoid( 16, "Modified Airy",         6377340, 0.00667054),
    Ellipsoid( 17, "Modified Everest",      6377304, 0.006637847),
    Ellipsoid( 18, "Modified Fischer 1960", 6378155, 0.006693422),
    Ellipsoid( 19, "South American 1969",   6378160, 0.006694542),
    Ellipsoid( 20, "WGS-60",                6378165, 0.006693422),
    Ellipsoid( 21, "WGS-66",                6378145, 0.006694542),
    Ellipsoid( 22, "WGS-72",                6378135, 0.006694318),
    Ellipsoid( 23, "WGS-84",                6378137, 0.081819190843*0.081819190843)
};

inline int getEllipsoidIndex(const char* name) {
  int retVal = -1;
  for(int i = 23; i >= 0; i--) {
    if( strcmp(name, ellipsoid[i].ellipsoidName) == 0 ) {
      retVal = i;
      break;
    }
  }
  if(retVal < 0) {
    fprintf(stderr, "Utmll ERROR: did not recognize reference ellipsoid name (%s), using WGS-84 instead.\n", name);
    retVal = 23;
  }
  return retVal;
}

/**
 * converts lat/long to UTM coords.  Equations from USGS Bulletin 1532
 * East Longitudes are positive, West longitudes are negative.
 * North latitudes are positive, South latitudes are negative
 * lat and lon are in decimal degrees
 * Written by Chuck Gantz- chuck.gantz@globalstar.com
 */
void Utmll::toUtm(const double lat, const double lon,
             double& utmEasting, double& utmNorthing, int& zoneNumber, char& zoneLetter, const char* ref)
{
  int ReferenceEllipsoid = getEllipsoidIndex(ref);
  
  double a = ellipsoid[ReferenceEllipsoid].EquatorialRadius;
  double eccSquared = ellipsoid[ReferenceEllipsoid].eccentricitySquared;
  double k0 = 0.9996;

  double lonOrigin;
  double eccPrimeSquared;
  double N, T, C, A, M;

  // Make sure the longitude is between -180.00 .. 179.9
  double longTemp = (lon+180)-int((lon+180)/360)*360-180; // -180.00 .. 179.9;

  double latRad = lat*deg2rad;
  double lonRad = longTemp*deg2rad;
  double lonOriginRad;

  zoneNumber = int((longTemp + 180)/6) + 1;

  if ( lat >= 56.0 && lat < 64.0 && longTemp >= 3.0 && longTemp < 12.0 )
    zoneNumber = 32;

  // Special zones for Svalbard
  if ( lat >= 72.0 && lat < 84.0 ) {
    if (      longTemp >= 0.0  && longTemp <  9.0 ) zoneNumber = 31;
    else if ( longTemp >= 9.0  && longTemp < 21.0 ) zoneNumber = 33;
    else if ( longTemp >= 21.0 && longTemp < 33.0 ) zoneNumber = 35;
    else if ( longTemp >= 33.0 && longTemp < 42.0 ) zoneNumber = 37;
  }
  lonOrigin = (zoneNumber - 1)*6 - 180 + 3;  //+3 puts origin in middle of zone
  lonOriginRad = lonOrigin * deg2rad;

  //compute the UTM Zone from the latitude and longitude
  //snprintf(utmZone, 4, "%d%c", zoneNumber, utmLetterDesignator(lat));
  zoneLetter = utmLetterDesignator(lat);

  eccPrimeSquared = (eccSquared)/(1-eccSquared);

  N = a/sqrt(1-eccSquared*sin(latRad)*sin(latRad));
  T = tan(latRad)*tan(latRad);
  C = eccPrimeSquared*cos(latRad)*cos(latRad);
  A = cos(latRad)*(lonRad-lonOriginRad);

  M = a*((1	- eccSquared/4		- 3*eccSquared*eccSquared/64	- 5*eccSquared*eccSquared*eccSquared/256)*latRad
         - (3*eccSquared/8	+ 3*eccSquared*eccSquared/32	+ 45*eccSquared*eccSquared*eccSquared/1024)*sin(2*latRad)
         + (15*eccSquared*eccSquared/256 + 45*eccSquared*eccSquared*eccSquared/1024)*sin(4*latRad)
         - (35*eccSquared*eccSquared*eccSquared/3072)*sin(6*latRad));

  utmEasting = (double)(k0*N*(A+(1-T+C)*A*A*A/6
                              + (5-18*T+T*T+72*C-58*eccPrimeSquared)*A*A*A*A*A/120)
                        + 500000.0);

  utmNorthing = (double)(k0*(M+N*tan(latRad)*(A*A/2+(5-T+9*C+4*C*C)*A*A*A*A/24
                             + (61-58*T+T*T+600*C-330*eccPrimeSquared)*A*A*A*A*A*A/720)));
  if (lat < 0) {
    utmNorthing += 10000000.0; //10000000 meter offset for southern hemisphere
  }
}

/**
 * This routine determines the correct UTM letter designator for the given latitude
 * returns 'Z' if latitude is outside the UTM limits of 84N to 80S
 * Written by Chuck Gantz- chuck.gantz@globalstar.com
 */
char Utmll::utmLetterDesignator(double lat)
{
  char letterDesignator;

  if ((84 >= lat) && (lat >= 72)) letterDesignator = 'X';
  else if (( 72 > lat) && (lat >=  64)) letterDesignator = 'W';
  else if (( 64 > lat) && (lat >=  56)) letterDesignator = 'V';
  else if (( 56 > lat) && (lat >=  48)) letterDesignator = 'U';
  else if (( 48 > lat) && (lat >=  40)) letterDesignator = 'T';
  else if (( 40 > lat) && (lat >=  32)) letterDesignator = 'S';
  else if (( 32 > lat) && (lat >=  24)) letterDesignator = 'R';
  else if (( 24 > lat) && (lat >=  16)) letterDesignator = 'Q';
  else if (( 16 > lat) && (lat >=   8)) letterDesignator = 'P';
  else if ((  8 > lat) && (lat >=   0)) letterDesignator = 'N';
  else if ((  0 > lat) && (lat >=  -8)) letterDesignator = 'M';
  else if (( -8 > lat) && (lat >= -16)) letterDesignator = 'L';
  else if ((-16 > lat) && (lat >= -24)) letterDesignator = 'K';
  else if ((-24 > lat) && (lat >= -32)) letterDesignator = 'J';
  else if ((-32 > lat) && (lat >= -40)) letterDesignator = 'H';
  else if ((-40 > lat) && (lat >= -48)) letterDesignator = 'G';
  else if ((-48 > lat) && (lat >= -56)) letterDesignator = 'F';
  else if ((-56 > lat) && (lat >= -64)) letterDesignator = 'E';
  else if ((-64 > lat) && (lat >= -72)) letterDesignator = 'D';
  else if ((-72 > lat) && (lat >= -80)) letterDesignator = 'C';
  else letterDesignator = 'Z'; //This is here as an error flag to show that the Latitude is outside the UTM limits

  return letterDesignator;
}

bool Utmll::isNorthernHemisphere(char letter) {
  char u = toupper(letter);
  if(u < 'N')
    return false;
  return true;
}


/**
 * converts UTM coords to lat/long.  Equations from USGS Bulletin 1532
 * East Longitudes are positive, West longitudes are negative.
 * North latitudes are positive, South latitudes are negative
 * lat and lon are in decimal degrees.
 * Written by Chuck Gantz- chuck.gantz@globalstar.com
 */
void Utmll::toLatLon(const double utmEasting, const double utmNorthing, const int zoneNumber, const bool northernHemisphere,
             double& lat,  double& lon, const char* ref )
{
  int ReferenceEllipsoid = getEllipsoidIndex(ref);

  double k0 = 0.9996;
  double a = ellipsoid[ReferenceEllipsoid].EquatorialRadius;
  double eccSquared = ellipsoid[ReferenceEllipsoid].eccentricitySquared;
  double eccPrimeSquared;
  double e1 = (1-sqrt(1-eccSquared))/(1+sqrt(1-eccSquared));
  double N1, T1, C1, R1, D, M;
  double lonOrigin;
  double mu, phi1, phi1Rad;
  double x, y;

  x = utmEasting - 500000.0; //remove 500,000 meter offset for longitude
  y = utmNorthing;
  
  if(!northernHemisphere) {
    y -= 10000000.0; //remove 10,000,000 meter offset used for southern hemisphere
  }

  lonOrigin = (zoneNumber - 1)*6 - 180 + 3;  //+3 puts origin in middle of zone

  eccPrimeSquared = (eccSquared)/(1-eccSquared);

  M = y / k0;
  mu = M/(a*(1-eccSquared/4-3*eccSquared*eccSquared/64-5*eccSquared*eccSquared*eccSquared/256));

  phi1Rad = mu	+ (3*e1/2-27*e1*e1*e1/32)*sin(2*mu)
            + (21*e1*e1/16-55*e1*e1*e1*e1/32)*sin(4*mu)
            +(151*e1*e1*e1/96)*sin(6*mu);
  phi1 = phi1Rad*rad2deg;

  N1 = a/sqrt(1-eccSquared*sin(phi1Rad)*sin(phi1Rad));
  T1 = tan(phi1Rad)*tan(phi1Rad);
  C1 = eccPrimeSquared*cos(phi1Rad)*cos(phi1Rad);
  R1 = a*(1-eccSquared)/pow(1-eccSquared*sin(phi1Rad)*sin(phi1Rad), 1.5);
  D = x/(N1*k0);

  lat = phi1Rad - (N1*tan(phi1Rad)/R1)*(D*D/2-(5+3*T1+10*C1-4*C1*C1-9*eccPrimeSquared)*D*D*D*D/24
                                        +(61+90*T1+298*C1+45*T1*T1-252*eccPrimeSquared-3*C1*C1)*D*D*D*D*D*D/720);
  lat = lat * rad2deg;

  lon = (D-(1+2*T1+C1)*D*D*D/6+(5-2*C1+28*T1-3*C1*C1+8*eccPrimeSquared+24*T1*T1)
          *D*D*D*D*D/120)/cos(phi1Rad);
  lon = lonOrigin + lon * rad2deg;
}

/**
 * @Overload
 */
void Utmll::toLatLon(const double utmEasting, const double utmNorthing, const int zoneNumber, char zoneLetter,
             double& lat,  double& lon, const char* ref )
{
  bool northernHemisphere;
  zoneLetter = toupper(zoneLetter);
  if ((zoneLetter - 'N') >= 0)
    northernHemisphere = true; //point is in northern hemisphere
  else {
    northernHemisphere = false; //point is in southern hemisphere
  }
  toLatLon(utmEasting, utmNorthing, zoneNumber, northernHemisphere, lat, lon, ref);
}

}; // namespace irg
