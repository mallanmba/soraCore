#ifndef rapid_TopicLogFileReader_h
#define rapid_TopicLogFileReader_h

#include <QDir>

#include "TopicLogHeader.h"
#include "RapidLog.h"
#include "DdsTime.h"

namespace rapid {

  class LogDataProvider;
  
  class TopicLogFileReader {
  public:
    TopicLogFileReader(const QDir& qdir, const QString& filename);
    ~TopicLogFileReader();
    
    bool             isValid();
    const QString&   agentName() const {
      return m_agentName;
    }
    const QString&   topicName() const {
      return m_topicName;
    }
    const QString&   typeName() const {
      return m_info.typeName;
    }
    qint64           startTime() const {
      return m_info.startTime;
    }
    LogDataProvider* logDataProvider() {
      return m_pLogDataProvider;
    }
    
    bool readData(qint64 currentLogTime);

  
  protected:
    bool             readHeader(const QString& filename);
    LogDataProvider* createLogDataProvider();
    
  protected:
    TopicLogHeader   m_info;
    QString          m_agentName;
    QString          m_topicName;
    QFile*           m_pDataFile;
    QDataStream*     m_pDataStream;
    LogDataProvider* m_pLogDataProvider;
    
    qint64           m_nowTime;
    qint64           m_endTime;
    qint32           m_cdrSize;
    char             m_instanceHandle[16];
    DdsTime          m_sendTime;
    DdsTime          m_recvTime;
    char             m_preambleBuffer[4];
    RapidLog::PreambleId m_preambleId;
    qint32           m_chunkSize;
  };



} // namespace rapid

#endif // rapid_TopicLogFileReader_h
