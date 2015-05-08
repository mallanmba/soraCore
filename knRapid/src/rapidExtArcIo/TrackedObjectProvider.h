#ifndef rapid_ext_arc_TrackedObjectProvider_h
#define rapid_ext_arc_TrackedObjectProvider_h

#include "rapidUtil/Provider_T.h"

#include "rapidExtArcDds/TrackedObjectConfig.h"
#include "rapidExtArcDds/TrackedObjectConfigSupport.h"
#include "rapidExtArcDds/TrackedObjectSample.h"
#include "rapidExtArcDds/TrackedObjectSampleSupport.h"

#include "TrackedObjectIo.h"

#include "rapidExtArcIo_Export.h"

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class TrackedObjectTopicPairParameters;

      typedef Provider_T<TrackedObjectConfig, TrackedObjectSample, TrackedObjectTopicPairParameters> TrackedObjectProviderBase;

      class rapidExtArcIo_Export TrackedObjectProvider : public TrackedObjectProviderBase
      {
      public:
        TrackedObjectProvider(TrackedObjectTopicPairParameters const& params, const std::string& entityName);
      };
    }
  }
}


#endif //rapid_ext_arc_TrackedObjectProvider_h
