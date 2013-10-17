#ifndef rapid_TypedLogDataListener_h
#define rapid_TypedLogDataListener_h

#include "DdsTime.h"

namespace rapid {

  template<class TType>
  class TypedLogDataListener
  {
  public:
    virtual ~TypedLogDataListener() {}
    
    virtual void onLogSampleReceived(const TType& sample,
                                     const char* instanceHandle,
                                     const DdsTime& sendTime,
                                     const DdsTime& recvTime,
                                     const QString& agentName,
                                     const QString& topicName) = 0;
  };
  
} // namespace rapid

#endif // rapid_TypedLogDataListener_h
