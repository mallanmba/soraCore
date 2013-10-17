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
#include "NavMapHelper.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidExtDds/NavMapConfig.h"
#include "rapidExtDds/NavMapSample.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <cassert>
#include <cstdlib>

namespace rapid
{
  namespace ext
  {
  int const NavMapHelper::HEIGHT_IDX;
  int const NavMapHelper::GOODNESS_IDX;
  int const NavMapHelper::CERTAINTY_IDX;
  int const NavMapHelper::NORMAL_IDX;

  MapLayerParameters const NavMapHelper::DEFAULT_HEIGHT_LAYER_PARAMS = {
    rapid::ext::NAVMAP_HEIGHT,
    0.,
    0.01f,
    2,
    1
  };

  MapLayerParameters const NavMapHelper::DEFAULT_GOODNESS_LAYER_PARAMS = {
    rapid::ext::NAVMAP_GOODNESS,
    0.,
    0.01f,
    1,
    1
  };

  MapLayerParameters const NavMapHelper::DEFAULT_CERTAINTY_LAYER_PARAMS = {
    rapid::ext::NAVMAP_CERTAINTY,
    0.,
    0.01f,
    1,
    1
  };

  MapLayerParameters const NavMapHelper::DEFAULT_NORMAL_LAYER_PARAMS = {
    rapid::ext::NAVMAP_NORMALS,
    0.,
    0.01f,
    2,
    2
  };

  MapLayerParameters const NavMapHelper::DEFAULT_ROUGHNESS_LAYER_PARAMS = {
    rapid::ext::NAVMAP_ROUGHNESS,
    0.,
    0.01f,
    1,
    1
  };
  
  MapLayerParameters const NavMapHelper::DEFAULT_MIN_LAYER_PARAMS = {
    "pessimistic",
    0.,
    0.01f,
    1,
    1
  };
  
  MapLayerParameters const NavMapHelper::DEFAULT_MAX_LAYER_PARAMS = {
    "optimistic",
    0.,
    0.01f,
    1,
    1
  };

  namespace 
  {
    MapLayerParameters const navShortLayers[] = {
      NavMapHelper::DEFAULT_HEIGHT_LAYER_PARAMS
    };
    unsigned short numNavShortLayers = sizeof(navShortLayers) / sizeof(MapLayerParameters);
    
    MapLayerParameters const navOctetLayers[] = {
      NavMapHelper::DEFAULT_GOODNESS_LAYER_PARAMS,
      NavMapHelper::DEFAULT_CERTAINTY_LAYER_PARAMS,
      NavMapHelper::DEFAULT_NORMAL_LAYER_PARAMS,
      NavMapHelper::DEFAULT_ROUGHNESS_LAYER_PARAMS
    };
    unsigned short numNavOctetLayers = sizeof(navOctetLayers) / sizeof(MapLayerParameters);
    
    MapLayerParameters const travOctetLayers[] = {
      NavMapHelper::DEFAULT_MIN_LAYER_PARAMS,
      NavMapHelper::DEFAULT_MAX_LAYER_PARAMS
    };
    unsigned short numTravOctetLayers = sizeof(travOctetLayers) / sizeof(MapLayerParameters);
  }

  MapParameters const NavMapHelper::DEFAULT_NAVIGATION_MAP_PARAMS = {
    navShortLayers,
    navOctetLayers,
    numNavShortLayers,
    numNavOctetLayers
  };

  MapParameters const NavMapHelper::DEFAULT_TRAVERSABILITY_MAP_PARAMS = {
    NULL,
    travOctetLayers,
    0,
    numTravOctetLayers
  };
  
  void 
  NavMapHelper::initConfig(ext::NavMapConfig& config, 
                           char const * referenceFrame, short numCellsXY, float cellSizeXY,
                           double offsetX, double offsetY)
  {
    strncpy(config.referenceFrame, referenceFrame, 127);
    config.referenceFrame[127] = 0;
    
    config.numCells[0] = numCellsXY;
    config.numCells[1] = numCellsXY;
    config.cellSize[0] = cellSizeXY;
    config.cellSize[1] = cellSizeXY;
    config.offset[0] = offsetX;
    config.offset[1] = offsetY;     
  }

