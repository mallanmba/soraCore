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
#include "CommandEditWidget.h"

#include <QLabel>
#include <QGridLayout>

#include "rapidDds/BaseTypes.h"

#include "ArgWidgetFactory.h"

#include <iostream>

using namespace rapid;
using namespace std;

/**
 *
 */
CommandEditWidget::CommandEditWidget(QWidget* parent, const QString& subsystemName, const rapid::CommandDef& cmdDef) 
 : QFrame(parent),
   m_subsystemName(subsystemName),
   m_commandName(cmdDef.name)
{
  setFrameStyle(QFrame::Panel | QFrame::Raised);
  QGridLayout* gridLayout = new QGridLayout(this);
  QLabel* label;
  label = new QLabel("<b>"+QString(cmdDef.name)+"<b>", this);
  label->setMinimumWidth(70);
  gridLayout->addWidget(label, 0, 0);
  
  label = new QLabel("", this);
  gridLayout->addWidget(label, 1, 0);
  
  int col = 1;
  const int argc = cmdDef.parameters.length();
  QWidget* widget;
  ParamWidget param;
  for(int i = 0; i < argc; i++) {
    const KeyTypePair& kt = cmdDef.parameters[i];
    label = new QLabel(this);
    label->setText(QString(kt.key));
    label->setAlignment(Qt::AlignCenter);
    gridLayout->addWidget(label, 0, col); 
    widget = ArgWidgetFactory::create(kt.key, kt.type, this);
    gridLayout->addWidget(widget, 1, col);
    param.name   = kt.key;
    param.type   = kt.type;
    param.widget = widget;
    m_params.append(param);
    col++;
  }
  
  gridLayout->addItem(new QSpacerItem(0,0), 0, col++, 1, 2);
  col++;
  
  label = new QLabel("", this);
  gridLayout->addWidget(label, 0, col);
  m_sendBut = new QToolButton(this);
  m_sendBut->setText("Send Command");
  gridLayout->addWidget(m_sendBut, 1, col);
  
  QObject::connect(m_sendBut, SIGNAL(clicked()), SLOT(sendCommandPressed()) );
}

CommandEditWidget::~CommandEditWidget() 
{
}

void CommandEditWidget::sendCommandPressed() 
{
  QList<ParamValue> args;
  ParamValue value;

  for(int i = 0; i < m_params.count(); i++) {
    value.name  = m_params[i].name;
    value.type  = m_params[i].type;
    if (value.type != rapid::RAPID_STRING) {
      value.value = m_params[i].widget->property("value");
    }
    else {
      value.value = m_params[i].widget->property("text");
    }
    args.append(value);
  }
  emit commandReady(m_subsystemName, m_commandName, args);
}



