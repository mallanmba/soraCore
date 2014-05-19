#ifndef kn_BuiltinTraits_h
#define kn_BuiltinTraits_h

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>
#include <ndds/ndds_utility_cpp.h>

namespace kn {

  class PtptBuiltinTraits
  {                                                         
  public:
    typedef DDS_ParticipantBuiltinTopicData            Type;
    typedef DDSParticipantBuiltinTopicDataTypeSupport  TypeSupport;
    typedef DDSParticipantBuiltinTopicDataDataReader   DataReader;
    typedef DDS_ParticipantBuiltinTopicDataSeq         Seq;
  };

  class PubBuiltinTraits
  {                                                         
  public:
    typedef DDS_PublicationBuiltinTopicData            Type;
    typedef DDSPublicationBuiltinTopicDataTypeSupport  TypeSupport;
    typedef DDSPublicationBuiltinTopicDataDataReader   DataReader;
    typedef DDS_PublicationBuiltinTopicDataSeq         Seq;
  };

  class SubBuiltinTraits
  {                                                         
  public:
    typedef DDS_SubscriptionBuiltinTopicData           Type;
    typedef DDSSubscriptionBuiltinTopicDataTypeSupport TypeSupport;
    typedef DDSSubscriptionBuiltinTopicDataDataReader  DataReader;
    typedef DDS_SubscriptionBuiltinTopicDataSeq        Seq;
  };
  
}


#endif // kn_BuiltinTraits_h
