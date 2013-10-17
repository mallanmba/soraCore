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
#ifndef DoubleEdit_h
#define DoubleEdit_h

#include <QLineEdit>

class DoubleEdit : public QLineEdit
{
Q_PROPERTY(double value READ value() WRITE setValue)
Q_OBJECT
  public:
    DoubleEdit(QWidget* parent);
    ~DoubleEdit();
  
  double value() const;
  void setValue(double value);
  
    
};

#endif // DoubleEdit_h
