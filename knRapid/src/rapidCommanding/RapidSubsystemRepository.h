#ifndef rapid_RapidSubsystemRepository_h
#define rapid_RapidSubsystemRepository_h

#include <knShare/Repository.h>

#include "SubsysImpl.h"

namespace rapid {

  typedef kn::shared_ptr<SubsysImpl> RapidSubsystemPtr;
  typedef kn::Repository<RapidSubsystemPtr> RapidSubsystemRepository;

}

RAPIDCOMMANDING_SINGLETON_DECLARATION(kn::Repository<rapid::RapidSubsystemPtr>);

#endif // rapid_RapidSubsystemRepository_h

