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
#include "PointCloudProvider.h"

#include "rapidDds/RapidConstants.h"

#include <numeric>

namespace rapid
{
  using namespace std;

  /** @see PointCloudSample IDL */
  static const size_t MAX_ROWLEN = 128;

  PointCloudProvider::PointCloudProvider(PointCloudTopicPairParameters const& params,
                                         std::string const& entityName,
                                         const kn::Vector3& scale,
                                         const kn::Vector3& origin,
                                         size_t maxPointsPerSample)
    :
    PointCloudProviderBase(POINTCLOUD_CONFIG_TOPIC, POINTCLOUD_SAMPLE_TOPIC, params, entityName),
    m_params(params),
    m_scale (scale),
    m_origin(origin),
    m_maxPoints(maxPointsPerSample),
    m_subsampling(0)
  {
  } // ctor

  /** 
   * Publish one PointCloudSample from PointCloud.
   *
   * Truncates point-cloud if PointCloudSample buffer sizes are exhausted
   */
  void
  PointCloudProvider::publish(kn::PointCloudPtr const& pc)
  {
    publishFirst(pc);
    m_pc.reset();
  }

  /** 
   * Publish first PointCloudSample from large PointCloud 
   *
   * @returns true if there is more data to publish in the PointCloud.
   */
  bool
  PointCloudProvider::publishFirst(kn::PointCloudPtr const& pc)
  {
    // send dds point-cloud
    rapid::PointCloudSample& sample = this->m_dataSupplier.event();

    // init hdr fields
    rapid::RapidHelper::updateHeader(sample.hdr, pc->timestamp);

    sample.xyzScale[0] = 1.0/m_scale.x();
    sample.xyzScale[1] = 1.0/m_scale.y();
    sample.xyzScale[2] = 1.0/m_scale.z();

    sample.origin[0] = m_origin.x();
    sample.origin[1] = m_origin.y();
    sample.origin[2] = m_origin.z();

    m_pc = pc;
    m_pcIdx = 0;
    m_pcNextRow = 0;
    m_pcRowIndex = 0;
    m_pcRowLengthsIterator = m_pc->rowLens.begin();
    
    // check for all rows to fit into the max sample length
    // we cant split rows into multiple samples
    // so a row needs to fit into one sample
    kn::PointCloud::RowLengthVector::const_iterator first, last = m_pc->rowLens.end();
    for (first = m_pc->rowLens.begin(); first != last; ++first) {
      if (*first > m_maxPoints) {
        MIRO_LOG_OSTR(LL_ERROR, "PointCloudProvider (" << m_params.topicSuffix << "): Row length exceeds sample-size. Not encoding row lengths.");
        m_pcRowLengthsIterator = m_pc->rowLens.end();
        break; 
      }
    }

    // check if row-lengths are consistent with number of points
    if (m_pcRowLengthsIterator != m_pc->rowLens.end()) {
      size_t sum = std::accumulate(m_pc->rowLens.begin(), m_pc->rowLens.end(), 0);
      if (sum != m_pc->points.size()) {
        MIRO_LOG_OSTR(LL_ERROR, "PointCloudProvider (" << m_params.topicSuffix << "): Row lengths don't add up to points buffer size. Not encoding row lengths.");
        m_pcRowLengthsIterator = m_pc->rowLens.end();
      }
    }

    // set initial row-length
    size_t len = (m_pcRowLengthsIterator != m_pc->rowLens.end())? MAX_ROWLEN : 0;
    sample.rowLengths.length(len);

    // if point cloud specifies row lengths
    // skip initial rows with 0 columns
    for (; m_pcRowLengthsIterator != m_pc->rowLens.end(); ++ m_pcRowLengthsIterator) {
      sample.rowLengths[m_pcRowIndex] = *m_pcRowLengthsIterator;
      m_pcNextRow += m_pc->rowLens[m_pcRowIndex];

      if (m_pcIdx != m_pcNextRow) {
        break;
      }
    }

    m_batchNum = 0;

    return publishNext();
  }

