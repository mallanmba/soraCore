#include "TrackedObjectProvider.h"

#include "rapidExtArcDds/ExtArcConstants.h"
#include "RapidExtArcIoParameters.h"

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      TrackedObjectProvider::TrackedObjectProvider(TrackedObjectTopicPairParameters const& params, const std::string& entityName)
        :
        TrackedObjectProviderBase(TRACKEDOBJECT_CONFIG_TOPIC,
                                  TRACKEDOBJECT_SAMPLE_TOPIC,
                                  params,
                                  entityName)
      {
      }
    }
  }
}
