#include "HelloWorld.h"
#include "HelloWorldSupport.h"

#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedConsumer.h"
#include "knDds/DdsEntitiesFactorySvc.h"

#include "miro/Robot.h"
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
  Miro::ShutdownHandler shutdownHandler;
  
  Miro::Robot::init(argc, argv);
  Miro::Log::init(argc, argv);
  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);
  {
    kn::DdsTypedConsumer<HelloWorld> subscriber("Example HelloWorld");

    HelloWorld::DataReader& reader = subscriber.dataReader();

    // Create readcondition
    // Note that the readconditions are dependent on both incoming
    // data as well as sample state.  Thus, this method has more
    // overhead than adding a DDS_DATA_AVAILABLE_STATUS statuscondition.
    // We show it here purely for reference
    
    char const query[] = "id > %0";
    char const defaultQueryParameter[] = "100L";
    DDS::StringSeq parameters;
    parameters.maximum(1);
    parameters.length(1);
    parameters[0] = DDS_String_alloc(32);
    strcpy(parameters[0], defaultQueryParameter);

    DDS::QueryCondition* readCondition =
      reader.create_querycondition(DDS_NOT_READ_SAMPLE_STATE, 
				  DDS_ANY_VIEW_STATE,
                                   DDS_ANY_INSTANCE_STATE,
                                   query, parameters);
    if (readCondition == NULL) {
      printf("create_readcondition error\n");
      return -1;
    }

    // Create WaitSet, and attach conditions
    DDSWaitSet* waitset = new DDSWaitSet();

    DDS::ReturnCode_t retcode;
    retcode = waitset->attach_condition(readCondition);
    if (retcode != DDS_RETCODE_OK) {
      cerr << "attach_condition error\n";
      return -1;
    }    

    HelloWorldSeq sampleSeq;
    DDS::SampleInfoSeq infoSeq;
    DDS::ConditionSeq activeConditions; 
    DDS::Duration_t const timeout = {1,500000000};

    while (!shutdownHandler.isShutdown()) {

//       char const queryParameter[] = "1000";
//       strcpy(parameters[0], queryParameter);
//       readCondition->set_query_parameters(parameters);

     // The triggered condition(s) will be placed in activeConditions
      retcode = waitset->wait(activeConditions, timeout);
        
      if (retcode == DDS_RETCODE_TIMEOUT) {
	cout << "wait timed out" << endl;
	continue;
      }
      else if (retcode != DDS_RETCODE_OK) {
	cerr << "wait returned error: " << retcode << endl;
	break;
      }
       
      for (int i = 0; i < activeConditions.length(); ++i) {
	if (activeConditions[i] == readCondition) {
	  // OK -- Got data, let's look at it.  At this point it's the
	  // same as reading data any other way.
	  retcode = reader.take_w_condition(sampleSeq, 
					    infoSeq, 
					    DDS_LENGTH_UNLIMITED,
					    readCondition);
	  if (retcode != DDS_RETCODE_OK) {
	    cerr << "take error " << retcode << endl;
	    return 1;
	  }
	  
	  for (int j = 0; j < sampleSeq.length(); ++j) {
	    if (!infoSeq[j].valid_data) {
	      cout << "   Got metadata\n";
	      continue;
	    }
	    
	    HelloWorld::TypeSupport::print_data(&sampleSeq[j]);
	  }
	  reader.return_loan(sampleSeq, infoSeq);
        }
      }
    }

    /* Delete all entities */
    delete waitset;
    reader.delete_readcondition(readCondition);
  }
  ddsEntities.fini();

  return 0;
}
