#include "BuiltinHandler.h"

#ifdef _WIN32
#  include <Shlwapi.h>
#else
#  include <fnmatch.h>
#endif

#include "DdsString.h"

using namespace kn;
using namespace std;

BuiltinHandler::BuiltinHandler()
  :
  m_eventLoop("")
{
  DdsSampleCallbackFunctor<PtptBuiltinTraits, BuiltinHandler> prtDataHandler(*this);
  DdsSampleCallbackFunctor<PubBuiltinTraits, BuiltinHandler> pubDataHandler(*this);
  DdsSampleCallbackFunctor<SubBuiltinTraits, BuiltinHandler> subDataHandler(*this);

  DdsDomainParticipantRepository* dpRepo = DdsDomainParticipantRepository::instance();

  DDS::DomainParticipant* participant  = dpRepo->get();
  DDS::Subscriber* subscriber   = participant->get_builtin_subscriber();
  DDS::DataReader* tmpPrtReader = subscriber->lookup_datareader(DDS_PARTICIPANT_TOPIC_NAME);
  DDS::DataReader* tmpPubReader = subscriber->lookup_datareader(DDS_PUBLICATION_TOPIC_NAME);
  DDS::DataReader* tmpSubReader = subscriber->lookup_datareader(DDS_SUBSCRIPTION_TOPIC_NAME);

  PtptBuiltinTraits::DataReader* prtDataReader = PtptBuiltinTraits::DataReader::narrow(tmpPrtReader);
  PubBuiltinTraits::DataReader* pubDataReader = PubBuiltinTraits::DataReader::narrow(tmpPubReader);
  SubBuiltinTraits::DataReader* subDataReader = SubBuiltinTraits::DataReader::narrow(tmpSubReader);

  m_eventLoop.createStatusEventHandler<PtptBuiltinTraits>(prtDataHandler, *prtDataReader, kn::DdsRead());
  m_eventLoop.createStatusEventHandler<PubBuiltinTraits>(pubDataHandler, *pubDataReader,  kn::DdsRead());
  m_eventLoop.createStatusEventHandler<SubBuiltinTraits>(subDataHandler, *subDataReader,  kn::DdsRead());

  if(TRUE) {
    DDS_ReturnCode_t retCode;
    DDS::SampleInfoSeq     infoSeq;
    PtptBuiltinTraits::Seq dataSeq;
    retCode = prtDataReader->read(dataSeq, infoSeq, DDS_LENGTH_UNLIMITED,
                                  DDS_ANY_SAMPLE_STATE,
                                  DDS_ANY_VIEW_STATE,
                                  DDS_ANY_INSTANCE_STATE);
    cerr << "Participant read has " << dataSeq.length() << " : " << DdsString::retCode(retCode) << endl;
    for(int i = 0; i < dataSeq.length(); i++) {
      if(infoSeq[i].valid_data) {
        (*this)(&dataSeq[i]);
      }
    }
    retCode = prtDataReader->return_loan(dataSeq, infoSeq);
    cerr << "   return_loan " << DdsString::retCode(retCode) << endl;
  }

  if(TRUE) {
    DDS_ReturnCode_t retCode;
    DDS::SampleInfoSeq     infoSeq;
    PubBuiltinTraits::Seq  dataSeq;
    retCode = pubDataReader->read(dataSeq, infoSeq, DDS_LENGTH_UNLIMITED,
                                  DDS_ANY_SAMPLE_STATE,
                                  DDS_ANY_VIEW_STATE,
                                  DDS_ANY_INSTANCE_STATE);
    cerr << "Publications read has " << dataSeq.length() << " : " << DdsString::retCode(retCode) << endl;
    retCode = pubDataReader->return_loan(dataSeq, infoSeq);
    cerr << "   return_loan " << DdsString::retCode(retCode) << endl;
  }

  MIRO_LOG_CTOR("BuiltinHandler");
}

BuiltinHandler::~BuiltinHandler()
{
  MIRO_LOG_DTOR("BuiltinHandler");
  {
    QList<OrderedTopicKey> keys = m_ptptDataMap.keys();
    for(int k = 0; k < keys.count(); k++) {
      QList<ParticipantBuiltinData*> values = m_ptptDataMap.values(keys[k]);
      for(int v = 0; v < values.count(); v++) {
        PtptBuiltinTraits::TypeSupport::delete_data(values[v]);
      }
    }
  }
  {
    QList<QString> keys = m_pubDataMap.keys().toSet().toList(); // necessary to eliminate duplicate keys from QMultiMap
    for(int k = 0; k < keys.count(); k++) {
      QList<PublicationBuiltinData*> values = m_pubDataMap.values(keys[k]);
      for(int v = 0; v < values.count(); v++) {
        PubBuiltinTraits::TypeSupport::delete_data(values[v]);
      }
    }
  }
  {
    QList<QString> keys = m_subDataMap.keys().toSet().toList(); // necessary to eliminate duplicate keys from QMultiMap
    for(int k = 0; k < keys.count(); k++) {
      QList<SubscriptionBuiltinData*> values = m_subDataMap.values(keys[k]);
      for(int v = 0; v < values.count(); v++) {
        SubBuiltinTraits::TypeSupport::delete_data(values[v]);
      }
    }
  }
}

void
BuiltinHandler::operator() ( PtptBuiltinTraits::Type const* event) throw()
{
  cerr << "PtptBuiltin" << endl;
  cerr << "  Participant=" << event->participant_name.name << endl;
  PtptBuiltinTraits::Type* store = PtptBuiltinTraits::TypeSupport::create_data();
  PtptBuiltinTraits::TypeSupport::copy_data(store, event);
  m_ptptDataMap.insert(OrderedTopicKey(event->key), store);
}

void
BuiltinHandler::operator() ( PubBuiltinTraits::Type const* event) throw()
{
  QString topic = event->topic_name;
  PubBuiltinTraits::Type* store = PubBuiltinTraits::TypeSupport::create_data();
  PubBuiltinTraits::TypeSupport::copy_data(store, event);
  m_pubDataMap.insert(topic, store);
  m_discoveredTopics.insert(topic);
  //cerr << "PubBuiltin - " << qPrintable(topic) << endl;
}

void
BuiltinHandler::operator() (SubBuiltinTraits::Type const* event) throw()
{
  QString topic = event->topic_name;
  SubBuiltinTraits::Type* store = SubBuiltinTraits::TypeSupport::create_data();
  SubBuiltinTraits::TypeSupport::copy_data(store, event);
  m_subDataMap.insert(topic, store);
  m_discoveredTopics.insert(topic);
  //cerr << "SubBuiltin - " << qPrintable(topic) << endl;
}

/**
 * @returns true if any of the publications or subscriptions
 * have a participant_key that is not mapped to ParticipantBuiltinData
 */
bool
BuiltinHandler::hasUnresolvedParticipants() const
{
  if(TRUE) {
    DdsDomainParticipantRepository* dpRepo = DdsDomainParticipantRepository::instance();
    DDS::DomainParticipant* participant  = dpRepo->get();
    DDS::Subscriber* subscriber   = participant->get_builtin_subscriber();
    DDS::DataReader* tmpPrtReader = subscriber->lookup_datareader(DDS_PARTICIPANT_TOPIC_NAME);
    PtptBuiltinTraits::DataReader* prtDataReader = PtptBuiltinTraits::DataReader::narrow(tmpPrtReader);
    DDS::SampleInfoSeq     infoSeq;
    PtptBuiltinTraits::Seq dataSeq;
    DDS::ReturnCode_t retCode;
    retCode = prtDataReader->read(dataSeq, infoSeq, DDS_LENGTH_UNLIMITED,
                                  DDS_ANY_SAMPLE_STATE,
                                  DDS_ANY_VIEW_STATE,
                                  DDS_ANY_INSTANCE_STATE);
    cerr << "Participant read has " << dataSeq.length() << " : " << DdsString::retCode(retCode) << endl;
    retCode = prtDataReader->return_loan(dataSeq, infoSeq);
    cerr << "   return_loan " << DdsString::retCode(retCode) << endl;
  }


  {
    QList<QString> keys = m_pubDataMap.keys().toSet().toList();
    for(int k = 0; k < keys.count(); k++) {
      QList<PublicationBuiltinData*> values = m_pubDataMap.values(keys[k]);
      for(int v = 0; v < values.count(); v++) {
        OrderedTopicKey otk(values[v]->participant_key);
        if(!m_ptptDataMap.contains(otk)) {
          return true;
        }
      }
    }
  }
  {
    QList<QString> keys = m_subDataMap.keys().toSet().toList();
    for(int k = 0; k < keys.count(); k++) {
      QList<SubscriptionBuiltinData*> values = m_subDataMap.values(keys[k]);
      for(int v = 0; v < values.count(); v++) {
        OrderedTopicKey otk(values[v]->participant_key);
        if(!m_ptptDataMap.contains(otk)) {
          return true;
        }
      }
    }
  }
  return false;
}

