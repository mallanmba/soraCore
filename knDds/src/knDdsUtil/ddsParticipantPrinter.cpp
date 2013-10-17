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

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>
#include <ndds/ndds_utility_cpp.h>

#include <set>
#include <sstream>
#include <string>

using namespace std;

class DDS_ParticipantBuiltinTopicDataTraits
{                                                         
public:
  typedef DDS_ParticipantBuiltinTopicData Type;
  typedef DDSParticipantBuiltinTopicDataTypeSupport TypeSupport;
  typedef DDSParticipantBuiltinTopicDataDataReader DataReader;
  typedef DDS_ParticipantBuiltinTopicDataSeq Seq;
};

char userData[128];
set<string> guids;


namespace kn
{
  typedef GenericBuiltinPrinter_T<DDS_ParticipantBuiltinTopicDataTraits> ParticipantPrinter;

  template<>
  void
  ParticipantPrinter::Printer::operator()(DDS_ParticipantBuiltinTopicData const * event) throw()
  {
    string guid = guidString(event->key);

    // don't report duplicates
    if (guids.find(guid) != guids.end())
      return;

    guids.insert(guid);

    if (s_verbose < 4) {

      cout << "key: " << guid << " - IP " << PrintIp(event->key.value[0]) << endl;

      if (s_verbose > 1) {
        cout << "participant name: " << event->participant_name.name << endl;

        // locators
        cout << "default unicast locators: " << endl;
        for (int i = 0; i < event->default_unicast_locators.length(); ++i) {
          cout << " " << event->default_unicast_locators[i] << endl;
        }

        cout << "metatraffic unicast locators: " << endl;
        for (int i = 0; i < event->metatraffic_unicast_locators.length(); ++i) {
          cout << " " << event->metatraffic_unicast_locators[i] << endl;
        }

        if (event->metatraffic_multicast_locators.length() > 0) {
          cout << "metatraffic multicast locators: " << endl;
          for (int i = 0; i < event->metatraffic_multicast_locators.length(); ++i) {
            cout << " " << event->metatraffic_multicast_locators[i] << endl;
          }
        }
      }
      if (s_verbose > 2) {
        cout << ", " << endl << "  version: " << event->product_version << endl;

        int i = 0;
        for (i = 0; i < event->user_data.value.length(); ++i) {
          userData[i] = event->user_data.value[i];
        }
        userData[i] = '\0';
        cout << "user data: " << userData << endl;
      } 

      cout << endl;
    }
    else {
      DDSParticipantBuiltinTopicDataTypeSupport::print_data(event);
    }
  }
}

int main(int argc, char * argv[])
{
  kn::ParticipantPrinter app(argc, argv);
  app.run(DDS_PARTICIPANT_TOPIC_NAME);

  return 0;
}
