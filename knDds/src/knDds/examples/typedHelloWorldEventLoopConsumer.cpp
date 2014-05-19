#include "miro/Robot.h"
#include "miro/ShutdownHandler.h" // for Ctrl-C handler and MNC parsing
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/DdsTypedConsumer.h"
#include "knDds/DdsEventLoop.h"

#include "HelloWorld.h"
#include "HelloWorldSupport.h"

#include "knShare/Thread.h"
#include "knShare/Chrono.h"


#include <functional>
#include <iostream>

using namespace std;

struct HelloWorldPrinter : public unary_function<HelloWorld const *, void>
{
  void operator() (HelloWorld const * event) throw() {
    if (event != NULL)
      HelloWorld::TypeSupport::print_data(event);
    else
      std::cerr << "the received event is not of expected type." << std::endl;
  }

  void printIt(HelloWorld const * event) throw() {
    if (event != NULL)
      HelloWorld::TypeSupport::print_data(event);
    else
      std::cerr << "the received event is not of expected type." << std::endl;
  }
};

int main(int argc, char * argv[])
{
  Miro::Robot::init(argc, argv);

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);

  Miro::ShutdownHandler shutdownHander;
  {
    while (!shutdownHander.isShutdown()) {
      {
        kn::DdsEventLoop eventLoop(argv[0]);
        HelloWorldPrinter printer;
        
        cout << "connect" << endl;
        if (argc == 1) {
          eventLoop.connect<HelloWorld>(&printer, 
                                        "Example HelloWorld", // topic
                                        "",  // default subscriber
                                        "",  // default profile
                                        ""); // default library
        }
        else {
          for (int i = 1; i < argc; ++i) {
            eventLoop.
              connect<HelloWorld, kn::DdsSampleCallbackFunctionPtr<HelloWorld, HelloWorldPrinter, &HelloWorldPrinter::printIt> >(
                      &printer, 
                      argv[i], // topic
                      "", // default subscriber
                      "", // default profile
                      "");// default library
          }
        }
        
        for (int i = 0; i < 10 && !shutdownHander.isShutdown(); ++i) {
          cout << "." << flush;
          eventLoop.processEvents(kn::seconds(1));
        }
      }

      cout << "pause" << endl;
      kn::this_thread::sleep_for(kn::seconds(10));
    }
  }
  ddsEntities.fini();

  return 0;
}
