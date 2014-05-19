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
#include "ImageSensorProvider.h"
#include "RapidIoParameters.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/MIMETypesConstants.h"
#include "rapidDds/ImageSensorSample.h"
#include "rapidDds/ImageMetadataSupport.h"
#include "rapidDds/ImageSensorSampleSupport.h"
#include "rapidUtil/RapidHelper.h"

#include "knDds/DdsTypedSupplier.h"

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

namespace rapid
{
  using namespace std;

  /**
   * ctor
   */
  ImageSensorProvider::ImageSensorProvider(ImageSensorProviderParameters const& params, 
                                           const std::string& entityName,
                                           char const * mT,
                                           ImageMetadata const * metadata) :
    m_sampleSupplier(new ImageSampleSupplier(IMAGESENSOR_SAMPLE_TOPIC +
                                             params.topicSuffix,
                                             params.parentNode,
                                             params.profile,
                                             params.library,
                                             entityName)),
    m_metadata(m_sampleSupplier->event().meta),
    m_mimeType(m_sampleSupplier->event().mimeType)                   
  {
    ImageSensorSample& sample = m_sampleSupplier->event();
    RapidHelper::initHeader(sample.hdr);

    setMimeType(mT? mT : MIME_IMAGE_JPEG);

    if (metadata != NULL) {
      ImageMetadataTypeSupport::copy_data(&sample.meta, metadata);
    }
    else {
      strcpy(sample.meta.sensorName, params.topicSuffix.c_str());
      strcpy(sample.meta.sensorType, "Camera");
      
      // init offset with zero
      for (int i = 0; i < 3; ++i)
        sample.meta.offset.xyz[i] = 0.;
      for (int i = 0; i < 9; ++i) {
        sample.meta.offset.rot[i] = (i % 4)? 0. : 1.;
      }
      
      sample.meta.width = -1;
      sample.meta.height = -1;
    }
  }

  void
  ImageSensorProvider::publishData(unsigned char const * buffer, int len, ACE_Time_Value const& timestamp)
  {
    ImageSensorSample& sample = m_sampleSupplier->event();
    
    //--------------------------
    // set header data
    RapidHelper::updateHeader(sample.hdr, timestamp);
    
    // copy image data
    sample.data.from_array(buffer, len);

    // unfortunately there is no way of passing the buffer via const pointer
    //sample.data.loan_contiguous(const_cast<unsigned char *>(buffer), len, len);
    
    // publish
    m_sampleSupplier->sendEvent();

    //sample.data.unloan();
  }

  void 
  ImageSensorProvider::setMimeType(char const * mT)
  {
    strncpy(m_mimeType, mT, 32);
    m_mimeType[31] = 0;
  }
}
