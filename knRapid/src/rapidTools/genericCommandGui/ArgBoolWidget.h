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
#ifndef ArgBoolWidget_h
#define ArgBoolWidget_h

#include <QFrame>
#include <QToolButton>

#include "rapidDds/CommandConfig.h"

/**
 *
 */
class ArgBoolWidget : public QToolButton
{
Q_OBJECT
Q_PROPERTY(bool value READ isChecked WRITE setChecked)
public:
  ArgBoolWidget(QWidget* parent);
  ~ArgBoolWidget();
  
public slots:
  void updateButtonText(bool state);
};



#endif // ArgBoolWidget_h
