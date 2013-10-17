/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#include "ImageSensorSampleSubscriber.h"

using namespace rapid;

ImageSensorSampleCallback::ImageSensorSampleCallback(ImageSensorSampleSubscriber* parent)
  : m_parent(parent)
{}

/**
 * dds callback
 */
void ImageSensorSampleCallback::operator() (ImageSensorSample const* sample)
{
  if(sample) {
    long long timestamp = sample->hdr.timeStamp;
    DDS_Octet* buf = sample->data.get_contiguous_buffer();
    int        len = sample->data.length();
    m_parent->sendImage(timestamp, buf, len);
  }
}

ImageSensorSampleSubscriber::ImageSensorSampleSubscriber(const char* agentName,
    const char* topic,
    const char* profile,
    const char* library,
    QObject* parent)
  : QObject(parent),
    m_callback(this),
    m_subscriber(NULL)
{
  resubscribe(agentName, topic, profile, library);
}

void ImageSensorSampleSubscriber::resubscribe(const char* agentName,
    const char* topic,
    const char* profile,
    const char* library)
{
  delete m_subscriber;
  m_subscriber = new kn::DdsTypedConnector<ImageSensorSample,ImageSensorSampleCallback>
  (&m_callback,
   topic,
   agentName,
   profile,
   library);
}

ImageSensorSampleSubscriber::~ImageSensorSampleSubscriber()
{
  delete m_subscriber;
}

void ImageSensorSampleSubscriber::sendImage(qint64 timestamp, const DDS_Octet* buf, int len)
{
  QImage image;
  if(image.loadFromData(buf, len)) {
    emit newImageReceived(timestamp, image);
  }
  else {
    fprintf(stderr, "error loading image\n");
  }
}
