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

class DDS_SubscriptionBuiltinTopicDataTraits
{                                                         
public:
  typedef DDS_SubscriptionBuiltinTopicData Type;
  typedef DDSSubscriptionBuiltinTopicDataTypeSupport TypeSupport;
  typedef DDSSubscriptionBuiltinTopicDataDataReader DataReader;
  typedef DDS_SubscriptionBuiltinTopicDataSeq Seq;
};

string s_key;
string s_participantKey;
string s_subscriberKey;
string s_topicName;


namespace kn
{
  typedef GenericBuiltinPrinter_T<DDS_SubscriptionBuiltinTopicDataTraits> SubscriptionPrinter;

  template<>
  void
  SubscriptionPrinter::Printer::operator()(DDS_SubscriptionBuiltinTopicData const * event) throw()
  {
    string key = guidString(event->key);
    string participantKey = guidString(event->participant_key);
    string subscriberKey  = guidString(event->subscriber_key);
    const char* subName   = event->subscription_name.name;

    if (!s_key.empty()) {
      if (s_key != key)
        return;
    }
    if (!s_participantKey.empty()) {
      if (s_participantKey != participantKey)
        return;
    }
    if (!s_subscriberKey.empty()) {
      if (s_subscriberKey != subscriberKey)
        return;
    }
    if (!s_topicName.empty()) {
      if (s_topicName != event->topic_name)
        return;
    }

    if (s_verbose < 4) {
      if (s_verbose < 3) {

        // only print topics for matching partitions
        bool match = false;
        for (int i = 0; i < event->partition.name.length(); ++i) {
          if (Miro::RobotParameters::instance()->name == event->partition.name[i]) {
            match = true;
            break;
          }
        }
        if (!match) {
          return;
        }
      }

      if (s_verbose > 1) {
        if (s_key.empty()) {
          cout << "key: " << key << " - IP " << PrintIp(event->key.value[0]) << endl;
        }
        if (s_participantKey.empty()) {
          cout << "participant key: " << participantKey << " - IP " << PrintIp(event->participant_key.value[0]) << endl;
        }
        if (s_subscriberKey.empty()) {
          cout << "subscriber key: " << subscriberKey << " - IP " << PrintIp(event->subscriber_key.value[0]) << endl;
        }
      }

      cout << "{ ";
     
      if (s_verbose > 2) {
        cout << "[";
        for (int i = 0; i < event->partition.name.length(); ++i) {
          if (i > 0) {
            cout << ", ";
          }
          cout << event->partition.name[i];
        }
        
        cout << "], " << endl << "  ";
      }
        cout << event->topic_name;
      
      if (s_verbose > 0) {
        cout << ", " << event->type_name;
      }

      if (s_verbose > 2) {
        cout << ", " << endl << "  version: " << event->product_version;
      }

      if (s_verbose > 2 && subName) {
        cout << ", " << endl << "  subscription_name: " << subName << endl;
      }
      else {
        cout << endl;
      }

      cout << " }" << endl;

      if (s_verbose > 1) {
        cout << endl;
      }
    }
    else {
      DDSSubscriptionBuiltinTopicDataTypeSupport::print_data(event);
    }
  }
}


int main(int argc, char * argv[])
{
  ACE_Arg_Shifter arg_shifter(argc, argv);
  while (arg_shifter.is_anything_left()) {
    const ACE_TCHAR *current_arg = arg_shifter.get_current();

    // participant key
    if (ACE_OS::strcasecmp("-k", current_arg) == 0) {
      arg_shifter.consume_arg();

      if (arg_shifter.is_parameter_next()) {
        s_participantKey = arg_shifter.get_current();
        arg_shifter.consume_arg();
      }
      else {
        cerr << "No argument for -k option." << endl;
        return 1;
      }
    }

    // topic name
    else if (ACE_OS::strcasecmp("-t", current_arg) == 0) {
      arg_shifter.consume_arg();

      if (arg_shifter.is_parameter_next()) {
        s_topicName = arg_shifter.get_current();
        arg_shifter.consume_arg();
      }
      else {
        cerr << "No argument for -t option." << endl;
        return 1;
      }
    }

    // publication key
    else if (ACE_OS::strcasecmp("-s", current_arg) == 0) {
      arg_shifter.consume_arg();

      if (arg_shifter.is_parameter_next()) {
        s_subscriberKey = arg_shifter.get_current();
        arg_shifter.consume_arg();
      }
      else {
        cerr << "No argument for -p option." << endl;
        return 1;
      }
    }
    else
      arg_shifter.ignore_arg();
  }
   
  kn::SubscriptionPrinter app(argc, argv);
  app.run(DDS_SUBSCRIPTION_TOPIC_NAME);

  return 0;
}
