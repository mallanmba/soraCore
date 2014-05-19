#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsTypedConnector.h"
#include "knDds/DdsEntitiesFactorySvc.h"

#include "knShare/Thread.h"
#include "knShare/Chrono.h"

#include "miro/ShutdownHandler.h" // for Ctrl-C handler  and MNC parsing

#include "HelloWorld.h"
#include "HelloWorldSupport.h"

struct HelloWorldPrinter
{
  void operator() (HelloWorld const * event) throw() {
    if (event != NULL)
      HelloWorldTypeSupport::print_data(event);
    else
      std::cerr << "received event is not of expected type." << std::endl;
  }
};


int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  kn::DdsSupport::init(argc, argv);

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);

  Miro::ShutdownHandler shutdownHander;
  {
    kn::DdsTypedSupplier<HelloWorld> publisher("Example HelloWorld");
    HelloWorldPrinter printer;
    kn::DdsTypedConnector<HelloWorld, HelloWorldPrinter>
      subscriber(&printer, "Example HelloWorld");
    
    for (unsigned int i = 0; i < 10000; ++i) {
      /* Modify the data to be sent here */
      sprintf(publisher.event().msg, "Hello World! (%d)", i);
      publisher.sendEvent();
      kn::this_thread::sleep_for(kn::microseconds(10000));
      if (shutdownHander.isShutdown()) {
	break;
      }
    }
  }

  ddsEntities.fini();
  return 0;
}
