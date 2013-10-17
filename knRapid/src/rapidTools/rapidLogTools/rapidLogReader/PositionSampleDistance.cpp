#include "PositionSampleDistance.h"

#include <cmath> 
#include <iostream> 

using namespace std;
using namespace rapid;

PositionSampleDistance::PositionSampleDistance() 
  :
  count(0),
  distance(0) 
{
  creepThresh = 0.01;
  warpThresh =  1.0; 
}

PositionSampleDistance::~PositionSampleDistance() {
  cout << "PositionSample distance  = " << distance << endl;
}
    
void PositionSampleDistance::onLogSampleReceived(const PositionConfig& sample,
                                                 const char* instanceHandle,
                                                 const DdsTime& sendTime,
                                                 const DdsTime& recvTime,
                                                 const QString& agentName,
                                                 const QString& topicName) 
{
  //cout << "PositionConfig" << endl;
  //PositionConfigTypeSupport::print_data(&sample);
}

void PositionSampleDistance::onLogSampleReceived(const PositionSample& sample,
                                                 const char* instanceHandle,
                                                 const DdsTime& sendTime,
                                                 const DdsTime& recvTime,
                                                 const QString& agentName,
                                                 const QString& topicName)
{
  //cout << "PositionSample " << count << endl;

  ++count;
  curr[0] = sample.pose.xyz[0];
  curr[1] = sample.pose.xyz[1];
  if (count > 1) {
    bool reject = true;
    diff[0] = curr[0] - last[0];
    diff[1] = curr[1] - last[1];
    double d = sqrt(diff[0] * diff[0] + diff[1] * diff[1]);
    if (d > creepThresh && d < warpThresh) {
      reject = false;
    }
    if (!reject) {
      distance += d;
    }
  }
  last[0] = curr[0];
  last[1] = curr[1];
}
                             

