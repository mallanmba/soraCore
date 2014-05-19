#ifndef kn_BuiltinHandler_h
#define kn_BuiltinHandler_h

#include "BuiltinTraits.h"

#include "knDds/DdsEventLoop.h"

#include <QSet>
#include <QMap>
#include <QMultiMap>
#include <QStringList>

namespace kn {
  
  typedef DDS_BuiltinTopicKey_t            TopicKey;
  typedef PtptBuiltinTraits::Type          ParticipantBuiltinData;
  typedef PubBuiltinTraits::Type           PublicationBuiltinData;
  typedef SubBuiltinTraits::Type           SubscriptionBuiltinData;
  
  struct OrderedTopicKey
  {
    OrderedTopicKey(const TopicKey& inKey) : key(inKey) {}
    TopicKey key;
    inline bool operator < (const OrderedTopicKey& rhs) const {
      for(int i = 0; i < 4; i++) {
        if(key.value[i] != key.value[i]) {
          return key.value[i] < rhs.key.value[i];
        }
      }
      return false;
    }
    inline bool operator > (const OrderedTopicKey& rhs) const {
      for(int i = 0; i < 4; i++) {
        if(key.value[i] != rhs.key.value[i]) {
          return key.value[i] > rhs.key.value[i];
        }
      }
      return false;
    }
    inline bool operator == (const OrderedTopicKey& rhs) const {
      for(int i = 0; i < 4; i++) {
        if(key.value[i] != rhs.key.value[i]) {
          return false;
        }
      }
      return true;
    }
  };
  
  /**
   * 
   */
  class BuiltinHandler {
  public:
    BuiltinHandler();
    
    ~BuiltinHandler();
    
    void operator() (PtptBuiltinTraits::Type const * event) throw();
    void operator() (PubBuiltinTraits::Type const * event) throw();
    void operator() (SubBuiltinTraits::Type const * event) throw();
    
    bool participantCount() const {
      return m_ptptDataMap.count();
    }
    bool hasUnresolvedParticipants() const;
    bool hasParticipantData(const TopicKey& key) const {
      OrderedTopicKey oKey(key);
      return m_ptptDataMap.contains(oKey);
    }
    const ParticipantBuiltinData& getParticipantData(const TopicKey& key) const {
      OrderedTopicKey oKey(key);
      ParticipantBuiltinData* data = m_ptptDataMap.value(oKey);
      return *data;
    }
    
    QList<PublicationBuiltinData*> getPublications(const QString& topic, const QString& partition) const;
    QList<PublicationBuiltinData*> getPublications(const QString& topic) const {
      return m_pubDataMap.values(topic);
    }
    
    QList<SubscriptionBuiltinData*> getSubscriptions(const QString& topic, const QString& partition) const;
    QList<SubscriptionBuiltinData*> getSubscriptions(const QString& topic) const {
      return m_subDataMap.values(topic);
    }

    
    QStringList getDiscoveredTopics() const;
    QStringList getDiscoveredPartitions() const;
    
    void processEvents(int msecTimeout = 10);

  protected:
    DdsEventLoop  m_eventLoop;
    QSet<QString> m_discoveredTopics;
    QMap<OrderedTopicKey,ParticipantBuiltinData*> m_ptptDataMap;
    QMultiMap<QString,PublicationBuiltinData*>    m_pubDataMap;
    QMultiMap<QString,SubscriptionBuiltinData*>   m_subDataMap;
  
  private:
    bool isRegex(const QString& str) const;
    bool partitionMatches(const char* matchString, const DDS_StringSeq& partitions) const;
  };
}

#endif // kn_BuiltinHandler_h
