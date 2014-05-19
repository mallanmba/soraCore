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
#include "GenericBuiltinPrinter_T.h"
#include "DdsBuiltInIo.h"

#include "miro/RobotParameters.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>
#include <ndds/ndds_utility_cpp.h>

#include <ace/Arg_Shifter.h>

using namespace std;

class DDS_PubTraits
{                                                         
public:
  typedef DDS_PublicationBuiltinTopicData Type;
  typedef DDSPublicationBuiltinTopicDataTypeSupport TypeSupport;
  typedef DDSPublicationBuiltinTopicDataDataReader DataReader;
  typedef DDS_PublicationBuiltinTopicDataSeq Seq;
};

class DDS_SubTraits
{                                                         
public:
  typedef DDS_SubscriptionBuiltinTopicData Type;
  typedef DDSSubscriptionBuiltinTopicDataTypeSupport TypeSupport;
  typedef DDSSubscriptionBuiltinTopicDataDataReader DataReader;
  typedef DDS_SubscriptionBuiltinTopicDataSeq Seq;
};

namespace kn
{
  class PubSubPrinter : public GenericBuiltinPrinterBase
  {
    struct Printer {
    
      void operator() (DDS_PubTraits::Type const * event) throw() {
        assert (event != NULL);
        cout << "[";
        for (int i = 0; i < event->partition.name.length(); ++i) {
          if (i > 0) cout << ", ";
          cout << event->partition.name[i];
        }
        cout << "],";
        cout << event->topic_name << "," << "PUB,";
        if(event->publication_name.name) 
          cout << event->publication_name.name;

        cout << endl;
      }
      
      void operator() (DDS_SubTraits::Type const * event) throw() {
        assert (event != NULL);
        cout << "[";
        for (int i = 0; i < event->partition.name.length(); ++i) {
          if (i > 0) cout << ";";
          cout << event->partition.name[i];
        }
        cout << "],";
        cout << event->topic_name << "," << "sub,";
        if(event->subscription_name.name) 
          cout << event->subscription_name.name;

        cout << endl;
      }
    };

  public:
    PubSubPrinter(int& argc, char * argv[]) :
      GenericBuiltinPrinterBase(argc, argv)
    {}

    ~PubSubPrinter() throw()
    {}

    void run() {
      cout << "Partition," << "Topic," << "Role," << "entityName," << endl;
    
    
      kn::DdsDomainParticipantRepository * pr = kn::DdsDomainParticipantRepository::instance();
      
      DDS::DomainParticipant* dp = pr->get("Default");
      DDS::Subscriber*        subscriber = dp->get_builtin_subscriber();
      DDS::DataReader*        pdr = subscriber->lookup_datareader(DDS_PUBLICATION_TOPIC_NAME);
      DDS::DataReader*        sdr = subscriber->lookup_datareader(DDS_SUBSCRIPTION_TOPIC_NAME);

      DDS_PubTraits::DataReader* pubDataReader = DDS_PubTraits::DataReader::narrow(pdr);
      DDS_SubTraits::DataReader* subDataReader = DDS_SubTraits::DataReader::narrow(sdr);

      Printer printer;
      kn::DdsSampleCallbackFunctor<DDS_PubTraits, Printer> pubDataHandler(printer);
      kn::DdsSampleCallbackFunctor<DDS_SubTraits, Printer> subDataHandler(printer);
      kn::DdsEventLoop eventLoop("PubSubPrinter");
      
      eventLoop.createStatusEventHandler<DDS_PubTraits>(pubDataHandler, *pubDataReader, kn::DdsTake());
      eventLoop.createStatusEventHandler<DDS_SubTraits>(subDataHandler, *subDataReader, kn::DdsTake());

      while (!m_shutdownHandler.isShutdown()) {
        eventLoop.processEvents(microseconds(100000));
      }
    }
  };
}


int main(int argc, char * argv[])
{
  kn::PubSubPrinter app(argc, argv);
  app.run();

  return 0;
}
