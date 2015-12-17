#include "rapidUtil/GenericPrinter_T.h"

#include "rapidExtArcDds/NrcMapLaneSetSample.h"
#include "rapidExtArcDds/NrcMapLaneSetSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include <iostream>

using namespace rapid;
int main(int argc, char *argv[])
{
  GenericPrinter_T<rapid::ext::arc::NrcMapLaneSetSample> printer(argc, argv,
                                                                 "RapidSampleQos");
  printer.run(ext::arc::NRCMAPLANESET_SAMPLE_TOPIC);
  return 0;
}
