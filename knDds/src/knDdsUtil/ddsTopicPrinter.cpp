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

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>
#include <ndds/ndds_utility_cpp.h>

using namespace std;

class DDS_TopicBuiltinTopicDataTraits
{                                                         
public:
  typedef DDS_TopicBuiltinTopicData Type;
  typedef DDSTopicBuiltinTopicDataTypeSupport TypeSupport;
  typedef DDSTopicBuiltinTopicDataDataReader DataReader;
  typedef DDS_TopicBuiltinTopicDataSeq Seq;
};


int main(int argc, char * argv[])
{
  kn::GenericBuiltinPrinter_T<DDS_TopicBuiltinTopicDataTraits> app(argc, argv);
  app.run(DDS_TOPIC_TOPIC_NAME);

  return 0;
}