  int
  NavMapHelper::initConfigAndSample(rapid::ext::NavMapConfig& config, rapid::ext::NavMapSample& sample,
                                    char const * referenceFrame, short numCellsXY, float cellSizeXY,
                                    MapParameters const& params)
  {
    rapid::RapidHelper::initHeader(config.hdr);
    rapid::RapidHelper::initHeader(sample.hdr);
    
    initConfig(config, referenceFrame, numCellsXY, cellSizeXY);
    
    for (unsigned int i = 0; i < params.numShortLayers; ++i) {
      addShortLayer(config, sample, params.shortLayers[i]);
    }
    for (unsigned int i = 0; i < params.numOctetLayers; ++i) {
      addOctetLayer(config, sample, params.octetLayers[i] );
    }
    
    // init sample
    for (int i = 0; i < 3; ++i)
      sample.location.xyz[i] = 0.;
    for (int i = 0; i < 9; ++i)
      sample.location.rot[i] = ((i % 4) == 0)? 1. : 0.;

    // initialize tile-id to zero
    sample.tileId[0] = 0;
    sample.tileId[1] = 0;
    
    return 0;
  }


  void 
  NavMapHelper::addOctetLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, char const * layerName, double offset, float scale, short density, short entries)
  {
    assert(sample.octetLayers.length() == config.octetLayerNames.length());
    assert(layerName != NULL);
    assert(strlen(layerName) < 32);

    int const idx = sample.octetLayers.length();
    
    config.octetLayerNames.length(idx + 1);
    strncpy(config.octetLayerNames[idx], layerName, 31);
    config.octetLayerNames[idx][31] = 0;
    
    sample.octetLayers.length(idx + 1);
    sample.octetLayers[idx].offset = offset;
    sample.octetLayers[idx].scale = scale;
    sample.octetLayers[idx].density = density;
    sample.octetLayers[idx].data.length((config.numCells[0] * config.numCells[1] * entries ) / (density * density));

  }

  void 
  NavMapHelper::addShortLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, 
                              char const * layerName, double offset, float scale, short density, short entries)
  {
    assert(sample.shortLayers.length() == config.shortLayerNames.length());
    assert(layerName != NULL);
    assert(strlen(layerName) < 32);

    int const idx = sample.shortLayers.length();
    
    config.shortLayerNames.length(idx + 1);
    strncpy(config.shortLayerNames[idx], layerName, 31);
    config.shortLayerNames[idx][31] = 0;
    
    sample.shortLayers.length(idx + 1);
    sample.shortLayers[idx].offset = offset;
    sample.shortLayers[idx].scale = scale;
    sample.shortLayers[idx].density = density;
    sample.shortLayers[idx].data.length((config.numCells[0] * config.numCells[1] * entries ) / (density * density));

  }

  void 
  NavMapHelper::addOctetLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, MapLayerParameters const& params)
  {
    addOctetLayer(config, sample, params.name, params.offset, params.scale, params.density, params.entries);
  }

  void 
  NavMapHelper::addShortLayer(ext::NavMapConfig& config, ext::NavMapSample& sample, MapLayerParameters const& params)
  {
    addShortLayer(config, sample, params.name, params.offset, params.scale, params.density, params.entries);
  }

  int NavMapHelper::octetLayerIdx(ext::NavMapConfig const& config, char const * layerName)
  {
    assert(layerName != NULL);
    assert(strlen(layerName) < 32);

    int i;
    for (i = config.octetLayerNames.length() - 1; i >=0; --i) {
      if (strcmp(config.octetLayerNames[i], layerName) == 0) {
        break;
      }
    }
    return i;
  }

  int NavMapHelper::shortLayerIdx(ext::NavMapConfig const& config, char const * layerName) 
  {
    assert(layerName != NULL);
    assert(strlen(layerName) < 32);

    int i;
    for (i = config.shortLayerNames.length() - 1; i >=0; --i) {
      if (strcmp(config.shortLayerNames[i], layerName) == 0) {
        break;
      }
    }
    return i;
  }
  }
}
