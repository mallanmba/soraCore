#ifndef rapid_ext_arc_SpectrumIo_h
#define rapid_ext_arc_SpectrumIo_h

#include "rapidExtArcIo_Export.h"
#include <iosfwd>

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      class SpectrumConfigParameters;
      class SpectrumConfig;

      rapidExtArcIo_Export extern std::ostream& operator<< (std::ostream& ostr, SpectrumConfig const& rhs);
      rapidExtArcIo_Export extern void operator <<= (SpectrumConfig& config, SpectrumConfigParameters const& params);
    }
  }
}

#endif //rapid_ext_arc_SpectrumIo_h