/**
 * @returns sorted list of all topics, either publications or subscriptions
 */
QStringList BuiltinHandler::getDiscoveredTopics() const
{
  QStringList retVal(m_discoveredTopics.toList());
  retVal.sort();
  return retVal;
}

/**
 * @returns sorted list of all discovered partitions
 */
QStringList BuiltinHandler::getDiscoveredPartitions() const
{
  QStringList topics(m_discoveredTopics.toList());
  QSet<QString> partitions;
  for(int i = 0; i < topics.count(); i++) {
    QList<PublicationBuiltinData*> pubs = getPublications(topics[i]);
    for(int p = 0; p < pubs.count(); p++) {
      DDS_StringSeq& ptns = pubs[p]->partition.name;
      for(int n = 0; n < ptns.length(); n++) {
        partitions.insert(ptns[n]);
      }
    }
    QList<SubscriptionBuiltinData*> subs = getSubscriptions(topics[i]);
    for(int s = 0; s < subs.count(); s++) {
      DDS_StringSeq& ptns = subs[s]->partition.name;
      for(int n = 0; n < ptns.length(); n++) {
        partitions.insert(ptns[n]);
      }
    }
  }
  QStringList retVal(partitions.toList());
  retVal.sort();

  // remove any regex partitions
  QMutableListIterator<QString> it(retVal);
  while(it.hasNext()) {
    QString val = it.next();
    if(isRegex(val)) {
      it.remove();
    }
  }

  return retVal;
}

/**
 *  FIXME: make a better filter for determining if partition name is regex
 */
bool BuiltinHandler::isRegex(const QString& str) const
{
  return (str.contains('*') || str.contains('?') || str.contains('['));
}


/**
 * RTI DDS uses fnmatch style regex
 * @param matchString does not contain special characters
 * @param partitions partition strings may contain special characters
 */
bool
BuiltinHandler::partitionMatches(const char* matchString, const DDS_StringSeq& partitions) const
{
  for(int i = 0; i < partitions.length(); i++) {
#ifdef _WIN32
    if(PathMatchSpec(matchString, partitions[i]) == 0)
      return true;
#else
    if(fnmatch(partitions[i], matchString, 0) == 0)
      return true;
#endif
  }
  return false;
}

/**
 * @returns list of publications that match topic and partition
 */
QList<PublicationBuiltinData*>
BuiltinHandler::getPublications(const QString& topic, const QString& partition) const
{
  QList<PublicationBuiltinData*> retVal;
  QList<PublicationBuiltinData*> allPubs = getPublications(topic);
  for(int i = 0; i < allPubs.size(); i++) {
    if(partitionMatches(partition.toAscii(), allPubs[i]->partition.name)) {
      retVal.append(allPubs[i]);
    }
  }
  return retVal;
}

/**
 * @returns list of subscriptions that match topic and partition
 */
QList<SubscriptionBuiltinData*>
BuiltinHandler::getSubscriptions(const QString& topic, const QString& partition) const
{
  QList<SubscriptionBuiltinData*> retVal;
  QList<SubscriptionBuiltinData*> allSubs = getSubscriptions(topic);
  for(int i = 0; i < allSubs.size(); i++) {
    if(partitionMatches(partition.toAscii(), allSubs[i]->partition.name)) {
      retVal.append(allSubs[i]);
    }
  }
  return retVal;
}


void
BuiltinHandler::processEvents(int msecTimeout)
{
  kn::milliseconds tv(msecTimeout);
  m_eventLoop.processEvents(tv);
}


