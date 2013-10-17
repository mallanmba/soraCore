#ifndef rapid_TopicLogSet_h
#define rapid_TopicLogSet_h

#include <QMap>

#include "TopicLogFileReader.h"
#include "TypedLogDataProvider.h"


namespace rapid {

  class TopicLogSet {
  public:
    TopicLogSet() {}
    ~TopicLogSet() {}
    
    void put(const QString& agent, const QString& topic, TopicLogFileReader* reader) {
      // create map key from agent and topic strings
      QString key = agent+'\t'+topic;
      m_fileReaders.insert(key, reader);
    }
    
    template <class TType> bool addListener(const QString& agent, const QString& topic, TypedLogDataListener<TType>* listener) {
      QString key = agent+'\t'+topic;
      TopicLogFileReader* reader = m_fileReaders.value(key);
      if(reader != NULL) {
        LogDataProvider* dataProvider = reader->logDataProvider();
        TypedLogDataProvider<TType>* typedDataProvider = dynamic_cast<TypedLogDataProvider<TType>* >(dataProvider);
        typedDataProvider->addListener(listener);
        return TRUE;
      }
      return FALSE;
    }
    
    qint64 logStartTime();
    bool   readData(qint64 currentLogTime);
    
  protected:
    QMap<QString,TopicLogFileReader*> m_fileReaders;
  
  };

} // namespace rapid

#endif // rapid_TopicLogSet_h
