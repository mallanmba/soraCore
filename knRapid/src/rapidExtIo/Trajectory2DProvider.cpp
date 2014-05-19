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
#include "Trajectory2DProvider.h"
#include "RapidExtIoParameters.h"

#include "rapidExtDds/ExtConstants.h"

namespace rapid
{
  namespace ext
  {
    /**
     * ctor
     */
    Trajectory2DProvider::Trajectory2DProvider(Trajectory2DTopicPairParameters const& params, const std::string& entityName) :
      Trajectory2DProviderBase(TRAJECTORY2D_CONFIG_TOPIC,
                               TRAJECTORY2D_SAMPLE_TOPIC,
                               params,
                               entityName)
    {
    }
    
    /**
     * dtor
     */
    Trajectory2DProvider::~Trajectory2DProvider() throw()
    {
    }
    
    void 
    Trajectory2DProvider::publishTrajectory(kn::ATrans3 const& pose,
                                            kn::ATrans2Vector const& path, unsigned int sampleSkip)
    {
      ext::Trajectory2DSample& sample = m_dataSupplier.event();
      
      // header
      RapidHelper::updateHeader(sample.hdr);
      
      // set pose-field
      for (int i = 0; i < 3; ++i) {
        sample.origin.xyz[i] = pose.translation()[i];
      }
      int idx = 0;
      for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x, ++idx) {                                              
          sample.origin.rot[idx] = pose.rotation()(y, x);
        }
      }                                                                          
      
      // trajectory
      kn::ATrans2Vector::const_iterator first, last = path.end();
      int index = 0;
      unsigned int skipCounter = sampleSkip + 1;
      
      // 512 is the current size-limit of a traj2D
      sample.trajectory.length(std::min(size_t(512), path.size() / (sampleSkip + 1) + 1));
      for (first = path.begin(); first != last; ++first) {
        --skipCounter;
        
        if (skipCounter == 0 ) {
          ext::RTrans2DMeta& trans = sample.trajectory[index];
          trans.x = first->translation()[0];
          trans.y = first->translation()[1];
          trans.theta = atan2(first->rotation()(1,0), first->rotation()(0,0));
          
          // next index
          ++index;
          // cut off at max length
          if (index ==  sample.trajectory.length())
            break;
          
          // reset skip counter
          skipCounter = sampleSkip + 1;
        }
      }
      sample.trajectory.length(index);
      
      m_dataSupplier.sendEvent();
    }
    
  }
}