  /** 
   * Publish next PointCloudSample from large PointCloud.
   *
   * @returns true if there is more data to publish in the PointCloud.
   */
  bool
  PointCloudProvider::publishNext()
  {
    bool more = false;
    if (m_pc) {
      // send dds point-cloud
      rapid::PointCloudSample& sample = this->m_dataSupplier.event();

      sample.points.length(m_maxPoints);
 
      size_t sampleIdx = 0;
      size_t step = m_subsampling < 1? 1 : m_subsampling;
      if (m_pcRowLengthsIterator == m_pc->rowLens.end()) {

        //fprintf(stdout, "batchNum = %d m_pcIdx=%d m_pcNextRow=%d \n", m_batchNum, m_pcIdx, m_pcNextRow);
        
        for (; m_pcIdx < m_pc->points.size() && sampleIdx < m_maxPoints; m_pcIdx += step, ++sampleIdx) {
          const double x = m_pc->points[m_pcIdx].x() - m_origin.x();
          const double y = m_pc->points[m_pcIdx].y() - m_origin.y();
          const double z = m_pc->points[m_pcIdx].z() - m_origin.z();
          sample.points[sampleIdx].xyz[0] = static_cast<short>(x * m_scale.x());
          sample.points[sampleIdx].xyz[1] = static_cast<short>(y * m_scale.y());
          sample.points[sampleIdx].xyz[2] = static_cast<short>(z * m_scale.z());
          
          //! @TODO check on the different attribute formats and do something more smart than this
          sample.points[sampleIdx].attributes[0] = m_pc->points[m_pcIdx].att.int16s[0];
        }
      }
      // publish with row-length markers
      else {
        sample.rowLengths.length(MAX_ROWLEN);
      //fprintf(stdout, "batchNum = %d m_pcIdx=%d m_pcNextRow=%d \n", m_batchNum, m_pcIdx, m_pcNextRow);
      
        size_t skip = 0;
        for (; m_pcRowLengthsIterator < m_pc->rowLens.end(); ++m_pcRowLengthsIterator) {

          if (m_pcRowIndex >= MAX_ROWLEN) { // can't fit more rows in point cloud
            MIRO_LOG_OSTR(LL_WARNING, "PointCloudProvider: RAPID PointCloud has a maximum of "<<MAX_ROWLEN<<" row lengths");
            break;
          }
            
          // if we can't fit the next row into this sample, break
          if((sampleIdx + *m_pcRowLengthsIterator) >= m_maxPoints) {   
            break;
          }

          
          sample.rowLengths[m_pcRowIndex] = *m_pcRowLengthsIterator;

          if (skip == 0) {
            for (size_t i = 0; i < *m_pcRowLengthsIterator; i += step, ++sampleIdx) {
              size_t const idx = m_pcIdx + i;
              double const x = m_pc->points[idx].x() - m_origin.x();
              double const y = m_pc->points[idx].y() - m_origin.y();
              double const z = m_pc->points[idx].z() - m_origin.z();
              sample.points[sampleIdx].xyz[0] = static_cast<short>(x * m_scale.x());
              sample.points[sampleIdx].xyz[1] = static_cast<short>(y * m_scale.y());
              sample.points[sampleIdx].xyz[2] = static_cast<short>(z * m_scale.z());
              
              //! @TODO check on the different attribute formats and do something more smart than this
              sample.points[sampleIdx].attributes[0] = m_pc->points[idx].att.int16s[0];
            }
            ++m_pcRowIndex;
          }


          m_pcIdx += *m_pcRowLengthsIterator;
          ++skip;

          if (skip == step) {
            skip = 0;
          }
        }
      }

      // send sample
      sample.points.length(sampleIdx);
      sample.rowLengths.length(m_pcRowIndex);
      m_pcRowIndex = 0;
      this->m_dataSupplier.sendEvent();

      more = m_pcIdx < m_pc->points.size();
      if (!more) {
        m_pc.reset();
      }
      m_batchNum++;
    }
    return more;
  }

} // rapid

