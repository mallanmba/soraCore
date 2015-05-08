#ifndef rapid_ext_arc_TrackedObjectIo_h
#define rapid_ext_arc_TrackedObjectIo_h

#include "rapidExtArcIo_Export.h"
#include <iosfwd>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class TrackedObjectConfigParameters;
      class TrackedObjectConfig;

      rapidExtArcIo_Export extern std::ostream& operator<< (std::ostream& ostr, TrackedObjectConfig const& rhs);
      rapidExtArcIo_Export extern void operator <<= (TrackedObjectConfig& config, TrackedObjectConfigParameters const& params);
    }
  }
}

#endif //rapid_ext_arc_TrackedObjectIo_h
