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
#ifndef ArgWidgetFactory_h
#define ArgWidgetFactory_h

#include <QWidget>

#include "rapidDds/BaseTypes.h"

class ArgWidgetFactory 
{
public:
  static QWidget* create(const char* name, rapid::DataType type, QWidget* parent);

protected:
  ArgWidgetFactory() {}
  ~ArgWidgetFactory() {}
  
  static ArgWidgetFactory* instance();

  QWidget* createBoolWidget(QWidget* parent);
  QWidget* createDoubleWidget(QWidget* parent);
  QWidget* createIntWidget(QWidget* parent);
  QWidget* createStringWidget(QWidget* parent);
  QWidget* createVec3dWidget(QWidget* parent);
  QWidget* createMat33fWidget(QWidget* parent);

protected:
  static ArgWidgetFactory* s_instance;
  
};


#endif // ArgWidgetFactory_h

