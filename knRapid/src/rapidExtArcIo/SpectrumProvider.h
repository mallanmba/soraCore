#ifndef rapid_ext_arc_SpectrumProvider_h
#define rapid_ext_arc_rapidSpectrumProvider_h

#include "rapidExtArcIo_Export.h"
#include "rapidUtil/Provider_T.h"
#include "SpectrumIo.h"  //operator <<= SpectrumTopicPairs::config

#include "rapidExtArcDds/SpectrumConfig.h"
#include "rapidExtArcDds/SpectrumConfigSupport.h"
#include "rapidExtArcDds/SpectrumSample.h"
#include "rapidExtArcDds/SpectrumSampleSupport.h"

namespace rapid
{
  namespace ext
  { 
    namespace arc
    {
      class SpectrumTopicPairParameters;

      typedef Provider_T<SpectrumConfig, SpectrumSample, SpectrumTopicPairParameters> SpectrumProviderBase;

      class rapidExtArcIo_Export SpectrumProvider : public SpectrumProviderBase
      {
      public:
        SpectrumProvider(SpectrumTopicPairParameters const& params, const std::string& entityName);
      };
    }
  }
}


#endif //rapidSpectrumProvider_h
