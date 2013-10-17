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
#include "ArgVec3dWidget.h"

#include <stdio.h>

#include <QHBoxLayout>

ArgVec3dWidget::ArgVec3dWidget(QWidget* parent)
  :
  QFrame(parent)
{
  QHBoxLayout* layout = new QHBoxLayout(this);
  layout->setContentsMargins(2,2,2,2);
  layout->setSpacing(0);
  
  for(int i = 0; i < 3; i++) {
    m_xyzEdit[i] = new DoubleEdit(this);
    layout->addWidget(m_xyzEdit[i]);
    QObject::connect(m_xyzEdit[i], SIGNAL(editingFinished()), SLOT(updateValue()));
  }
  this->setFrameStyle(QFrame::Panel | QFrame::Sunken);
  this->setLayout(layout);
}

ArgVec3dWidget::~ArgVec3dWidget()
{
}

const QVector3D& ArgVec3dWidget::value() const 
{
  return m_value;
}

void ArgVec3dWidget::setValue(const QVector3D& value) 
{
  m_value = value;
  m_xyzEdit[0]->setValue(m_value.x());
  m_xyzEdit[1]->setValue(m_value.y());
  m_xyzEdit[2]->setValue(m_value.z());
  updateDisplay();
}

void ArgVec3dWidget::setValue(double x, double y, double z) {
  m_value.setX(x);
  m_value.setY(y);
  m_value.setZ(z);
  updateDisplay();
}

void ArgVec3dWidget::updateDisplay() {
  m_xyzEdit[0]->setValue(m_value.x());
  m_xyzEdit[1]->setValue(m_value.y());
  m_xyzEdit[2]->setValue(m_value.z());
}

void ArgVec3dWidget::updateValue() {
  m_value.setX(m_xyzEdit[0]->value());
  m_value.setY(m_xyzEdit[1]->value());
  m_value.setZ(m_xyzEdit[2]->value());
  updateDisplay();
}
