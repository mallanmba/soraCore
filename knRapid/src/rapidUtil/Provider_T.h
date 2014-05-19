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
#ifndef miro_Provider_T_h
#define miro_Provider_T_h

#include "rapidUtil_Export.h"
#include "TopicPair.h"
#include "RapidHelper.h"

#include "rapidDds/Header.h"
#include "rapidDds/HeaderSupport.h"

#include "knDds/DdsTypedSupplier.h"

#include <string>

namespace rapid
{
  /**
   * ProviderBase
   */
  class rapidUtil_Export ProviderBase : public TopicPair
  {
  public:
    ProviderBase(std::string const& c,
                 std::string const& d) :
      TopicPair(c, d)
    {}
    virtual ~ProviderBase();
  };
  
  template<class C, class D, class P>
  class Provider_T : public ProviderBase
  {
  public:
    typedef C Config;
    typedef D Data;
    typedef P Parameters;

    typedef kn::DdsTypedSupplier<Config> ConfigSupplier;
    typedef kn::DdsTypedSupplier<Data> DataSupplier;
    
    /**
     * If params.useConfigTopic is true, config will be 
     * published automatically 
     */
    Provider_T(std::string const& configTopic,
               std::string const& dataTopic,
               Parameters  const& params,
               std::string const& entityName) :
      ProviderBase(configTopic, dataTopic),
      m_configSupplier(configTopic + 
                       params.topicSuffix,
                       params.parentNode,
                       params.configProfile,
                       params.library,
                       NULL,
                       DDS_STATUS_MASK_NONE,
                       entityName),
      m_dataSupplier(dataTopic + 
                       params.topicSuffix,    
                       params.parentNode,
                       params.dataProfile,
                       params.library,
                       NULL,
                       DDS_STATUS_MASK_NONE,
                       entityName)
    {
      Config& config = m_configSupplier.event();
      config <<= params.config;
      
      if (params.useConfigTopic) {
        publishConfig();
      }
      
      Data& data = m_dataSupplier.event();
      HeaderTypeSupport::copy_data(&data.hdr, &config.hdr);
    }
    
    /** configSupplier */
    ConfigSupplier& configSupplier() { return m_configSupplier; }
    ConfigSupplier const& configSupplier() const { return m_configSupplier; }
    
    /** dataSupplier */
    DataSupplier& dataSupplier() { return m_dataSupplier; }
    DataSupplier const& dataSupplier() const { return m_dataSupplier; }
    
    /** publishConfig */
    void publishConfig() {
      Config& config = m_configSupplier.event();
      RapidHelper::updateHeader(config.hdr);
      m_configSupplier.sendEvent();
    }
    
  protected:
    ConfigSupplier m_configSupplier;
    DataSupplier   m_dataSupplier;
  };
}
#endif // miro_Provider_T_h
