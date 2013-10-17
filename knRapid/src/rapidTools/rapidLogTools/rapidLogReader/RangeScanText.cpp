#include "RangeScanText.h"

#include <cmath> 
#include <iostream>

#include <QString> 

using namespace std;
using namespace rapid;
using namespace rapid::ext;

static const char* RangeScanDirectionString[] = { 
    "SCAN_HORIZONTAL",
    "SCAN_VERTICAL"
};

RangeScanText::RangeScanText(const QString& filename) 
{
  m_outfile = fopen(filename.toAscii(), "w");
}

RangeScanText::~RangeScanText() {
  if(m_outfile) {
    fclose(m_outfile);
  }
}
    
void RangeScanText::onLogSampleReceived( const RangeScanConfig& sample,
                                         const char* instanceHandle,
                                         const DdsTime& sendTime,
                                         const DdsTime& recvTime,
                                         const QString& agentName,
                                         const QString& topicName) 
{
  FILE* outfile = m_outfile;
  fprintf(outfile, "_config : { \n");
  fprintf(outfile, "  sendTime : %d.%09d\n", sendTime.sec, sendTime.nanosec);
  fprintf(outfile, "  recvTime : %d.%09d\n", recvTime.sec, recvTime.nanosec);
  fprintf(outfile, "  RangeScanConfig : { \n");
  fprintf(outfile, "    referenceFrame     : %s \n", sample.referenceFrame);
  fprintf(outfile, "    scanLengths        : [");
  for(int i = 0; i < sample.scanLengths.length(); i++) 
    fprintf(outfile, " %d", sample.scanLengths[i]);
  fprintf(outfile, " ]\n");
  fprintf(outfile, "    scanDirection      : %s\n", RangeScanDirectionString[sample.scanDirection]);
  fprintf(outfile, "    scanAzimuth        : [");
  for(int i = 0; i < sample.scanAzimuth.length(); i++) 
    fprintf(outfile, " %d", sample.scanAzimuth[i]);
  fprintf(outfile, " ]\n");
  fprintf(outfile, "    scanAzimuthScale   : %f\n", sample.scanAzimuthScale);
  fprintf(outfile, "    scanElevation      : [");
   for(int i = 0; i < sample.scanElevation.length(); i++) 
    fprintf(outfile, " %d", sample.scanElevation[i]);
  fprintf(outfile, " ]\n");
  fprintf(outfile, "    scanElevationScale : %f\n", sample.scanElevationScale);
  fprintf(outfile, "    rangeScale         : %f\n", sample.rangeScale);
  fprintf(outfile, "    intensityScale     : %f\n", sample.intensityScale);
  fprintf(outfile, "  }\n");
  fprintf(outfile, "}\n");
}

void RangeScanText::onLogSampleReceived( const RangeScanSample& sample,
                                         const char* instanceHandle,
                                         const DdsTime& sendTime,
                                         const DdsTime& recvTime,
                                         const QString& agentName,
                                         const QString& topicName)
{
  FILE* outfile = m_outfile;
  fprintf(outfile, "_sample : { \n");
  fprintf(outfile, "  sendTime : %d.%09d\n", sendTime.sec, sendTime.nanosec);
  fprintf(outfile, "  recvTime : %d.%09d\n", recvTime.sec, recvTime.nanosec);
  fprintf(outfile, "  RangeScanSample : { \n");
  fprintf(outfile, "    scanAzimuth   : [");
  for(int i = 0; i < sample.scanAzimuth.length(); i++) 
    fprintf(outfile, " %d", sample.scanAzimuth[i]);
  fprintf(outfile, " ]\n");
  fprintf(outfile, "    scanElevation : [");
  for(int i = 0; i < sample.scanElevation.length(); i++) 
    fprintf(outfile, " %d", sample.scanElevation[i]);
  fprintf(outfile, " ]\n");
  fprintf(outfile, "    rangeData     : [");
  for(int i = 0; i < sample.rangeData.length(); i++) 
    fprintf(outfile, " %x", sample.rangeData[i]);
  fprintf(outfile, " ]\n");
  fprintf(outfile, "    intensityData : [");
  for(int i = 0; i < sample.intensityData.length(); i++) 
    fprintf(outfile, " %x", sample.intensityData[i]);
  fprintf(outfile, " ]\n");
  fprintf(outfile, "  }\n");
  fprintf(outfile, "}\n");
}
                             

