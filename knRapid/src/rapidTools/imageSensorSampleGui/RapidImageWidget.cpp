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
#include "RapidImageWidget.h"
#include "CameraIconGrey256.xpm"

#include <QDateTime>

#include <rapidDds/ImageSensorSample.h>
#include <rapidDds/ImageSensorSampleSupport.h>
#include <rapidDds/RapidConstants.h>

/**
 *
 */
//====================================================================
RapidImageWidget::RapidImageWidget(const char* agentName,
                                   const char* topic,
                                   const char* profile,
                                   const char* library,
                                   QWidget* parent)
  :
  QWidget(parent)
{
  ui.setupUi(this);

  QImage iconImage(CameraIconGrey256_xpm);
  m_count = -1; 
  setImage(0, iconImage);

  ui.agentLabel->setText(agentName);
  ui.topicLabel->setText(topic);

  m_subscriber = new ImageSensorSampleSubscriber(agentName,
      topic,
      profile,
      library,
      this);

  QObject::connect(m_subscriber, SIGNAL(newImageReceived(qint64, QImage)),
                   this, SLOT(setImage(qint64, QImage)) );
}

RapidImageWidget::~RapidImageWidget()
{
}

/**
 * receive a shallow copy of QImage and show it.
 * @param timestamp RAPID timestamp in microseconds since UNIX epoch
 */
void RapidImageWidget::setImage(qint64 timestamp, QImage image)
{
  QString countString;
  countString.sprintf("[%d]", ++m_count);
  
  const QPixmap& pixmap = QPixmap::fromImage(image);
  ui.imageLabel->setPixmap(pixmap);
  ui.imageLabel->resize(pixmap.width(), pixmap.height());

  //m_time = QDateTime::currentDateTime();

  // time from timestamp
  m_time.setTime_t(0);
  qint64 millisecs = timestamp/1000;
  m_time = m_time.addMSecs(millisecs);

  if(millisecs) {
    ui.timeLabel->setText(m_time.toString("M/d/yyyy h:mm:ss.zzz AP "+countString));
  }
  else {
    ui.timeLabel->setText(countString);
  }

  QString sizeString;
  sizeString.sprintf("%dx%d", image.width(), image.height());
  ui.sizeLabel->setText(sizeString);
}
