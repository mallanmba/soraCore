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
#ifndef rapid_ImageSensorProvider_h
#define rapid_ImageSensorProvider_h

#include "rapidIo_Export.h"

#include <ace/Time_Value.h>

#include "knShare/SmartPtr.h"

namespace kn
{
  template<class T>
  class DdsTypedSupplier;
}
namespace rapid
{
  class ImageSensorSample;
  class ImageMetadata;
  class ImageSensorProviderParameters;

  class rapidIo_Export ImageSensorProvider
  {
  protected:
    typedef kn::DdsTypedSupplier<rapid::ImageSensorSample> ImageSampleSupplier;
    
  public:
    ImageSensorProvider(ImageSensorProviderParameters const& params, 
                        const std::string& entityName, 
                        char const * mT = NULL,
                        rapid::ImageMetadata const * metaData = NULL);

    rapid::ImageMetadata& imageMetadata() { return m_metadata; }
    rapid::ImageMetadata const& imageMetadata() const { return m_metadata; }

    char const * mimeType() { return m_mimeType; }
    void setMimeType(char const * mT);

    ImageSampleSupplier& dataSupplier() { return *m_sampleSupplier; }
    
    void publishData(unsigned char const * buffer, int len,
                     ACE_Time_Value const& timestamp = ACE_Time_Value::zero);

  protected:
    // scoped-ptr would be good enough, but requires full type at declaration
    typedef kn::shared_ptr<ImageSampleSupplier> ImageSampleSupplierPtr;

    ImageSampleSupplierPtr m_sampleSupplier;
    rapid::ImageMetadata& m_metadata;
    char * m_mimeType;
  };
}
#endif // rapid_ImageSensorProvider_h
