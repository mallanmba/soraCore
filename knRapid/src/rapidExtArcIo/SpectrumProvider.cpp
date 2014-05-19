
#include "SpectrumProvider.h"
#include "rapidExtArcDds/ExtArcConstants.h"
#include "RapidExtArcIoParameters.h"

namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      SpectrumProvider::SpectrumProvider(SpectrumTopicPairParameters const& params, const std::string& entityName):
        SpectrumProviderBase(SPECTRUM_CONFIG_TOPIC, SPECTRUM_SAMPLE_TOPIC, params, entityName)
      {}

      //must be extended to implement publish function, this is to allow flexibility for different spectrometers
      //example can be seen in knSvcs/knNirvss/NirvssProvider.cpp
    }
  }
}
