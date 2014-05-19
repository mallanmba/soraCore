#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsEntitiesFactorySvc.h"

#include "knShare/Thread.h"
#include "knShare/Chrono.h"

#include "miro/Robot.h"
#include "miro/ShutdownHandler.h" // for Ctrl-C handler  and MNC parsing

#include "HelloWorld.h"
#include "HelloWorldSupport.h"

char const * topic = "Example HelloWorld";

int main(int argc, char * argv[])
{
  Miro::Robot::init(argc, argv);

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);

  int bufferSize = 10;
  if (argc >= 2)
    bufferSize = atoi(argv[1]);
  if (argc >= 3)
    topic = argv[2];

  Miro::ShutdownHandler shutdownHandler;
  {
    kn::DdsTypedSupplier<HelloWorld> publisher(topic);
    
    for (unsigned int i = 0; i < 10000; ++i) {
      /* Modify the data to be sent here */
      sprintf(publisher.event().msg, "Hello World! (%d)", i);
      publisher.event().id = i;
      publisher.event().buffer.maximum(bufferSize);
      publisher.event().buffer.length(bufferSize);
      publisher.sendEvent();
      kn::this_thread::sleep_for(kn::microseconds(10000));
      if (shutdownHandler.isShutdown()) {
	break;
      }
    }
  }

  ddsEntities.fini();
  return 0;
}
