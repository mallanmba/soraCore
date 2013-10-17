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
#include "SubsystemWidget.h"

#include <QVBoxLayout>

#include "rapidDds/BaseTypes.h"

#include "CommandEditWidget.h"

using namespace rapid;

/**
 *
 */
SubsystemWidget::SubsystemWidget(QWidget* parent, 
                                 const QString& subsystemName, 
                                 const SubsystemType& subsystemType,
                                 CommandPublisher* cmdPublisher) 
 : QWidget(parent),
   m_name(subsystemName)
{
  QVBoxLayout* layout = new QVBoxLayout(this);
  for(int i = 0; i < subsystemType.commands.length(); i++) {
    CommandEditWidget* cmdEdit = new CommandEditWidget(this, m_name, subsystemType.commands[i]);
    layout->addWidget(cmdEdit);
    QObject::connect(cmdEdit,    SIGNAL(commandReady(QString,QString,QList<ParamValue>)),
                     cmdPublisher, SLOT(sendCommand(QString,QString,QList<ParamValue>)) );
  }
  layout->addStretch(1);
  setLayout(layout);
}

SubsystemWidget::~SubsystemWidget() 
{
}
