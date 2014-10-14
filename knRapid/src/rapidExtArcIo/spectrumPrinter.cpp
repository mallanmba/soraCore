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
    if (s_verbose >= 3 && event.values.length() > 0) {
      for (int i = 0; i < event.values.length() && Super::m_config.valueKeys.length(); ++i) {
        std::cout << Super::m_config.valueKeys[i].key << ": ";

        switch (event.values[i]._d) {
          case rapid::RAPID_BOOL:
            std::cout << event.values[i]._u.b;
            break;
          case rapid::RAPID_DOUBLE:
            std::cout << event.values[i]._u.d;
            break;
          case rapid::RAPID_FLOAT:
            std::cout << event.values[i]._u.f;
            break;
          case rapid::RAPID_INT:
            std::cout << event.values[i]._u.i;
            break;
          case rapid::RAPID_LONGLONG:
            std::cout << event.values[i]._u.ll;
            break;
          case rapid::RAPID_STRING:
            std::cout << event.values[i]._u.s;
            break;
          case rapid::RAPID_VEC3d:
            std::cout << "printing vec3d not supported.";
            break;
          case rapid::RAPID_MAT33f:
            std::cout << "printing mat33f not supported.";
            break;
          default:
            break;
        }
        std::cout << std::endl;
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
