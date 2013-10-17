#include "TypedLogDataListener.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <rapidExtDds/RangeScanConfig.h>
#include <rapidExtDds/RangeScanConfigSupport.h>
#include <rapidExtDds/RangeScanSample.h>
#include <rapidExtDds/RangeScanSampleSupport.h>

namespace rapid {

  /**
   * plain text RangeScan data
   */
  class RangeScanText : public TypedLogDataListener<rapid::ext::RangeScanConfig>, 
                        public TypedLogDataListener<rapid::ext::RangeScanSample> 
  {
  public:
    RangeScanText(const QString& filename);
    virtual ~RangeScanText();
    
    virtual void onLogSampleReceived(const rapid::ext::RangeScanConfig& sample,
                                     const char* instanceHandle,
                                     const DdsTime& sendTime,
                                     const DdsTime& recvTime,
                                     const QString& agentName,
                                     const QString& topicName);

    virtual void onLogSampleReceived(const rapid::ext::RangeScanSample& sample,
                                     const char* instanceHandle,
                                     const DdsTime& sendTime,
                                     const DdsTime& recvTime,
                                     const QString& agentName,
                                     const QString& topicName);

  public:
    FILE* m_outfile;
  };

}
