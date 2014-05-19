#include "knDds/DdsSupport.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/DdsTypedSupplier.h"

#include "knShare/Thread.h"
#include "knShare/Chrono.h"

#include "HelloWorld.h"
#include "HelloWorldSupport.h"

MIRO_DDS_TYPE_TRAITS(HelloWorld);

int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);

  kn::DdsTypedSupplier<HelloWorldTraits> publisher("Example HelloWorld");

  HelloWorld * event = HelloWorldTypeSupport::create_data();
  HelloWorldTypeSupport::initialize_data(event);

  for (unsigned int i = 0; i < 10000; ++i) {
    /* Modify the data to be sent here */
    sprintf(event->msg, "Hello World! (%d)", i);
    publisher.sendEvent(*event);
    kn::this_thread::sleep_for(kn::microseconds(10000));
  }

  HelloWorldTypeSupport::finalize_data(event);
  return 0;
}
