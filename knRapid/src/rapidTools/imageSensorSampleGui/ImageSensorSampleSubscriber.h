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
#include <QObject>
#include <QPixmap>

#ifndef Q_MOC_RUN
#include "knDds/DdsTypedConnector.h"
#endif

#include "rapidDds/ImageSensorSample.h"
#include "rapidDds/ImageSensorSampleSupport.h"

class ImageSensorSampleSubscriber;

/**
 *
 */
class ImageSensorSampleCallback
{
public:
  ImageSensorSampleCallback(ImageSensorSampleSubscriber* parent);
  void operator() (rapid::ImageSensorSample const * sample);
protected:
  ImageSensorSampleSubscriber* m_parent;
};

/**
 *
 */
class ImageSensorSampleSubscriber : public QObject
{
  Q_OBJECT
public:
  ImageSensorSampleSubscriber(const char* agentName, const char* topic,
                              const char* profile, const char* library,
                              QObject* parent);
  ~ImageSensorSampleSubscriber();

  void sendImage(qint64 timestamp, const DDS_Octet* buf, int len);

  void resubscribe(const char* agentName, const char* topic,
                   const char* profile, const char* library);

signals:
  void newImageReceived(qint64 timestamp, QImage image);

protected:
  ImageSensorSampleCallback m_callback;
  kn::DdsTypedConnector<rapid::ImageSensorSample, ImageSensorSampleCallback>* m_subscriber;

};
