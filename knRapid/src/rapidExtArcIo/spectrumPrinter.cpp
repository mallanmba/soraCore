#include "RapidExtArcIoParameters.h"
#include "SpectrumIo.h"

#include "rapidUtil/TopicPairApp_T.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidExtArcDds/SpectrumConfig.h"
#include "rapidExtArcDds/SpectrumConfigSupport.h"
#include "rapidExtArcDds/SpectrumSample.h"
#include "rapidExtArcDds/SpectrumSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include <iostream>

namespace rapid
{
  typedef TopicPairApp_T<ext::arc::SpectrumConfig, ext::arc::SpectrumSample, ext::arc::SpectrumTopicPairParameters> TopicPairApp;

  template<>
  void
  TopicPairApp::Printer::printData(ext::arc::SpectrumSample const& event)
  {
    std::cout << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << ", "
              << Super::m_config.name << std::endl;

    for (int i = 0; i < Super::m_config.indexRanges.length(); ++i) {
      std::cout << Super::m_config.indexRanges[i].name << "["
                << Super::m_config.indexRanges[i].start << ":"
                << Super::m_config.indexRanges[i].end << "]"
                << std::endl;
      if (s_verbose >= 3) {
        //print all spectrums
        for (int j = Super::m_config.indexRanges[i].start, bin = 1; j <= Super::m_config.indexRanges[i].end && j < event.spectrumData.length(); ++j, ++bin) {
           std::cout << " " << bin 
                     << ": "
                     << event.spectrumData[j] 
                     << std::endl;
        }
      }
    }
  }
}


using namespace rapid;
int main(int argc, char *argv[])
{
  ext::arc::SpectrumTopicPairParameters params; 
  TopicPairApp app(argc, argv, params);

  app.run(ext::arc::SPECTRUM_CONFIG_TOPIC, ext::arc::SPECTRUM_SAMPLE_TOPIC);
  return 0;
}
