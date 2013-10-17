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
#ifndef miro_DdsDataHandler_h
#define miro_DdsDataHandler_h

#include "knDds_Export.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

namespace kn
{
  class knDds_Export DdsSampleCallbackBase
  {
  protected:
    void reportMetaData(char const * typeName, DDS::SampleInfo const& info);
  };

  template<typename T, typename C>
  class DdsSampleCallbackFunctor : public DdsSampleCallbackBase
  {
  public:
    DdsSampleCallbackFunctor(C& callback) :
      m_callback(callback)
    {}

    void operator()(typename T::Seq const& samples, DDS::SampleInfoSeq const& infos)
    {
      for (DDS::Long i = 0; i < samples.length(); ++i) {
        if (infos[i].valid_data) {
          m_callback(&samples[i]);
        }
        else {
          reportMetaData(T::TypeSupport::get_type_name(), infos[i]);
        }
      }
    }
    
  private:
    C& m_callback;
  };

  template<typename T, typename C, void (C::* CF)(T const *) = &C::operator()>
  class DdsSampleCallbackFunctionPtr : public DdsSampleCallbackBase
  {
  public:
    DdsSampleCallbackFunctionPtr(C& callback) :
      m_callback(callback)
    {}

    void operator()(typename T::Seq const& samples, DDS::SampleInfoSeq const& infos)
    {
      for (DDS::Long i = 0; i < samples.length(); ++i) {
        if (infos[i].valid_data) {
          (m_callback.*CF)(&samples[i]);
        }
        else {
          reportMetaData(T::TypeSupport::get_type_name(), infos[i]);
        }
      }
    }
    
  private:
    C& m_callback;
  };


  template<typename T, typename C>
  class DdsDataCallbackFunctor
  {
  public:
    DdsDataCallbackFunctor(C& callback) :
      m_callback(callback)
    {}

    void operator()(typename T::Seq const& samples, DDS::SampleInfoSeq const& infos)
    {
      m_callback(samples, infos);
    }
    
  private:
    C& m_callback;
  };

  template<typename T, typename C, void (C::* CF)(T const *) = &C::operator()>
  class DdsDataCallbackFunctionPtr
  {
  public:
    DdsDataCallbackFunctionPtr(C& callback) :
      m_callback(callback)
    {}

    void operator()(typename T::Seq const& samples, DDS::SampleInfoSeq const& infos)
    {
      (m_callback.*CF)(samples, infos);
    }
    
  private:
    C& m_callback;
  };
}

#endif // miro_DdsDataHandler_h
