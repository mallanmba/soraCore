// lat long to utm conversion
// refactored from http://www.gpsy.com/gpsinfo/geotoutm/
#ifndef irg_Utmll_h
#define irg_Utmll_h

#include "irgUtmll_Export.h"

//! Intelligent Robotics Group (IRG) namespace
/** This namespace is used by the irgUtils module.
 * Code in this namespace is expected to have minimal outside dependencies.
 */
namespace irg
{
  //! Utm <-> LatLong converter
  /** Utm and LatLong coordinate systems are used interchangingly throughout 
   * the geo-referencing software parts. So we need a way to convert that.
   */
  class irgUtmll_Export Utmll 
  {
  public:
    static void toUtm(const double lat, const double lon,
                      double& utmEasting, double& utmNorthing, 
                      int& zoneNumber, char& zoneLetter, const char* ref = "WGS-84" );

    static void toLatLon( const double utmEasting, const double utmNorthing, 
                          const int zoneNumber, const bool northernHemisphere,
                          double& lat,  double& lon, const char* ref = "WGS-84" );

    static void toLatLon( const double utmEasting, const double utmNorthing, 
                          const int zoneNumber, char zoneLetter,
                          double& lat,  double& lon, const char* ref = "WGS-84" );


    static char utmLetterDesignator(double lat);
    static bool isNorthernHemisphere(char letterDesignator);
  };  
} 

#endif // irg_Utmll_h
