#include "RapidSubsystemRepository.h"

// does this evaluate to true on any of our target platforms?
#if defined (ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION)
template kn::Singleton<kn::RapidSubsystemRepository> * kn::Singleton<kn::RapidSubsystemRepository>::s_instance;
#endif /* ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION */
