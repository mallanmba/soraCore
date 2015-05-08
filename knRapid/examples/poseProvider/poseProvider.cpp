#include <miro/Log.h>
#include <miro/Robot.h>

#include <knMath/ATrans.h>

#include "rapidIo/PositionProvider.h"
#include "rapidIo/RapidIoParameters.h"
#include "knDds/DdsEntitiesFactory.h"
#include "knDds/KnDdsParameters.h"
#include "knDds/DdsSupport.h"
#include "knShare/Thread.h"
#include "knShare/Chrono.h"


using namespace std;
using namespace kn;
using namespace rapid;


/**
 * Setup parameters for things like the DomainParticipant (domainId,
 * qos, peers, etc.) and default Publisher(s) and Subscriber(s) 
 * from the command line.
 */
DdsEntitiesFactorySvcParameters& setupEntitiesParameters(int argc, char** argv)
{
  // grab the parameters for the DdsEntitiesFactory 
  // so we can customize the values
  DdsEntitiesFactorySvcParameters* params =
	  DdsEntitiesFactorySvcParameters::instance();

  // hard coded override of parameter defaults. Anything we set here
  // can be overridden by command line switches
  params->defaultLibrary = "RapidQosLibrary";
  params->defaultProfile = "RapidDefaultQos";
  params->subscribers.clear(); // we don't need a subscriber for this example
  // By default, the DdsEntitiesFactory will create a publisher and subscriber 
  // with the robot name in the repository. If we don't want a subscriber to be 
  // created, we clear the name before initializing the entities factory

  // parse command line to override defaults, 
  // such as domainId, discovery peers file, etc
  DdsSupport::init ( argc, argv );

  // if we want to really hard code something (i.e. not allow a command line
  // override), do so after the call to DdsSupport::init
  // by default, the participantName will be set to the application name (argv[0])
  params->participants[0].participantName = "ExamplePoseProvider";
  
  return *params;
}

void printHelp() {
  cout << "\nPlease specify RAPID Agent name (i.e. -MRN MyRobot)\n";
  cout << "-----------------------------------------------------\n";
  cout << DdsSupport::initHelpString();
}

/**
 * 
 */
int main ( int argc, char** argv )
{
  if(argc < 2) {
    printHelp();
    exit(0);
  }
  
  // initialize logging
  Miro::Log::init ( argc, argv );
  // parse command line to look for robot name
  Miro::Robot::init ( argc, argv );

  kn::DdsEntitiesFactorySvcParameters& params = setupEntitiesParameters(argc, argv);
  // Pass our parameters to the DdsEntitiesFactory, which will initialize the 
  // DdsEntityRepository with our DomainParticipant, Publisher(s) and Subscriber(s).
  // When the DdsEntitiesFactory goes out of scope, these entities will be destroyed. 
  DdsEntitiesFactory ddsEntities( params );
  // note that the DdsEntitiesFactory statically initializes the 
  // DdsEntityRepository upon construction, so it is more like a builder
  
  //---------------------------------------------------
  // the topicPairParameters holds config information - 
  // the Provider will publish the Config on construction
  // if useConfigTopic is true
  PositionTopicPairParameters topicParams;
  topicParams.configProfile          = "RapidPositionConfigProfile";
  topicParams.dataProfile            = "RapidPositionSampleProfile";
  topicParams.config.poseEncoding    = RAPID_ROT_M33;
  topicParams.config.referenceFrame  = "RAPID_SITE_FRAME";
  topicParams.config.controlledFrame = "RAPID_ROVER_NAME";
  topicParams.useConfigTopic = true;
  
  PositionProvider provider ( topicParams, argv[0] );
  
  ACE_Time_Value timestamp;
  int            status = 0;

  double xyz[3];
  double theta;
  for ( int i = 0; i < 100; i++ ) {
    timestamp = ACE_OS::gettimeofday();
    
    xyz[0] = i*0.1;
    xyz[1] = i*0.1;
    xyz[2] = 0;
    theta  = i*0.01;
    ATrans3 xfm ( Eigen::Translation3d (xyz[0], xyz[1], xyz[2]) *
		   Eigen::AngleAxisd(theta, Eigen::Vector3d::UnitZ()));

    provider.publish ( timestamp, status, xfm );
    
    cout << "sent position: " << xfm << endl;

    //kn::this_thread::sleep_for(kn::microseconds(100000));
    kn::this_thread::sleep_for(kn::milliseconds(50));
  }
}
