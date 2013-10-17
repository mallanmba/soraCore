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
#include "DdsEventHandler.h"

namespace kn
{
  DdsEventHandlerBase::DdsEventHandlerBase(DDS::DataReader& reader, DDS::Long m) :
    m_condition(NULL),
    m_maxSamples(m)
  {
    if (m_maxSamples < 0) {
      DDS::ReturnCode_t rc;
      DDS::DataReaderQos qos;
      rc = reader.get_qos(qos);
      assert(rc == DDS_RETCODE_OK);
      m_maxSamples = qos.reader_resource_limits.max_samples_per_read;
    }
  }

  DdsEventHandlerBase::~DdsEventHandlerBase()
  {
  }
}
