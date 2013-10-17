#include "TopicLogFileReader.h"
#include "RapidLog.h"

#include <iostream>
#include <climits>

#include "DeclareRapid.h"
#include "DeclareRapidExt.h"
#include "DeclareRapidExtArc.h"

using namespace std;
using namespace rapid;

/**
 *
 */
TopicLogFileReader::TopicLogFileReader(const QDir& qdir, const QString& filename)
  :
  m_info(),
  m_pDataFile(NULL),
  m_pDataStream(NULL),
  m_pLogDataProvider(NULL),
  m_nowTime(0),
  m_endTime(LLONG_MAX),
  m_cdrSize(0),
  m_sendTime(0),
  m_recvTime(0),
  m_preambleId(RapidLog::Uninitialized),
  m_chunkSize(-1)
{
  int firstDot = filename.indexOf('.');
  int lastDot  = filename.lastIndexOf('.');

  m_agentName = filename.mid(0,firstDot);
  m_topicName = filename.mid(firstDot+1,lastDot-firstDot-1);

  m_pDataFile = new QFile(qdir.absolutePath()+"/"+filename);
  if(m_pDataFile->open(QIODevice::ReadOnly) == FALSE) {
    cerr << "ERROR! Could not open file: " << filename.toStdString() << endl;
    return;
  }
  m_pDataStream = new QDataStream(m_pDataFile);
  m_pDataStream->setByteOrder(QDataStream::BigEndian);

  if(readHeader(filename)) {
    m_pLogDataProvider = createLogDataProvider();
  }
}

/**
 *
 */
TopicLogFileReader::~TopicLogFileReader()
{
  delete m_pDataFile;
  delete m_pDataStream;
  delete m_pLogDataProvider;
}

/**
 *
 */
bool TopicLogFileReader::isValid()
{
  return m_pLogDataProvider != NULL;
}

/**
 *
 */
LogDataProvider* TopicLogFileReader::createLogDataProvider()
{
  LogDataProvider* retVal = NULL;

  const int numFactories = 3;
  LogDataProviderFactory* factories[numFactories];
  factories[0] = new RapidLogDataProviderFactory();
  factories[1] = new RapidExtLogDataProviderFactory();
  factories[2] = new RapidExtArcLogDataProviderFactory();

  for(int i = 0; i < numFactories; i++) {
    retVal = factories[i]->forTypeName(m_info.typeName, m_agentName, m_topicName);
    if(retVal != NULL)
      break;
  }

  return retVal;
}


/**
 *
 */
bool TopicLogFileReader::readHeader(const QString& filename)
{
  qint16  typeNameLen;
  char    typeNameBuffer[1024];
  QDataStream& dataStream = *m_pDataStream;

  dataStream.readRawData(m_info.protocol, 8);
  if(!RapidLog::protocolOk(m_info.protocol)) {
    cerr << "ERROR! " << filename.toStdString() << " is not a rapidLog file\n";
    return FALSE;
  }
  dataStream >> m_info.version;
  dataStream >> m_info.startTime;
  dataStream >> m_info.isBigEndian;
  dataStream >> m_info.wasReliable;
  dataStream >> m_info.wasDurable ;
  dataStream >> typeNameLen;
  if(typeNameLen > 1023) {
    cerr << "Yowza, that's a mighty long type name! I give up. \n";
    return FALSE;
  }
  dataStream.readRawData(typeNameBuffer, typeNameLen);
  typeNameBuffer[typeNameLen] = 0;
  m_info.typeName  = typeNameBuffer;

  return TRUE;
}

bool TopicLogFileReader::readData(qint64 currentLogTime)
{
  QDataStream& dataStream = *m_pDataStream;
  if(m_endTime < currentLogTime)
    return false;

  while(m_nowTime < currentLogTime && dataStream.status() == QDataStream::Ok) {
    switch(m_preambleId) {
      case RapidLog::Uninitialized: // first time through, we do nothing
        break;
      case RapidLog::Samp:
        m_pLogDataProvider->deserialize(dataStream, m_cdrSize, m_instanceHandle, m_sendTime, m_recvTime);
        break;
      case RapidLog::Dead:
        dataStream.skipRawData(m_cdrSize);
        break;
      case RapidLog::Invalid:
        if(dataStream.skipRawData(m_chunkSize) < 0) {
          m_endTime = m_nowTime;
          return FALSE;
        }
        break;
    }

    int numRead = dataStream.readRawData(m_preambleBuffer, 4);
    if(numRead < 4) { // eof
      m_endTime = m_nowTime;
      return FALSE;
    }
    m_preambleId = RapidLog::preambleId(m_preambleBuffer);
    if(m_info.version >= 2) // preamble chunk size added in version 2 of log file format
      dataStream >> m_chunkSize;
    switch(m_preambleId) {
      case RapidLog::Samp:
      case RapidLog::Dead:
        dataStream.readRawData(m_instanceHandle, 16);
        dataStream >> m_sendTime.sec;
        dataStream >> m_sendTime.nanosec;
        dataStream >> m_recvTime.sec;
        dataStream >> m_recvTime.nanosec;
        dataStream >> m_cdrSize;
        m_nowTime = m_sendTime.msec();
        break;
      case RapidLog::Uninitialized:
      case RapidLog::Invalid:
        break;
    }
  }

  return true;
}
