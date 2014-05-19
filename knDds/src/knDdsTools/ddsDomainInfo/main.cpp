#include <cstdio>
#include <iostream>

#include <miro/Robot.h>

#include "knDds/DdsSupport.h"
#include "knDds/KnDdsParameters.h"
#include "knDds/DdsEntitiesFactory.h"


#include "BuiltinHandler.h"

using namespace kn;
using namespace std;

QString publicationString(BuiltinHandler& handler, PublicationBuiltinData& data)
{
  QString retVal;
  QString participant = "UNKNOWN";
  if(handler.hasParticipantData(data.participant_key)) {
    participant = handler.getParticipantData(data.participant_key).participant_name.name;
  }
  retVal.sprintf( "%s -- %s", qPrintable(participant), data.publication_name.name);
  return retVal;
}

QString subscriptionString(BuiltinHandler& handler, SubscriptionBuiltinData& data)
{
  QString retVal;
  QString participant = "UNKNOWN";
  if(handler.hasParticipantData(data.participant_key)) {
    participant = handler.getParticipantData(data.participant_key).participant_name.name;
  }
  retVal.sprintf( "%s -- %s", qPrintable(participant), data.subscription_name.name);
  return retVal;
}

int main(int argc, char** argv)
{
  Miro::Log::init(argc, argv);
  Miro::Robot::init(argc, argv);

  {
    DdsEntitiesFactorySvcParameters* params = DdsEntitiesFactorySvcParameters::instance();
    params->publishers.clear();
    params->defaultLibrary = "RapidQosLibrary";
    params->defaultProfile = "RapidDefaultQos";
    DdsSupport::init(argc, argv);
    params->participants[0].participantName = "ddsDomainInfo";

    DdsEntitiesFactory ddsEntities( *params );

    BuiltinHandler handler;
    cout << "listen for a few seconds..." << endl;
    {
      for(int i = 0; i < 500; i++) {
        handler.processEvents(20);
      }
      // wait longer if not all participants are resolved
      for(int p = 30; p > 0; p--) {
        if(handler.hasUnresolvedParticipants()) {
          cout << p << " waiting for unresolved participant data..." << endl;
          for(int i = 0; i < 50; i++) {
            handler.processEvents(20);
            if(!handler.hasUnresolvedParticipants())
              break;
          }
        }
        else {
          break;
        }
      }
    }

    QStringList topics     = handler.getDiscoveredTopics();
    QStringList partitions = handler.getDiscoveredPartitions();

    cout << "# topics = " << topics.count() << endl;
    cout << "# partitions = " << partitions.count() << endl;
    for(int i = 0; i < partitions.count(); i++) {
      cout << "    " << qPrintable(partitions[i]) << endl;
    }


    for(int n = 0; n < partitions.count(); n++) {
      const QString& partition = partitions[n];
      fprintf(stdout, "%s\n----------------------------------------\n", qPrintable(partition));
      for(int t = 0; t < topics.count(); t++) {
        QList<PublicationBuiltinData*> pubs = handler.getPublications(topics[t], partition);
        QList<SubscriptionBuiltinData*> subs = handler.getSubscriptions(topics[t], partition);
        if(pubs.count() + subs.count() > 0) {
          fprintf(stdout, "  +- %s\n", qPrintable(topics[t]));
          if(pubs.count() > 0) {
            fprintf(stdout, "  |  +- publications\n");
            for(int p = 0; p < pubs.count(); p++) {
              QString pubString = publicationString(handler, *pubs[p]);
              fprintf(stdout, "  |     +- %s\n", qPrintable(pubString));
            }
          }
          if(subs.count() > 0) {
            fprintf(stdout, "  |  +- subscriptions\n");
            for(int s = 0; s < subs.count(); s++) {
              QString subString = subscriptionString(handler, *subs[s]);
              fprintf(stdout, "  |     +- %s\n", qPrintable(subString));
            }
          }
        }
      }
    }
    cout << "done." << endl;
  }
  cout << "exit." << endl;

  return 0;
}




