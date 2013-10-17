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
#ifndef CommandPublisher_h
#define CommandPublisher_h

#include <QObject>
#include <QList>

#include <knDds/DdsTypedSupplier.h>

#include "rapidDds/Command.h"
#include "rapidDds/CommandSupport.h"

#include "ParamValue.h"
/**
 *
 */
class CommandPublisher : public QObject
{
Q_OBJECT
public:
  CommandPublisher(QObject* parent, 
                   const char* agentName,
                   const char* cmdTopic,
                   const char* cmdProfile,
                   const char* cmdLibrary);
  ~CommandPublisher();

public slots:
  void setSerialId(int);
  void sendCommand(QString subsystemName, QString cmdName, QList<ParamValue> arguments);
  
protected:
  kn::DdsTypedSupplier<rapid::Command>* m_cmdPublisher;
  int               m_serial;
  int               m_cmdCount;
  const char*       m_agentName;
};

#endif // CommandPublisher
