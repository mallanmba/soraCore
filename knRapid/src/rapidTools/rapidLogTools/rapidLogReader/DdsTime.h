#ifndef rapid_DdsTime_h
#define rapid_DdsTime_h

#include <QtCore/qglobal.h>

namespace rapid {

  struct DdsTime {
    qint32 sec;
    qint32 nanosec;
    
    DdsTime() {
      this->sec     = 0;
      this->nanosec = 0;
    }
    
    DdsTime(int sec, int nanosec) {
      this->sec     = sec;
      this->nanosec = nanosec;
    }
    
    DdsTime(const DdsTime& time) {
      this->sec     = time.sec;
      this->nanosec = time.nanosec;
    }
    
    DdsTime(qint64 msec) {
      set(msec);
    }
    
    qint64 msec() {
      return ((qint64)sec*1000) + (nanosec/1000000);
    }
    
    DdsTime& set(qint64 msec) {
      sec     = (qint32)(msec/1000);
      nanosec = (qint32)(msec%1000 * 1000000);
      return *this;
    }
  };

} // namespace rapid

#endif // rapid_DdsTime_h
