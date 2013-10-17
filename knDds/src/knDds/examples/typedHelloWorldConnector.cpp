#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedConnector.h"
#include "knDds/DdsEntitiesFactorySvc.h"

#include  "miro/ShutdownHandler.h" // for Ctrl-C handler  and MNC parsing

#include "HelloWorld.h"
#include "HelloWorldSupport.h"

#include <iostream>

using namespace std;

struct HelloWorldPrinter
{
  void operator() (HelloWorld const * event) throw() {
    if (event != NULL)
      HelloWorld::TypeSupport::print_data(event);
    else
      std::cerr << "received event is not of expected type." << std::endl;
  }
};

int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);

  Miro::ShutdownHandler shutdownHander;
  {
    HelloWorldPrinter printer;
    kn::DdsTypedConnector<HelloWorld, HelloWorldPrinter>
      subscriber(&printer, "Example HelloWorld");
    
    /* Main loop */
    cout << "waiting for Ctrl-C" << endl;
    while (!shutdownHander.isShutdown()) {
      ACE_OS::sleep(ACE_Time_Value(0, 100000));
    }
  }
  ddsEntities.fini();
  
  return 0;
}
