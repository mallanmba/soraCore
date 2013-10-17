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
#include "CommandConfigSubscriber.h"

#include <iostream>

#include <QDateTime>

using namespace rapid;
using namespace kn;
using namespace Miro;
using namespace std;

/**
 *
 */
CommandConfigSubscriber::CommandConfigSubscriber(const char* agentName,
                                                 const char* cfgTopic,
                                                 const char* cfgProfile,
                                                 const char* cfgLibrary )
  :
  m_agentName(agentName),
  m_cfgTopic(cfgTopic),
  m_cfgProfile(cfgProfile),
  m_cfgLibrary(cfgLibrary),
  m_testNum(0)
{
  m_subscriber = new DdsTypedConnector<CommandConfig,CommandConfigSubscriber>
                      (this,
                       cfgTopic,
                       agentName,
                       cfgProfile,
                       cfgLibrary);
  
}


CommandConfigSubscriber::~CommandConfigSubscriber() 
{
  delete m_subscriber;
}

/**
 * dds callback
 */
void CommandConfigSubscriber::operator() (const CommandConfig* cc)
{
  if(cc) {
    emit commandConfigUpdated(cc);
  }
}

void CommandConfigSubscriber::test() {
    CommandConfig cc;
    
    cc.hdr.srcName    = DDS_String_dup(m_agentName);
    cc.hdr.assetName  = DDS_String_dup(m_agentName);
    cc.hdr.timeStamp  = m_testNum++;
    cc.hdr.statusCode = 0;
    cc.hdr.serial     = m_testNum++;   

    cc.availableSubsystemTypes.ensure_length(4, 4);
    cc.availableSubsystems.ensure_length(4, 4);
    
    const char* ssTypeName = "SubsystemType";
    cc.availableSubsystemTypes.length(1);
    subsystemTypeTestCase(cc.availableSubsystemTypes[0], ssTypeName);

    cc.availableSubsystems.length(3);
    cc.availableSubsystems[0].name = DDS_String_dup("Foo");
    cc.availableSubsystems[0].subsystemTypeName = DDS_String_dup(ssTypeName);
    cc.availableSubsystems[1].name = DDS_String_dup("Bar");
    cc.availableSubsystems[1].subsystemTypeName = DDS_String_dup(ssTypeName);
    cc.availableSubsystems[2].name = DDS_String_dup("Bang");
    cc.availableSubsystems[2].subsystemTypeName = DDS_String_dup(ssTypeName);
    
    emit commandConfigUpdated(&cc);
}

void CommandConfigSubscriber::subsystemTypeTestCase(SubsystemType& ssType, const char* ssTypeName)
{
  ssType.commands.ensure_length(16, 16);
  CommandDef cmdDef;
  cmdDef.parameters.ensure_length(16, 16);
  KeyTypePair ktp;

  ssType.name = DDS_String_dup(ssTypeName);
  ssType.commands.length(2);

  cmdDef.name = DDS_String_dup("foo");
  cmdDef.parameters.length(4);

  ktp.key  = DDS_String_dup("first");
  ktp.type = RAPID_STRING;
  cmdDef.parameters[0] = ktp;

  ktp.key  = DDS_String_dup("second");
  ktp.type = RAPID_INT;
  cmdDef.parameters[1] = ktp;

  ktp.key  = DDS_String_dup("third");
  ktp.type = RAPID_DOUBLE;
  cmdDef.parameters[2] = ktp;

  ktp.key  = DDS_String_dup("fourth");
  ktp.type = RAPID_FLOAT;
  cmdDef.parameters[3] = ktp;

  ssType.commands[0] = cmdDef;

  cmdDef.name = DDS_String_dup("method2");
  cmdDef.parameters.length(2);

  ktp.key  = DDS_String_dup("firstArg");
  ktp.type = RAPID_BOOL;
  cmdDef.parameters[0] = ktp;

  ktp.key  = DDS_String_dup("thisArgumentNameIsLong");
  ktp.type = RAPID_DOUBLE;
  cmdDef.parameters[1] = ktp;

  ssType.commands[1] = cmdDef;
}



