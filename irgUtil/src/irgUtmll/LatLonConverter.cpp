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
#include <math.h>

#include <iostream>
#include <vector>
#include <string>

#include "LatLonConverter.h"
#include "Utmll.h"

// Offset between UTM and site frame.  For Haughton: (419660,8373890)
#define HMP_NORTHING_0 (8373890)
#define HMP_EASTING_0 (419660)

// Offset between UTM and site frame.  For Marscape: (4141480,582670)
#define ARC_NORTHING_0 (4141480)
#define ARC_EASTING_0 (582670)

// Site frame offset for Moses Lake, WA (5215600,327000) 
#define ML_NORTHING_0 (5215600)
#define ML_EASTING_0 (327000)

// Site frame offset for Black Point Lava Flow, AZ (3949752,457797) 
#define BP_NORTHING_0 (3949752)
#define BP_EASTING_0 (457797)

// Offset between UTM and site frame.  For Hawaii: (,)
#define HAWAII_NORTHING_0 (2189500)
#define HAWAII_EASTING_0 (243000)

namespace irg {

  // Construct not knowing anything yet
  LatLonConverter::LatLonConverter()
  {
  }

  // (DEPRECATED!) Construct using a UTM zone only, assuming zone identifies site frame origin uniquely
  LatLonConverter::LatLonConverter(int zoneNumber)
  {
    init(zoneNumber);
  }

  // (DEPRECATED!) Construct using longitude only
  LatLonConverter::LatLonConverter(double lon)
  {
    // Compute UTM zone from longitude
    int zoneNumber = (int)floor( ( lon + 186.0 )/6.0 );
    init(zoneNumber);
  }
  
  // Construct using full UTM info
  LatLonConverter::LatLonConverter(const SiteFrameParams& params) :
    m_params(params)
  {}

  void
  LatLonConverter::set_zone(int zoneNumber)
  {
    init(zoneNumber);
  }

  int
  LatLonConverter::get_zone() const
  {
    return m_params.zoneNumber;
  }


  void
  LatLonConverter::init(const SiteFrameParams& params)
  {
    m_params = params;
  }

  // Initialize using the UTM zone
  void
  LatLonConverter::init(int zoneNumber)
  {
    std::cerr << "LatLonConverter::init(int zoneNumber) is DEPRECATED!  please use the 3-argument constructor instead"
	      << std::endl;

    // UTM Zone 10 - California (Marscape)
    // UTM Zone 11 - Moses Lake
    // UTM Zone 12 - Arizona (Apollo 11 test site near Flagstaff)
    // UTM Zone 16 - Haughton Crater

    // Initialize UTM <-> Site Frame offset based on zone
    switch(zoneNumber) {
    case 5:
      // UTM Zone for Hawaii field test
      init(SiteFrameParams(zoneNumber, true, HAWAII_EASTING_0, HAWAII_NORTHING_0));
      break;
    case 10:
      // UTM Zone for Ames (Marscape)
      init(SiteFrameParams(zoneNumber, true, ARC_EASTING_0, ARC_NORTHING_0));
      break;
    case 11:
      // UTM Zone for Moses Lake
      init(SiteFrameParams(zoneNumber, true, ML_EASTING_0, ML_NORTHING_0));
      break;
    case 12:
      // UTM Zone for Black Point
      init(SiteFrameParams(zoneNumber, true, BP_EASTING_0, BP_NORTHING_0));
      break;
    case 16:
      // UTM Zone for Haughton Crater
      init(SiteFrameParams(zoneNumber, true, HMP_EASTING_0, HMP_NORTHING_0));
      break;
    default:
      std::cerr << "No site frame offset for zone " << zoneNumber << std::endl;
      init(SiteFrameParams(zoneNumber, true, 0, 0));
    }
  }

  bool
  LatLonConverter::convertUTMtoSF(const Utm& utm,
				  SitePos& sp) const
  {
    sp.x = utm.north - m_params.north0;
    sp.y = utm.east - m_params.east0;
    return true;
  }

  bool
  LatLonConverter::convertSFtoUTM(const SitePos& sp,
				  Utm& utm) const
  {
    utm.east = m_params.east0 + sp.y;
    utm.north = m_params.north0 + sp.x;
    return true;
  }

  bool
  LatLonConverter::convertLLtoUTM(const LatLon& ll,
				  Utm& utm) const
  {
    int dummyZoneNumber;
    char dummyZoneLetter;
    Utmll::toUtm(ll.lat, ll.lon,
		 utm.east, utm.north,
		 dummyZoneNumber, dummyZoneLetter,
		 m_params.ellipsoid.c_str());
    return true;
  }

  bool
  LatLonConverter::convertUTMtoLL(const Utm& utm,
				  LatLon& ll) const
  {
    Utmll::toLatLon(utm.east, utm.north,
		    m_params.zoneNumber, m_params.northernHemisphere,
		    ll.lat, ll.lon,
		    m_params.ellipsoid.c_str());
    return true;
  }

  // Convert Site Frame coordinates to Lat/Lon coordinates using Proj.4 library
  bool
  LatLonConverter::convertSFtoLL(const SitePos& sp,
				 LatLon& ll) const
  {
    Utm utm;
    return convertSFtoUTM(sp, utm) && convertUTMtoLL(utm, ll);
  }

  // Convert Lat/Lon coordinates to Site Frame 
  bool
  LatLonConverter::convertLLtoSF(const LatLon& ll,
				 SitePos& sp) const
  {
    Utm utm;
    return convertLLtoUTM(ll, utm) && convertUTMtoSF(utm, sp);
  }

} // namespace irg
