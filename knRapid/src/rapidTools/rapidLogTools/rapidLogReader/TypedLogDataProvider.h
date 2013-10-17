#ifndef rapid_TypedLogDataProvider_h
#define rapid_TypedLogDataProvider_h

#include <iostream>
#include <cstdio>

#include <QDataStream>
#include <QString>

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <boost/function.hpp>
#include <boost/bind.hpp>

#include "DdsTime.h"
#include "TypedLogDataListener.h"

namespace rapid {

  class LogDataProvider {
  protected:
    QString   m_agentName;
    QString   m_topicName;
    
  public:
    LogDataProvider(const QString& agentName, const QString& topicName) {
      m_agentName = agentName;
      m_topicName = topicName;
    }
    virtual ~LogDataProvider() {}
    
    const QString& agentName() const { return m_agentName; }
    const QString& topicName() const {  return m_topicName; }
    virtual const char* typeName() const = 0;
    virtual void deserialize(QDataStream& dataStream, int cdrSize, 
                             const char* instanceHandle, 
                             const DdsTime& sendTime, 
                             const DdsTime& recvTime) = 0;

  };
  
  /**
   *
   *
   *///-----------------------
  template<class TType>
  class TypedLogDataProvider : public LogDataProvider
  {
  public:
    typedef typename TType::TypeSupport TypeSupport;
    
    typedef boost::function<unsigned int(void)>                     GetSerializedSampleMaxSizeFunc;
    typedef boost::function<RTIBool(TType**,struct RTICdrStream *)> DeserializeFunc;

  protected: 
    char*     m_cdrBuffer;
    TType*    m_sample;
    
    QList<TypedLogDataListener<TType>* > m_listeners;
    DeserializeFunc f_deserialize;

  public:  
    TypedLogDataProvider(const QString& agentName, const QString& topicName,
                         GetSerializedSampleMaxSizeFunc getSerializedSampleMaxSizeFunc,
                         DeserializeFunc                deserializeFunc) 
      : LogDataProvider(agentName, topicName)
    {
      int maxSize = getSerializedSampleMaxSizeFunc();
      m_cdrBuffer = new char[maxSize];
      m_sample    = TypeSupport::create_data();
      
      f_deserialize = deserializeFunc;
    }
    
    virtual ~TypedLogDataProvider() {
      delete [] m_cdrBuffer;
      TypeSupport::delete_data(m_sample);
    }
    
    void addListener(TypedLogDataListener<TType>* listener) {
      if(!m_listeners.contains(listener)) {
        m_listeners.append(listener);
      }
    }
    
    void removeListener(TypedLogDataListener<TType>* listener) {
      m_listeners.removeOne(listener);
    }
    
    virtual void processSample(const TType& sample,
                               const char* instanceHandle,
                               const DdsTime& sendTime,
                               const DdsTime& recvTime) {
      //TypeSupport::print_data(&sample);
      for(int i = 0; i < m_listeners.count(); i++) {
        m_listeners[i]->onLogSampleReceived(sample, instanceHandle, sendTime, recvTime, m_agentName, m_topicName);
      }
    }
    

    virtual const char* typeName() const {
      return TypeSupport::get_type_name();
    }
    
    
    void deserialize(QDataStream& dataStream, int cdrSize, const char* instanceHandle, const DdsTime& sendTime, const DdsTime& recvTime) {
      struct RTICdrStream m_deserializeStream;
      
      int read;
      if( (read=dataStream.readRawData(m_cdrBuffer, cdrSize)) == cdrSize) {
        RTICdrStream_init(&m_deserializeStream);
        RTICdrStream_set(&m_deserializeStream, m_cdrBuffer, cdrSize);

        RTIBool ok = f_deserialize(&m_sample, &m_deserializeStream);
        
        if(ok) {
          processSample(*m_sample, instanceHandle, sendTime, recvTime);
        }
        else {
          std::cerr << "ERROR DESERIALIZING" << std::endl;
        }
      }
      else {
        std::cout << "file read error: read " << read << " bytes out of " << cdrSize << ": " << m_topicName.toStdString() << "\n";
      }
    }
  };
  
} // namespace rapid


#endif // rapid_TypedLogDataProvider_h
