#include "RapidExtArcIoParameters.h"
#include "TrackedObjectIo.h"

#include "rapidUtil/TopicPairApp_T.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidExtArcDds/TrackedObjectConfig.h"
#include "rapidExtArcDds/TrackedObjectConfigSupport.h"
#include "rapidExtArcDds/TrackedObjectSample.h"
#include "rapidExtArcDds/TrackedObjectSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include <iostream>

namespace rapid
{
  typedef TopicPairApp_T<ext::arc::TrackedObjectConfig, ext::arc::TrackedObjectSample, ext::arc::TrackedObjectTopicPairParameters> TopicPairApp;
}


using namespace rapid;
int main(int argc, char *argv[])
{
  ext::arc::TrackedObjectTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  app.run(ext::arc::TRACKEDOBJECT_CONFIG_TOPIC, ext::arc::TRACKEDOBJECT_SAMPLE_TOPIC);
  return 0;
}
