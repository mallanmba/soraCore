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
#ifndef miro_ReaderAccessFunctors_h
#define miro_ReaderAceessFunctors_h

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>


namespace kn
{
  class DdsTake {};
  class DdsRead {};

  template<class  T>
  class DdsReaderAccessFunctorBase
  {
  public:
    explicit DdsReaderAccessFunctorBase(typename T::DataReader& reader) :
      m_reader(reader)
    {}
    typename T::DataReader& dataReader() throw() { return m_reader; }
    typename T::DataReader const& dataReader() const throw() { return m_reader; }
 
 protected:
    typename T::DataReader& m_reader;
  };

  template<typename T>
  class DdsReaderOnStatusCondition : public DdsReaderAccessFunctorBase<T>
  {
    typedef DdsReaderAccessFunctorBase<T> Super;
  public:
    explicit DdsReaderOnStatusCondition(typename T::DataReader& reader,
                                        DDS::SampleStateMask sampleStates = DDS::ANY_SAMPLE_STATE,
                                        DDS::ViewStateMask viewStates = DDS::ANY_VIEW_STATE, 
                                        DDS::InstanceStateMask instanceStates = DDS::ANY_INSTANCE_STATE) :
      DdsReaderAccessFunctorBase<T>(reader),
      m_sampleStates(sampleStates),
      m_viewStates(viewStates),
      m_instanceStates(instanceStates)
    {}

    DDS::SampleStateMask sampleStates() const throw() { return m_sampleStates; }
    void sampleStates(DDS::SampleStateMask states) throw() { m_sampleStates = states; }
    DDS::ViewStateMask viewStates() const throw() { return m_viewStates; }
    void viewStates(DDS::ViewStateMask states) throw() { m_viewStates = states; }
    DDS::InstanceStateMask instanceStates() const throw() { return m_instanceStates; }
    void instanceStates(DDS::InstanceStateMask states) throw() { m_instanceStates = states; }

    DDS::ReturnCode_t
    operator()(typename T::Seq & samples, DDS::SampleInfoSeq& infos, DDS::Long maxSamples, DdsTake const&)
    {
      return Super::m_reader.take(samples, infos, maxSamples,
                                  m_sampleStates, m_viewStates, m_instanceStates);
    }

    DDS::ReturnCode_t
    operator()(typename T::Seq & samples, DDS::SampleInfoSeq& infos, DDS::Long maxSamples, DdsRead const&)
    {
      return Super::m_reader.read(samples, infos, maxSamples,
                                  m_sampleStates, m_viewStates, m_instanceStates);
    }

  protected:
    DDS::SampleStateMask m_sampleStates;
    DDS::ViewStateMask m_viewStates;
    DDS::InstanceStateMask m_instanceStates;
  };

  template<typename T>
  class DdsReaderOnReadCondition : public DdsReaderAccessFunctorBase<T>
  {
    typedef DdsReaderAccessFunctorBase<T> Super;
  public:
    DdsReaderOnReadCondition(DDS::ReadCondition * condition) :
      Super(dynamic_cast<typename T::DataReader&>(*(condition->get_datareader()))),
      m_condition(condition)
    {}

    DDS::ReadCondition * condition() const throw() { return m_condition; }

    DDS::ReturnCode_t
    operator()(typename T::Seq & samples, DDS::SampleInfoSeq& infos, DDS::Long maxSamples, DdsTake const&)
    {
      return Super::m_reader.take_w_condition(samples, infos, maxSamples, m_condition);
    }

    DDS::ReturnCode_t
    operator()(typename T::Seq & samples, DDS::SampleInfoSeq& infos, DDS::Long maxSamples, DdsRead const&)
    {
      return Super::m_reader.read_w_condition(samples, infos, maxSamples, m_condition);
    }

  protected:
    DDS::ReadCondition * m_condition;
  };

}

#endif // miro_ReaderAceessFunctors_h
