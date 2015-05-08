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
#include "GenericCommandWidget.h"

#include <QScrollArea>

#include <rapidDds/CommandConfig.h>
#include <rapidDds/RapidConstants.h>

#include "SubsystemWidget.h"

using namespace rapid;

/**
 *
 */
//====================================================================
GenericCommandWidget::GenericCommandWidget( QWidget* parent,
                                            const char* agentName,
                                            const char* cmdTopic,
                                            const char* cmdProfile,
                                            const char* cmdLibrary)
  :
  QWidget(parent)
{
  ui.setupUi(this);
  ui.agentLabel->setText(agentName);

  QPalette newPalette(palette());
  newPalette.setColor(QPalette::Window, QColor("red"));
  ui.agentLabel->setPalette(newPalette);
  
  m_cmdPublisher = new CommandPublisher(this, agentName, cmdTopic, cmdProfile, cmdLibrary);
}

GenericCommandWidget::~GenericCommandWidget()
{
}

void GenericCommandWidget::newCommandConfig(const CommandConfig* commandConfig)
{
  // remove existing tabs and delete widgets
  QWidget* widget;
  int nWidgets = ui.tabWidget->count();
  for(int i = nWidgets-1; i >= 0; i--) {
    widget = ui.tabWidget->widget(i);
    ui.tabWidget->removeTab(i);
    delete widget;
  }

  int numSubsystems = commandConfig->availableSubsystems.length();
  int numTypes      = commandConfig->availableSubsystemTypes.length();
  for(int i = 0; i < numSubsystems; i++) {
    const Subsystem& ss = commandConfig->availableSubsystems[i];
    QString typeName = ss.subsystemTypeName;
    for(int j = 0; j < numTypes; j++) {
      if(typeName == commandConfig->availableSubsystemTypes[j].name) {
        addSubsystem(ss.name, commandConfig->availableSubsystemTypes[j]);
        break;
      }
    }
  }
}

//void GenericCommandWidget::newAccessControlState(AccessControlStatePtr acs) 
//{
//  std::cerr << "newAccessControlState: " << acs.get() << std::endl;
//}

void GenericCommandWidget::addSubsystem(const char* ssName, const SubsystemType& ssType)
{
  QScrollArea* scrollArea;
  SubsystemWidget* subsystemWidget;
  scrollArea = new QScrollArea(this);
  subsystemWidget = new SubsystemWidget(scrollArea, ssName, ssType, m_cmdPublisher);
  scrollArea->setWidget(subsystemWidget);
  scrollArea->setWidgetResizable(true);
  ui.tabWidget->addTab(scrollArea, ssName);
}

