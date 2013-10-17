#include <cstdlib> 
#include <iostream>

#include <ndds/ndds_cpp.h>

#include <QFile>
#include <QDataStream>
#include <QDateTime>
#include <QDir>

#include "DdsTime.h"

#include "TopicLogFileReader.h"
#include "TopicLogSet.h"

#include "PositionSampleDistance.h"
#include "RangeScanText.h"

using namespace std;
using namespace rapid;
using namespace rapid::ext;

/**
 *
 */
int main(int argc, const char** argv) {
  if(argc != 2) {
    cerr << "please supply rlog directory" << endl;
    exit(-1);
  }
  
  const char* filename = argv[1];
  QDir rlogDir(filename);
  
  if(!rlogDir.exists()) {
    cerr << "ERROR! Directory does not exist: " << filename << endl;
    exit(-1);
  }
  
  TopicLogSet topicLogSet;
  QString agentName;
  QStringList nameFilters("*.rlog");
  QStringList entries = rlogDir.entryList(nameFilters, QDir::Files, QDir::Name);
  for(int i = 0; i < entries.count(); i++) {
    TopicLogFileReader* reader = new TopicLogFileReader(rlogDir, entries[i]);
    if(reader->isValid()) {
      agentName = reader->agentName();
      topicLogSet.put(agentName, reader->topicName(), reader);
    }
    else {
      cout << entries[i].toStdString() << " is NOT valid" << endl;
      delete reader;
    }
  }
  
  PositionSampleDistance psd;
  topicLogSet.addListener<PositionConfig>(agentName, "rapid_position_config", &psd);
  topicLogSet.addListener<PositionSample>(agentName, "rapid_position_sample", &psd);
  
  RangeScanText rst(agentName+"-RangeScan.txt");
  topicLogSet.addListener<RangeScanConfig>(agentName, "rapid_rangescan_config", &rst);
  topicLogSet.addListener<RangeScanSample>(agentName, "rapid_rangescan_sample", &rst);

  qint64 logStartTime = topicLogSet.logStartTime();
  while(topicLogSet.readData(logStartTime)) {
    logStartTime += 20;
  }
  
  return 0;
}
