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
#include "DoubleEdit.h"

#include <cfloat>

#include <QDoubleValidator>

DoubleEdit::DoubleEdit(QWidget* parent) 
  : QLineEdit(parent)
{ 
  QDoubleValidator* validator = new QDoubleValidator(-DBL_MAX, DBL_MAX, 3, this);
  setValidator(validator);
  setMaximumWidth(60);
  setValue(0.0);
}

DoubleEdit::~DoubleEdit() {
}

double DoubleEdit::value() const {
  return atof(qPrintable(text()));
}

void DoubleEdit::setValue(double value) {
  QString txt;
  txt.setNum(value);
  setText(txt);
}
