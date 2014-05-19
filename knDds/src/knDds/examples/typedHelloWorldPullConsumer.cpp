#include "HelloWorld.h"
#include "HelloWorldSupport.h"

#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedConsumer.h"
#include "knDds/DdsEntitiesFactorySvc.h"

#include "knShare/Thread.h"
#include "knShare/Chrono.h"

#include "miro/ShutdownHandler.h"

#include <functional>
#include <iostream>

using namespace std;

MIRO_DDS_TYPE_TRAITS(HelloWorld);

struct HelloWorldPrinter : public unary_function<HelloWorld const *, void>,
  public HelloWorldTraits
{
  void operator() (HelloWorld const * event) throw() {
    if (event != NULL)
      TypeSupport::print_data(event);
    else
      std::cerr << "the received event is not of expected type." << std::endl;
  }
};

int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);
  {
    kn::DdsTypedConsumer<HelloWorld> subscriber("Example HelloWorld");

    HelloWorld sample;
    DDS::SampleInfo info;

    Miro::ShutdownHandler shutdownHander;
    while (!shutdownHander.isShutdown()) {
      if (subscriber.dataReader().take_next_sample(sample, info) == DDS_RETCODE_OK) {
        HelloWorld::TypeSupport::print_data(&sample);
      }
      else {
        kn::this_thread::sleep_for(kn::microseconds(30000));
      }
    }
  }
  ddsEntities.fini();

  return 0;
}
