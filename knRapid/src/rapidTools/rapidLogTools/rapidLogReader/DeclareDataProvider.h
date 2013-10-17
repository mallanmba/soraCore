#ifndef DeclareDataProvider_h
#define DeclareDataProvider_h

#include <cstring>

#include "TypedLogDataProvider.h"

#define LOG_DATA_PROVIDER_DECLARE(SHORTNAME,FULLNAME) \
\
  class SHORTNAME##DataProvider : public TypedLogDataProvider<FULLNAME>                        \
  {                                                                                            \
  public:                                                                                      \
    SHORTNAME##DataProvider(const QString& agentName, const QString& topicName)                \
      : TypedLogDataProvider<FULLNAME>(agentName, topicName,                                   \
                                   boost::bind(FULLNAME##Plugin_get_serialized_sample_max_size,\
                                               (PRESTypePluginEndpointData)NULL,               \
                                               RTI_TRUE,                                       \
                                               RTI_CDR_ENCAPSULATION_ID_CDR_BE,                \
                                               (unsigned int)0),                               \
                                   boost::bind(FULLNAME##Plugin_deserialize,                   \
                                               (PRESTypePluginEndpointData)NULL,               \
                                               _1,                                             \
                                               (RTIBool*)NULL,                                 \
                                               _2,                                             \
                                               RTI_TRUE,                                       \
                                               RTI_TRUE,                                       \
                                               (void*)NULL) ) {}                               \
                                                                                               \
    static const char* getTypeName() { return #FULLNAME; }                                     \
  };


#define LOG_DATA_PROVIDER_FACTORY(SHORTNAME) \
if(typeName == SHORTNAME##DataProvider::getTypeName()) return new SHORTNAME##DataProvider(agentName, topicName);

namespace rapid {
  class LogDataProviderFactory {
  public:
    virtual ~LogDataProviderFactory() {}
    virtual LogDataProvider* forTypeName(const QString& typeName, const QString& agentName, const QString& topicName) = 0;
  };
}

#endif // DeclareDataProvider_h
