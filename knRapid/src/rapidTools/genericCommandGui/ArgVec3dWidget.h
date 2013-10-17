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
#ifndef Arg3dWidget_h
#define Arg3dWidget_h

#include <QFrame>
#include <QVector3D>
#include "DoubleEdit.h"

/**
 *
 */
class ArgVec3dWidget : public QFrame
{
Q_PROPERTY(QVector3D value READ value() WRITE setValue)
Q_OBJECT
public:
  ArgVec3dWidget(QWidget* parent);
  ~ArgVec3dWidget();

  const QVector3D& value() const;
  void setValue(const QVector3D& value);
  void setValue(double x, double y, double z);

protected slots:
  void updateValue();
  void updateDisplay();
  
protected:
  QVector3D       m_value;
  DoubleEdit*     m_xyzEdit[3];


};

#endif // Arg3dWidget_h





