#ifndef rapid_TopicLogHeader_h
#define rapid_TopicLogHeader_h

#include <QString>

namespace rapid {

  struct TopicLogHeader {
    char    protocol[9];
    qint16  version;
    qint64  startTime;
    qint8   isBigEndian;
    qint8   wasReliable;
    qint8   wasDurable;
    QString typeName;

    TopicLogHeader()
      : 
      version(0),
      startTime(0)
    {
      memset(protocol,0,9);
    }
  };

} // namespace rapid

#endif // rapid_TopicLogHeader_h
