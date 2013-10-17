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
#ifndef miro_Receiver_T_h
#define miro_Receiver_T_h

#include "rapidUtil_Export.h"
#include "TopicPair.h"

#include "knDds/DdsTypedConsumer.h"
#include "knDds/DdsEventLoop.h"

namespace rapid
{
  class rapidUtil_Export ReceiverBase : public TopicPair
  {
  public:
    ReceiverBase(std::string const& c,
                 std::string const& d) :
      TopicPair(c, d)
    {}
    virtual ~ReceiverBase();
    virtual void connect(kn::DdsEventLoop& eventLoop) = 0;
  };

  template<class C, class D, class P, class CRTP>
  class Receiver_T : public ReceiverBase
  {
  public:
    typedef C Config;
    typedef D Data;
    typedef P Parameters;
    typedef CRTP Derived;
    
    Receiver_T(std::string const& configTopic,
               std::string const& dataTopic,
               Parameters const& params)  :
      ReceiverBase(configTopic, dataTopic),
      m_params(params),
      m_configured(!params.useConfigTopic)
    {
      Config::TypeSupport::initialize_data(&m_config);

      m_config <<= params.config;
    }

    virtual ~Receiver_T()
    {
      Config::TypeSupport::finalize_data(&m_config);
    }

    virtual void connect(kn::DdsEventLoop& eventLoop)
    {
      if (m_params.useConfigTopic) {
        eventLoop.connect<Config>(static_cast<Derived *>(this),
                                  m_configTopic +
                                  m_params.topicSuffix,
                                  m_params.parentNode,
                                  m_params.configProfile,
                                  m_params.library);
      }

      eventLoop.connect<Data>(static_cast<Derived *>(this),
                              m_dataTopic +
                              m_params.topicSuffix,
                              m_params.parentNode,
                              m_params.dataProfile,
                              m_params.library);
    }

    bool configured() const {
      return m_configured;
    }

    bool config(Config& config)
    {
      Config::TypesSupport::copy_data(&config, &m_config);
      return m_configured;
    }

    // default implementation. Has to be explicitly overwritten in derived class
    void operator() (Config const * config)
    {
      Config::TypeSupport::copy_data(&m_config, config);
      m_configured = true;
    }
    
  protected:
    Parameters m_params;

    bool m_configured;
    Config m_config;
  };
}

#endif // miro_Receiver_T_h
