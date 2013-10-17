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
#ifndef GenericCommandWidget_h
#define GenericCommandWidget_h

#include "rapidDds/CommandConfig.h"

#include "ui_GenericCommandWidgetUi.h"

#include "CommandPublisher.h"
/**
 *
 */
class GenericCommandWidget : public QWidget
{
  Q_OBJECT
public:
  GenericCommandWidget(QWidget* parent,
                       const char* agentName,
                       const char* cmdTopic,
                       const char* cmdProfile,
                       const char* cmdLibrary);
  ~GenericCommandWidget();

public slots:
  void newCommandConfig(const rapid::CommandConfig* commandConfig);

protected:
  void addSubsystem(const char* ssName, const rapid::SubsystemType& ssType);

protected:
  Ui::GenericCommandWidgetUi ui;
  CommandPublisher* m_cmdPublisher;
};

#endif // GenericCommandWidget_h

