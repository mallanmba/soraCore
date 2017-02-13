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
#ifndef CommandConfigSubscriber_h
#define CommandConfigSubscriber_h

#include <QObject>

#ifndef Q_MOC_RUN
#include "knDds/DdsTypedConnector.h"
#endif

#include "rapidDds/CommandConfig.h"
#include "rapidDds/CommandConfigSupport.h"

/**
 *
 */
class CommandConfigSubscriber : public QObject
{
Q_OBJECT
public:
  CommandConfigSubscriber(const char* agentName,
                          const char* cfgTopic,
                          const char* cfgProfile,
                          const char* cfgLibrary);
  ~CommandConfigSubscriber();
  
  void operator() (const rapid::CommandConfig* cc);
  
  void test();
  
signals:
  void commandConfigUpdated(const rapid::CommandConfig* cc);
  
protected:
  void subsystemTypeTestCase(rapid::SubsystemType& sst, const char* ssName);
  
  const char* m_agentName;
  const char* m_cfgTopic;
  const char* m_cfgProfile;
  const char* m_cfgLibrary;
  
  int m_testNum;
  
  kn::DdsTypedConnector<rapid::CommandConfig, CommandConfigSubscriber>* m_subscriber;
  
};
   
#endif // CommandConfigSubscriber_h


