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
#include "knDdsUtil_Export.h"

#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/DdsEventLoop.h"

#include "miro/ShutdownHandler.h" // Ctrl-C handler

#include <ace/Get_Opt.h>

#include <iostream>

namespace kn
{
  class knDdsUtil_Export GenericPrinterBase
  {
  public:
    GenericPrinterBase(int& argc, char * argv[],
                        std::string const& profile = "");
    GenericPrinterBase(std::string const& profile = "");
    ~GenericPrinterBase() throw();

    static int s_verbose;
    static int s_csv;
    int parseArgs(int& argc, char* argv[]);

  protected:
    std::string m_profile;
    std::string m_topicName;
    std::string m_topicSuffix;

    kn::DdsEntitiesFactorySvc m_ddsEntities;
    Miro::ShutdownHandler m_shutdownHandler;
  };

  template<typename T>
  class GenericPrinter_T : public GenericPrinterBase
  {
    struct Printer {
      void operator() (T const * event) throw() {
        assert (event != NULL);
        T::TypeSupport::print_data(event);
      }
    };

  public:
    GenericPrinter_T(int& argc, char * argv[],
                     std::string const& profile = "",
                     std::string const& library = "") :
      GenericPrinterBase(argc, argv, profile)
    {}

    GenericPrinter_T(std::string const& profile = "") :
      GenericPrinterBase(profile)
    {}

    ~GenericPrinter_T() throw()
    {}

    void run(std::string const& event, std::string const& subs = "") {

      std::string topicName = m_topicName;
      if(topicName.empty())
        topicName = event;
      if (!m_topicSuffix.empty())
        topicName += "-" + m_topicSuffix;

      if (s_verbose) {
        std::cerr << "listening to topic: " << topicName << std::endl;
        std::cerr << "waiting for Ctrl-C" << std::endl;
      }
      
      Printer printer;
      kn::DdsEventLoop eventLoop;
      
      eventLoop.connect<T>(&printer, topicName, subs, m_profile);

      while (!m_shutdownHandler.isShutdown()) {
        eventLoop.processEvents(ACE_Time_Value(0, 100000));
      }
    }
  };
}
