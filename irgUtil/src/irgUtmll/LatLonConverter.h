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
#ifndef LATLONCONVERTER_H
#define LATLONCONVERTER_H

#include <iostream>
#include <vector>

#include "irgUtmll_Export.h"

namespace irg {

#define UNINITIALIZED_DOUBLE (-99e+20)

  struct LatLon {
    double lat, lon;

    LatLon(void)
    : lat(UNINITIALIZED_DOUBLE),
      lon(UNINITIALIZED_DOUBLE)
    {}

    LatLon(double _lat, double _lon)
    : lat(_lat),
      lon(_lon)
    {}
  };

  struct Utm {
    double east, north;

    Utm(void)
    : east(UNINITIALIZED_DOUBLE),
      north(UNINITIALIZED_DOUBLE)
    {}

    Utm(double _east, double _north)
    : east(_east),
      north(_north)
    {}
  };

  struct SitePos {
    double x, y;

    SitePos(void)
    : x(UNINITIALIZED_DOUBLE),
      y(UNINITIALIZED_DOUBLE)
    {}

    SitePos(double _x, double _y)
    : x(_x),
      y(_y)
    {}
  };

  struct SiteFrameParams {
    int zoneNumber;
    bool northernHemisphere;
    double east0, north0;
    std::string ellipsoid;

    SiteFrameParams(void)
    : zoneNumber(-1),
      northernHemisphere(true),
      east0(UNINITIALIZED_DOUBLE),
      north0(UNINITIALIZED_DOUBLE),
      ellipsoid("?")
    {}

    SiteFrameParams(int _zoneNumber, bool _northernHemisphere,
		    double _east0, double _north0,
		    const char* _ellipsoid = "WGS-84")
    : zoneNumber(_zoneNumber),
      northernHemisphere(_northernHemisphere),
      east0(_east0),
      north0(_north0),
      ellipsoid(_ellipsoid)
    {}
  };

  class irgUtmll_Export LatLonConverter
  {
  protected:
    SiteFrameParams m_params;

  public:
    // Construct not knowing anything yet
    LatLonConverter(void);

    // Construct using full site frame params
    LatLonConverter(const SiteFrameParams& params);

    // (DEPRECATED!) Construct using a UTM zone only, assuming zone identifies site frame origin uniquely
    LatLonConverter(int utmzone);

    // (DEPRECATED!) Construct using a longitude only
    LatLonConverter(double longitude);

    // Initialize using the UTM zone
    void set_zone(int utmzone); // DEPRECATED!
    int get_zone() const;
    void init(int utmzone); // DEPRECATED!
    void init(const SiteFrameParams& params);

    bool convertUTMtoSF(const Utm& utm, SitePos& sp) const;
    bool convertSFtoUTM(const SitePos& sp, Utm& utm) const;
    bool convertLLtoUTM(const LatLon& ll, Utm& utm) const;
    bool convertUTMtoLL(const Utm& utm, LatLon& ll) const;
    bool convertSFtoLL(const SitePos& sp, LatLon& ll) const;
    bool convertLLtoSF(const LatLon& ll, SitePos& sp) const;

    // convenience functions for converting vectors or 'vectors of vectors'

    // example usage:
    //   LatLonConverter conv(params);
    //   std::vector<LatLon> llVec;
    //   std::vector<SitePos> spVec;
    //   conv.convertVector(&conv.convertLLtoSF, llVec, spVec);
    template<class In, class Out>
    bool
    convertVector(bool (*convFunc)(const In& inElt, Out& outElt),
		  const std::vector<In>& inVec,
		  std::vector<Out>& outVec) const
    {
      outVec.resize(inVec.size());
      for (unsigned i=0; i < inVec.size(); i++){
	if (!convFunc(inVec[i], outVec[i])) return false;
      }
      return true;
    }

    template<class In, class Out>
    bool
    convertVectorVector(bool (*convFunc)(const In& inElt, Out& outElt),
			const std::vector<std::vector<In> >& inVecVec,
			std::vector<std::vector<Out> >& outVecVec) const
    {
      outVecVec.resize(inVecVec);
      for (unsigned i=0; i < inVecVec.size(); i++){
	if (!convertVector(convFunc, inVecVec[i], outVecVec[i])) return false;
      }
      return true;
    }
  };

} // namespace irg

#endif // LATLONCONVERTER_H
