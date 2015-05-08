#ifndef rapid_ext_arc_HydraIo_h
#define rapid_ext_arc_HydraIo_h

#include "rapidExtArcIo_Export.h"
#include <iosfwd>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class HydraConfigParameters;
      class HydraConfig;

      rapidExtArcIo_Export extern std::ostream& operator<< (std::ostream& ostr, HydraConfig const& rhs);
      rapidExtArcIo_Export extern void operator <<= (HydraConfig& config, HydraConfigParameters const& params);
    }
  }
}

#endif //rapid_ext_arc_HydraIo_h
