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
  class knDdsUtil_Export GenericBuiltinPrinterBase
  {
  public:
    GenericBuiltinPrinterBase(int& argc, char * argv[]);
    ~GenericBuiltinPrinterBase() throw();

    static int s_verbose;
    static int s_csv;
    int parseArgs(int& argc, char* argv[]);

  protected:
    kn::DdsEntitiesFactorySvc m_ddsEntities;
    Miro::ShutdownHandler m_shutdownHandler;
  };

  template<typename T>
  class GenericBuiltinPrinter_T : public GenericBuiltinPrinterBase
  {
    struct Printer {
      void operator() (typename T::Type const * event) throw() {
        assert (event != NULL);
        T::TypeSupport::print_data(event);
      }
    };

  public:
    GenericBuiltinPrinter_T(int& argc, char * argv[]) :
      GenericBuiltinPrinterBase(argc, argv)
    {}

    ~GenericBuiltinPrinter_T() throw()
    {}

    void run(char const * topicName, std::string const& entityName = "") {
      kn::DdsDomainParticipantRepository * pr = kn::DdsDomainParticipantRepository::instance();
      
      DDS::DomainParticipant * dp = pr->get("Default");
      DDS::Subscriber * subscriber = dp->get_builtin_subscriber();
      DDS::DataReader * dr = subscriber->lookup_datareader(topicName);

      typename T::DataReader * dataReader = T::DataReader::narrow(dr);

      Printer printer;
      kn::DdsSampleCallbackFunctor<T, Printer> dataHandler(printer);
      kn::DdsEventLoop eventLoop(entityName);
      
      eventLoop.createStatusEventHandler<T>(dataHandler, *dataReader, kn::DdsTake());

      while (!m_shutdownHandler.isShutdown()) {
        eventLoop.processEvents(microseconds(100000));
      }
    }
  };
}
