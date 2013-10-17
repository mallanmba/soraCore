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
#ifndef rapid_NavMapHelper_h
#define rapid_NavMapHelper_h

#include "rapidExtIo_Export.h"

namespace rapid
{
  namespace ext
  {
    class NavMapConfig;
    class NavMapSample;
  

    //  rapidExtIo_Export extern std::ostream& operator<< (std::ostream& ostr, ext::NavMapConfig const& rhs);
    //  rapidExtIo_Export extern std::ostream& operator<< (std::ostream& ostr, ext::NavMapSample const& rhs);
    
    struct rapidExtIo_Export MapLayerParameters
    {
      char const * const name;
      double offset;
      float scale;
      unsigned short density;
      unsigned short entries;
    };
    
    struct rapidExtIo_Export MapParameters
    {
      MapLayerParameters const * const shortLayers;
      MapLayerParameters const * const octetLayers;
      unsigned int numShortLayers;
      unsigned int numOctetLayers;
    };
    
    class rapidExtIo_Export NavMapHelper
    {
    public:
      // default index for map types
      static int const HEIGHT_IDX = 0;    // 16 bit map
      static int const GOODNESS_IDX = 0;  //  8 bit map
      static int const CERTAINTY_IDX = 1; //  8 bit map
      static int const NORMAL_IDX = 2;    //  8 bit map
      static int const ROUGHNESS_IDX = 3; //  8 bit map
      
      static int const MIN_IDX = 0;  // 8 bit map
      static int const MAX_IDX = 1;  // 8 bit map
      
      static MapLayerParameters const DEFAULT_HEIGHT_LAYER_PARAMS;
      static MapLayerParameters const DEFAULT_GOODNESS_LAYER_PARAMS;
      static MapLayerParameters const DEFAULT_CERTAINTY_LAYER_PARAMS;
      static MapLayerParameters const DEFAULT_NORMAL_LAYER_PARAMS;
      static MapLayerParameters const DEFAULT_ROUGHNESS_LAYER_PARAMS;
      static MapLayerParameters const DEFAULT_MIN_LAYER_PARAMS;
      static MapLayerParameters const DEFAULT_MAX_LAYER_PARAMS;
      
      static MapParameters const DEFAULT_NAVIGATION_MAP_PARAMS;
      static MapParameters const DEFAULT_TRAVERSABILITY_MAP_PARAMS;
      static MapParameters const DEFAULT_DSTAR_MAP_PARAMS;
      
      
      static void initConfig(ext::NavMapConfig& config, 
                             char const * frameName, short numCellsXY, float cellSizeXY,
                             double offsetX = 0., double offsetY = 0.); 
      
      static int initConfigAndSample(rapid::ext::NavMapConfig& config, rapid::ext::NavMapSample& sample,
                                     char const * frameName, short numCellsXY, float cellSizeXY,
                                     MapParameters const& params);
      
      static void addOctetLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, 
                                char const * layerName, double offset = 0., float scale = 0.01f, short density = 1, short entries = 1);
      static void addShortLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, 
                                char const * layerName, double offset = 0., float scale = 0.01f, short density = 1, short entries = 1);
      static void addOctetLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, MapLayerParameters const& params);
      static void addShortLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, MapLayerParameters const& params);
      
      static int octetLayerIdx(ext::NavMapConfig const& config, char const * layerName);
      static int shortLayerIdx(ext::NavMapConfig const& config, char const * layerName);
    };
  }
}

#endif // rapid_NavMapHelper_h
