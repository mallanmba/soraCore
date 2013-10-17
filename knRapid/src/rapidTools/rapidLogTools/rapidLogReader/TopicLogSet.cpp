#include "TopicLogSet.h"

#include <climits>

using namespace rapid;

/**
 * go through all the topics and process messages up to the 
 * time specified
 */
bool TopicLogSet::readData(qint64 currentLogTime) {
  bool someGood = false;
  QList<TopicLogFileReader*> readers = m_fileReaders.values();
  for(int i = 0; i < readers.count(); i++) {
    if(readers[i]->readData(currentLogTime)) {
      someGood = true;
    }
  }
  return someGood;
}

qint64 TopicLogSet::logStartTime() {
  qint64 startTime = LLONG_MAX;
  QList<TopicLogFileReader*> readers = m_fileReaders.values();
  for(int i = 0; i < readers.count(); i++) {
    if(readers[i]->startTime() < startTime) {
      startTime = readers[i]->startTime();
    }
  }
  return startTime;
}
