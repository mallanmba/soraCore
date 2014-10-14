#include "rapidUtil/GenericPrinter_T.h"
#include "rapidUtil/RapidHelper.h"

#include "rapidIo/HeaderIo.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/TextMessage.h"
#include "rapidDds/TextMessageSupport.h"

#include <iostream>

using namespace std;
using namespace rapid;

string profile = "RapidTextMessageProfile";

namespace rapid
{
  const char* MsgLevels[6] = {
    "DEBUG",
    "INFO",
    "ATTENTION",
    "WARN",
    "ERROR",
    "CRITICAL"
  };


  template<>
  void
  GenericPrinter_T<TextMessage>::Printer::operator() (TextMessage const * event) throw()
  {
    assert (event != NULL);

    cout << "#   Header:\n" << event->hdr << endl;
    cout << "#    Level: " << MsgLevels[event->level] << endl;
    cout << "# Category: " << event->category << endl;
    if (s_verbose > 0) {
      cout << "#  Message:\n" << event->message << endl;
      cout << "############\n";
    }
  }
}

int main(int argc, char* argv[])
{
  cout << "Usage: ./textMessagePrinter -MDI _##_ -MRN _robotName_ -s _topicSuffix_" << endl;
  GenericPrinter_T<TextMessage> printer(argc, argv, profile);
  printer.run(TEXTMESSAGE_TOPIC);

  return 0;
}


