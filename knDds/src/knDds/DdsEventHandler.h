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
#ifndef miro_DdsEventHandler_h
#define miro_DdsEventHandler_h

#include "knDds_Export.h"
#include "DdsDataHandler.h"
#include "DdsSupport.h"
#include "DdsReaderAccessFunctors.h"

#include "miro/Log.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <cassert>

namespace kn
{
  class knDds_Export DdsEventHandlerBase
  {
  public:
    DdsEventHandlerBase(DDS::DataReader& reader, DDS::Long m = -1);

    virtual ~DdsEventHandlerBase();
    virtual DDS::Condition * condition() throw() { return m_condition; }
    virtual void processEvents() = 0;

    DDS::Long maxSamples() const { return m_maxSamples; }
    void setMaxSamples(DDS::Long m) { m_maxSamples = m; }
   
  protected:
    // event handling
    DDS::Condition * m_condition;
    
    // data handling
    DDS::Long m_maxSamples;
    DDS::SampleInfoSeq m_infos;
  };
  
  template<typename T, typename CB, typename AT, typename AC, typename CND>
  class DdsEventHandlerCore : public DdsEventHandlerBase
  {
  public:
    typedef T Type;
    typedef CB Callback;
    typedef AT AccessType;
    typedef AC DataAccessor;
    typedef CND Condition;

    DdsEventHandlerCore(Callback callback,
                        DataAccessor accessor,
                        DDS::Long m = -1) :
      DdsEventHandlerBase(accessor.dataReader(), m),
      m_callback(callback),
      m_accessFunctor(accessor)
    {
    }
    
    virtual Condition * condition() throw() 
    {
      return dynamic_cast<Condition *>(m_condition);
    }
    
    DataAccessor& accessFunctor() throw() { return m_accessFunctor; }
    DataAccessor const& accessFunctor() const throw() { return m_accessFunctor; }

    virtual void processEvents()
      
    {
      DDS::ReturnCode_t rc;
      DDS::Long length;
      
      do {
        rc = m_accessFunctor(m_samples, m_infos, m_maxSamples, AccessType());
        
        if (rc != DDS::RETCODE_OK) {
          MIRO_LOG_OSTR(LL_CRITICAL, Type::TypeSupport::get_type_name() << " - DDS take error: " << DdsSupport::getError(rc));
          ACE_OS::sleep(ACE_Time_Value(0, 100000)); // Sleep to avoid busy loop
        }
        
        length = m_samples.length();
        if (length == 0) {
          MIRO_LOG_OSTR(LL_CRITICAL,  Type::TypeSupport::get_type_name() << " - DDS take of 0 samples!");
          ACE_OS::sleep(ACE_Time_Value(0, 100000)); // Sleep to avoid busy loop
        }
        
        if (length > 100) {
          MIRO_LOG_OSTR(LL_NOTICE, Type::TypeSupport::get_type_name() << " - DDS take of multiple samples: " << length);
        }
        
        m_callback(m_samples, m_infos);
        
        // returning samples should be always safe
        rc = m_accessFunctor.dataReader().return_loan(m_samples, m_infos);
        if (rc != DDS::RETCODE_OK) {
          MIRO_LOG_OSTR(LL_ERROR, Type::TypeSupport::get_type_name() << " - DDS return loan error: " << DdsSupport::getError(rc));
          ACE_OS::sleep(ACE_Time_Value(0, 100000)); // Sleep to avoid busy loop
          break;
        }
      }
      while (length == m_maxSamples);
    }
    
  protected:
    Callback m_callback;
    DataAccessor m_accessFunctor;
    
    typename Type::Seq m_samples;
  };
  
  template<typename T, typename C, typename A = DdsTake >
  class DdsStatusEventHandler : public DdsEventHandlerCore<T, C, A, DdsReaderOnStatusCondition<T>, DDS::StatusCondition>
  {
  public:
    typedef DdsEventHandlerCore<T, C, A, DdsReaderOnStatusCondition<T>, DDS::StatusCondition> Super;
    typedef T Type;
    typedef C Callback;
    typedef A AccessType;
    typedef DdsReaderOnStatusCondition<T> DataAccessor;
    typedef DDS::StatusCondition Condition;

    static DDS::Long const DEFAULT_STATUS_MASK =   
      DDS_DATA_AVAILABLE_STATUS |
      DDS_SAMPLE_LOST_STATUS |
      DDS_SAMPLE_REJECTED_STATUS |
      DDS_SUBSCRIPTION_MATCHED_STATUS |
      DDS_REQUESTED_DEADLINE_MISSED_STATUS |
      DDS_REQUESTED_INCOMPATIBLE_QOS_STATUS |
      DDS_LIVELINESS_CHANGED_STATUS;
    
