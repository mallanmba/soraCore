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
#include "DdsPushConsumer.h"
#include "DdsSupport.h"

#include "miro/Log.h"

namespace kn
{
  using namespace std;

  DdsPushConsumer::~DdsPushConsumer() throw()
  {}

  void
  DdsPushConsumer::on_requested_deadline_missed(DDS::DataReader* /*reader*/,
                                                  DDS::RequestedDeadlineMissedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Reader on_requested_deadline_missed: " << status);
  }

  void
  DdsPushConsumer::on_requested_incompatible_qos(DDS::DataReader* /*reader*/,
                                                   DDS::RequestedIncompatibleQosStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Reader on_requested_incompatible_qos: " << status);
  }

  void
  DdsPushConsumer::on_sample_rejected(DDS::DataReader* /*reader*/,
                                        DDS::SampleRejectedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Reader on_sample_rejected: " << status);
  }

  void
  DdsPushConsumer::on_liveliness_changed(DDS::DataReader* /*reader*/,
                                           DDS::LivelinessChangedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Reader on_liveliness_changed: " << status);
  }

  void
  DdsPushConsumer::on_sample_lost(DDS::DataReader* /*reader*/,
                                    DDS::SampleLostStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Reader on_sample_lost: " << status);
  }

  void
  DdsPushConsumer::on_subscription_matched(DDS::DataReader* /*reader*/,
                                             DDS::SubscriptionMatchedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Reader on_subscription_matched: " << status);
  }
}
