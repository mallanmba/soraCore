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
#ifndef knDds_DdsPushConsumer_h
#define knDds_DdsPushConsumer_h

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include "knDds_Export.h"

namespace kn
{

  /**
   * wraps DDS::DataReaderListener. Default callback implementations
   * write log messages
   */
  class knDds_Export DdsPushConsumer : public DDS::DataReaderListener
  {
  public:
    virtual ~DdsPushConsumer() throw();

  protected:
    //--------------------------------------------------------------------------
    // protected inherited methods
    //--------------------------------------------------------------------------
    virtual
    void
    on_requested_deadline_missed(DDS::DataReader* /*reader*/,
                                 DDS::RequestedDeadlineMissedStatus const& /*status*/);
    virtual
    void
    on_requested_incompatible_qos(DDS::DataReader* /*reader*/,
                                  DDS::RequestedIncompatibleQosStatus const& /*status*/);
    virtual
    void
    on_sample_rejected(DDS::DataReader* /*reader*/,
                       DDS::SampleRejectedStatus const& /*status*/);
    virtual
    void
    on_liveliness_changed(DDS::DataReader* /*reader*/,
                          DDS::LivelinessChangedStatus const& /*status*/);
    virtual
    void
    on_sample_lost(DDS::DataReader* /*reader*/,
                   DDS::SampleLostStatus const& /*status*/);
    virtual
    void
    on_subscription_matched(DDS::DataReader* /*reader*/,
                            DDS::SubscriptionMatchedStatus const& /*status*/);
  };
} // namespace kn

#endif // knDds_DdsPushConsumer_h
