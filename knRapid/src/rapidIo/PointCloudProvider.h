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
#ifndef rapid_PointCloudProvider_h
#define rapid_PointCloudProvider_h

#include "rapidIo_Export.h"
#include "rapidIo/RapidIoParameters.h"
#include "PointCloudIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidDds/PointCloudConfig.h"
#include "rapidDds/PointCloudConfigSupport.h"
#include "rapidDds/PointCloudSample.h"
#include "rapidDds/PointCloudSampleSupport.h"

#include "knMath/Vector.h"   
#include "knGeometry/PointCloud.h"

namespace rapid
{
  class PointCloudTopicPairParameters;
  typedef Provider_T<PointCloudConfig,
                     PointCloudSample,
                     PointCloudTopicPairParameters> PointCloudProviderBase;

  /**
   * 
   */
  class rapidIo_Export PointCloudProvider : public PointCloudProviderBase
  {
  public:
    /**
     * ctor. 
     * Default scale is 100 (1cm resolution, max distance of 327m from origin), 
     * default origin is 0,0,0
     */
    PointCloudProvider(PointCloudTopicPairParameters const& params, 
                       const std::string& entityName,
                       const kn::Vector3& scale  = kn::Vector3(100,100,100), 
                       const kn::Vector3& origin = kn::Vector3(0,0,0),
                       size_t maxPointsPerSample = rapid::POINTCLOUD_SAMPLE_MAX_POINTS);
    
    /**
     * PointCloudSample sends point values as shorts - point values are
     * multiplied by scale, then cast to shorts. On the receiving side, 
     * short values are multiplied by the reciprocal of scale to reconstruct floating
     * point values. A scale of 100 would give you centimeter resolution and a 
     * maximum range of ~327m (i.e. SHRT_MAX / 100 )
     */
    void setScale(kn::Vector3 const& scale) throw() {
      m_scale = scale;
    }
    /** set all scale components. 
     *  @overload 
     */
    void setScale(double x, double y, double z) throw() {
      m_scale[0] = x;
      m_scale[1] = y;
      m_scale[2] = z;
    }
    /** set all scale components to same value. 
     *  @overload 
     */
    void setScale(double scale) throw() {
      m_scale[0] = scale;
      m_scale[1] = scale;
      m_scale[2] = scale;
    }
    
    const kn::Vector3& scale() const {
      return m_scale;
    }
    
    void setOrigin(kn::Vector3 const& origin) throw() {
      m_origin = origin;
    }
    /** 
     * set origin 
     * @overload 
     */
    void setOrigin(double x, double y, double z) throw() {
      m_origin[0] = x;
      m_origin[1] = y;
      m_origin[2] = z;
    }
    
    const kn::Vector3& origin() const {
      return m_origin;
    }
    
    size_t maxPointsPerSample() const {
      return m_maxPoints;
    }
    void setMaxPointsPerSample(size_t maxPoints) {
      m_maxPoints = maxPoints;
    }

    int subSampling() const {
      return m_subsampling;
    }
    void setSubsampling(int subsampling) {
      m_subsampling = subsampling;
    }
    
    bool dynamicScaling() const {
      return m_dynamicScaling;
    }

    void setDynamicScaling(bool flag) {
      m_dynamicScaling = flag;
    }

    void publish(kn::PointCloudPtr const& pc);
    bool publishFirst(kn::PointCloudPtr const& pc);
    bool publishNext();

  private:
    PointCloudTopicPairParameters m_params;

    kn::Vector3 m_scale; 
    kn::Vector3 m_origin;

    // state for iterative point-cloud publishing of large clouds

    /** Shared pointer to the current point-cloud.
     * Reset once point-cloud is sending is completed.
     */
    kn::PointCloudPtr m_pc;
    /** Current point in the point-cloud to be sent. */
    size_t m_pcIdx;
    /** Current row in the point-cloud to be sent. */
    size_t m_pcRowIndex;
    /** Index of the first point in the next row. */
    size_t m_pcNextRow;
    /** Current row-lengths. */
    kn::PointCloud::RowLengthVector::const_iterator m_pcRowLengthsIterator;
    
    /** Maximum number of points per sample. */
    size_t m_maxPoints;
    /** Sample number of current point-cloud. */
    size_t m_batchNum;
    /** Subsampling factor for point-cloud. */
    int    m_subsampling;
    /** Analyze point-cloud for optimum offset & scaling factor */
    bool m_dynamicScaling;

  }; // class PointCloudProvider

  typedef kn::shared_ptr<PointCloudProvider> PointCloudProviderPtr;
  
} // namespace rapid

#endif // rapid_PointCloudProvider_h
