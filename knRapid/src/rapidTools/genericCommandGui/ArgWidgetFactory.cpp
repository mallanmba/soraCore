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
#include "ArgWidgetFactory.h"

#include <climits>
#include <cfloat>

#include <QComboBox>
#include <QSpinBox>
#include <QLineEdit>
#include <QDoubleSpinBox>

#include "ArgBoolWidget.h"

#ifdef QT_HAS_QVECTOR3D
#  include "ArgVec3dWidget.h"
#endif //QT_HAS_QVECTOR3D

using namespace rapid;

ArgWidgetFactory* ArgWidgetFactory::s_instance = NULL;

/**
 *
 */
ArgWidgetFactory* ArgWidgetFactory::instance() {
  if(!s_instance) {
    s_instance = new ArgWidgetFactory();
  }
  return s_instance;
}

/**
 *
 */
QWidget* ArgWidgetFactory::create(const char* name, rapid::DataType type, QWidget* parent) {
  QWidget* retVal = NULL;
  switch(type) {
    case RAPID_BOOL:     retVal = instance()->createBoolWidget(parent);   break;
    case RAPID_DOUBLE:   retVal = instance()->createDoubleWidget(parent); break;
    case RAPID_FLOAT:    retVal = instance()->createDoubleWidget(parent); break;
    case RAPID_INT:      retVal = instance()->createIntWidget(parent);    break;
    case RAPID_STRING:   retVal = instance()->createStringWidget(parent); break;
    case RAPID_VEC3d:    retVal = instance()->createVec3dWidget(parent);  break;
    case RAPID_MAT33f:   retVal = instance()->createMat33fWidget(parent); break;
    case RAPID_LONGLONG: retVal = instance()->createIntWidget(parent);    break;
  }
  if(retVal) {
    retVal->setAccessibleName(name);
  }
  return retVal;
}

QWidget* ArgWidgetFactory::createBoolWidget(QWidget* parent)
{
  QWidget* retVal = new ArgBoolWidget(parent);
  return retVal;
}

QWidget* ArgWidgetFactory::createDoubleWidget(QWidget* parent)
{
  QDoubleSpinBox* retVal = new QDoubleSpinBox(parent);
  retVal->setMinimum(-DBL_MAX);
  retVal->setMaximum(DBL_MAX);
  retVal->setDecimals(5);
  retVal->setSingleStep(0.1);
  return retVal;
}

QWidget* ArgWidgetFactory::createIntWidget(QWidget* parent)
{
  QSpinBox* retVal = new QSpinBox(parent);
  retVal->setRange(-2000000000, 2000000000);
  return retVal;
}

QWidget* ArgWidgetFactory::createStringWidget(QWidget* parent)
{
  QLineEdit* retVal = new QLineEdit(parent);
  return retVal;
}

#ifdef QT_HAS_QVECTOR3D

QWidget* ArgWidgetFactory::createVec3dWidget(QWidget* parent)
{
  QWidget* retVal = new ArgVec3dWidget(parent);
  return retVal;
}

QWidget* ArgWidgetFactory::createMat33fWidget(QWidget* parent)
{
  QWidget* retVal = new QWidget(parent);
  return retVal;
}

#else 

QWidget* ArgWidgetFactory::createVec3dWidget(QWidget* parent)
{
  QWidget* retVal = new QWidget(parent);
  return retVal;
}

QWidget* ArgWidgetFactory::createMat33fWidget(QWidget* parent)
{
  QWidget* retVal = new QWidget(parent);
  return retVal;
}

#endif // QT_HAS_QVECTOR3D

