#include "TypedLogDataListener.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <rapidDds/PositionConfig.h>
#include <rapidDds/PositionConfigSupport.h>
#include <rapidDds/PositionSample.h>
#include <rapidDds/PositionSampleSupport.h>

namespace rapid {

  /**
   * do a (very) rough calculation of distance driven.
   * Only X and Y are used because Z is unreliable due to
   * GPS. A simple threshold is used to try and reject
   * position error accumulation when the robot is stitting
   * still but pose is slowly drifting.
   */
  class PositionSampleDistance : public TypedLogDataListener<rapid::PositionConfig>, 
                                 public TypedLogDataListener<rapid::PositionSample> 
  {
  public:
    PositionSampleDistance();
    virtual ~PositionSampleDistance();
    
    // we don't actually need the config, but it is here as an example 
    virtual void onLogSampleReceived(const rapid::PositionConfig& sample,
                                     const char* instanceHandle,
                                     const DdsTime& sendTime,
                                     const DdsTime& recvTime,
                                     const QString& agentName,
                                     const QString& topicName);

    virtual void onLogSampleReceived(const rapid::PositionSample& sample,
                                     const char* instanceHandle,
                                     const DdsTime& sendTime,
                                     const DdsTime& recvTime,
                                     const QString& agentName,
                                     const QString& topicName);

  public:
    int     count;
    double  distance;
    double  creepThresh;
    double  warpThresh;
    double  last[2];
    double  curr[2];
    double  diff[2];
    
  };

}