    DdsStatusEventHandler(Callback callback,
                          typename T::DataReader& dataReader,
                          DDS::Long m = -1,
                          DDS::SampleStateMask sampleStates = DDS::ANY_SAMPLE_STATE,
                          DDS::ViewStateMask viewStates = DDS::ANY_VIEW_STATE,
                          DDS::InstanceStateMask instanceStates = DDS::ANY_INSTANCE_STATE,
                          DDS::StatusMask mask = DEFAULT_STATUS_MASK) :
      Super(callback, DataAccessor(dataReader, sampleStates, viewStates, instanceStates), m)
    {
      // this needs to be initialized explicitly
      Super::m_condition = dataReader.get_statuscondition();
      // only interested in new data
      this->condition()->set_enabled_statuses(mask);
    }

    virtual void processEvents()
    {
      typename Type::DataReader& reader = Super::m_accessFunctor.dataReader();
      DDS::StatusMask mask = reader.get_status_changes();
      
      if ((mask & (~DDS_DATA_AVAILABLE_STATUS)) != 0) {
        std::stringstream ostr;
        ostr << "DdsStatusEventHandler<> topic=" << reader.get_topicdescription()->get_name() << " ";
        kn::DdsSupport::printReaderStatus(ostr, reader, mask);
        MIRO_LOG(LL_NOTICE, ostr.str().c_str());
      }
        
      if ((mask & DDS_DATA_AVAILABLE_STATUS) != 0) {
        Super::processEvents();
      }
    }
  };

  template<typename T, typename C, typename A = DdsTake>
  class DdsReadEventHandler : public DdsEventHandlerCore<T, C, A, DdsReaderOnReadCondition<T>, DDS::ReadCondition>
  {
  public:
    typedef DdsEventHandlerCore<T, C, A, DdsReaderOnReadCondition<T>, DDS::ReadCondition> Super;
    typedef T Type;
    typedef C Callback;
    typedef A AccessType;
    typedef DdsReaderOnReadCondition<T> DataAccessor;
    typedef DDS::ReadCondition Condition;

    DdsReadEventHandler(Callback callback,
                        typename T::DataReader& dataReader,
                        DDS::Long m = -1,
                        DDS::SampleStateMask sampleStates = DDS::ANY_SAMPLE_STATE,
                        DDS::ViewStateMask viewStates = DDS::ANY_VIEW_STATE,
                        DDS::InstanceStateMask instanceStates = DDS::ANY_INSTANCE_STATE) :
      Super(callback,
            DataAccessor(dataReader.create_readcondition(sampleStates, viewStates, instanceStates)),
            m)
    {
      Super::m_condition = Super::m_accessFunctor.condition();
    }
    
    virtual ~DdsReadEventHandler()
    {
      DDS::DataReader * reader = this->condition()->get_datareader();
      reader->delete_readcondition(this->condition());
    }
  };
  
  template<typename T, typename C, typename A = DdsTake>
  class DdsQueryEventHandler : public DdsEventHandlerCore<T, C, A, DdsReaderOnReadCondition<T>, DDS::QueryCondition>
  {
  public:
    typedef DdsEventHandlerCore<T, C, A, DdsReaderOnReadCondition<T>, DDS::QueryCondition> Super;
    typedef T Type;
    typedef C Callback;
    typedef A AccessType;
    typedef DdsReaderOnReadCondition<T> DataAccessor;
    typedef DDS::QueryCondition Condition;

    DdsQueryEventHandler(Callback callback,
                         typename T::DataReader& dataReader,
                         char const * query, DDS::StringSeq const& params,
                         DDS::Long m = -1,
                         DDS::SampleStateMask sampleStates = DDS::ANY_SAMPLE_STATE,
                         DDS::ViewStateMask viewStates = DDS::ANY_VIEW_STATE,
                         DDS::InstanceStateMask instanceStates = DDS::ANY_INSTANCE_STATE) :
      Super(callback,
            DataAccessor(dataReader.create_querycondition(sampleStates, viewStates, instanceStates,
                                                          query, params)),
            m)
    {
      Super::m_condition = Super::m_accessFunctor.condition();
    }

    virtual ~DdsQueryEventHandler()
    {
      DDS::DataReader * reader = this->condition()->get_datareader();
      reader->delete_readcondition(this->condition());
    }
  };
}

#endif // miro_DdsEventHandler_h
