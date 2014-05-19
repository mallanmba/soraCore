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
#include "rapidUtil_Export.h"
#include "Receiver_T.h"

#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedConsumer.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/DdsEventLoop.h"

#include "knDds/KnDdsParameters.h"

#include "miro/Robot.h" // for MNC parsing
#include "miro/ShutdownHandler.h" // Ctrl-C handler

#include <stdexcept>

#include <ace/Get_Opt.h>

namespace rapid
{
  struct TopicPairParameters;

  class rapidUtil_Export TopicPairAppBase : public TopicPair
  {
  public:
    TopicPairAppBase(int& argc, char * argv[], TopicPairParameters& m_params, std::string const& entityName);
    TopicPairAppBase(TopicPairParameters& m_params, std::string const& entityName);
    ~TopicPairAppBase();

    static int s_verbose;
    static int s_csv;
    static bool s_printConfig;
    static bool s_printData;

    int parseArgs(int& argc, char* argv[]);

  private:
    TopicPairParameters&      m_params;
  protected:
    std::string               m_entityName;
    kn::DdsEntitiesFactorySvc m_ddsEntities;
    Miro::ShutdownHandler     m_shutdownHandler;
    
  };
  
 

  template<typename C, typename D, typename P>
  class TopicPairApp_T : public TopicPairAppBase
  {
  public:
    typedef C Config;
    typedef D Data;
    typedef P Parameters;
    
    class Printer : public Receiver_T<C, D, P, Printer >
    {
    public:
      typedef Receiver_T<C, D, P, Printer> Super;
      
      typedef C Config;
      typedef D Data;
      typedef P Parameters;
      
      Printer(std::string const& configTopic,
              std::string const& dataTopic,
              Parameters  const& params)  :
        Super(configTopic, dataTopic, params)
      {
        if (Super::m_configured) {
          printConfig(Super::m_config);
        }
      }
      
      /** Please customize to your own pretty-printing needs by partial specialization */
      void printConfig(Config const& config)
      {
        std::cout << config << std::endl;
      }
      
      /** Please customize to your own pretty-printing needs by partial specialization */
      void printData(Data const& data)
      {
        Data::TypeSupport::print_data(&data);
      }
      
      void operator() (Config const * config)
      {
        assert (config != NULL);
        
        Super::operator() (config);
        
        if (TopicPairAppBase::s_printConfig) {

          printConfig(*config);
        }
      }
      
      void operator() (Data const * data)
      {
        assert (data != NULL);
        
        if (TopicPairAppBase::s_printData && Super::m_configured) {

          if (data->hdr.serial != Super::m_config.hdr.serial)
            MIRO_LOG_OSTR(LL_WARNING, "Topic pair serials don't match. - Config: " << Super::m_config.hdr.serial << " Data: " << data->hdr.serial);
          printData(*data);
        }
      }
    };
    
    TopicPairApp_T(int& argc, char * argv[], Parameters& params, std::string const& entityName = "") :
      TopicPairAppBase(argc, argv, params, entityName),
      m_params(params)
    {}

    TopicPairApp_T(Parameters& params, std::string const& entityName = "") :
      TopicPairAppBase(params, entityName),
      m_params(params)
    {}

    void run(std::string const& config, std::string const& data) {

      std::string configTopic = m_configTopic;
      if(configTopic.empty())
        configTopic = config;

      std::string dataTopic = m_dataTopic;
      if(dataTopic.empty())
        dataTopic = data;

      if (s_verbose) {
        std::cerr << "listening to config topic: " << configTopic << std::endl;
        std::cerr << "listening to data topic: " << dataTopic << std::endl;
        std::cerr << "topic-suffix: " << m_params.topicSuffix << std::endl;
        std::cerr << "waiting for Ctrl-C" << std::endl;
      }
      
      Printer printer(configTopic, dataTopic, m_params);
      kn::DdsEventLoop eventLoop(m_entityName);
      
      printer.connect(eventLoop);
      while (!m_shutdownHandler.isShutdown()) {
        eventLoop.processEvents(kn::microseconds(100000));
      }
    }

  private:
    Parameters const& m_params;
  };
}
