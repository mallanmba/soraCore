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
#include "NavMapProvider.h"
#include "RapidExtIoParameters.h"

#include "rapidExtDds/ExtConstants.h"

namespace
{
  template<typename Layers>
  void addLayers(Layers& layers, std::vector<rapid::ext::NavMapLayerParameters> const& params, int numCells)
  {
    layers.length(params.size());
    for (int i = 0; i < layers.length(); ++i) {
      layers[i].offset = params[i].offset;
      layers[i].scale = params[i].scale;
      layers[i].density = params[i].density;
      layers[i].data.length((numCells * numCells * params[i].entries ) / (params[i].density * params[i].density));
    }
  }
}

namespace rapid
{
  namespace ext
  {
    /**
     * ctor
     */
    NavMapProvider::NavMapProvider(NavMapTopicPairParameters const& params) :
      NavMapProviderBase(NAVMAP_CONFIG_TOPIC,
                         NAVMAP_SAMPLE_TOPIC,
                         params)
    {
      NavMapSample& sample = m_dataSupplier.event();

      
      // initialize tile-id to zero
      sample.tileId[0] = 0;
      sample.tileId[1] = 0;

      // init sample pose
      for (int i = 0; i < 3; ++i)
        sample.location.xyz[i] = 0.;
      for (int i = 0; i < 9; ++i)
        sample.location.rot[i] = ((i % 4) == 0)? 1. : 0.;
      
      // init sample layers
      addLayers(sample.shortLayers, params.config.shortLayers, params.config.numCellsXY);
      addLayers(sample.octetLayers, params.config.octetLayers, params.config.numCellsXY);
    }
    
    /**
     * dtor
     */
    NavMapProvider::~NavMapProvider() throw()
    {
    }
  }
}
