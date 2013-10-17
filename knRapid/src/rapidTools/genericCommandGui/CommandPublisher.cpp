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
#include "CommandPublisher.h"
#include "CommandGuiParameters.h"

#include "miro/TimeHelper.h"

#include <ace/Time_Value.h>
#include <ace/OS_NS_sys_time.h>

#include <cstring>

#include "knRapidConfig.h"

using namespace rapid;
using namespace Miro;
using namespace std;
using namespace kn;


namespace
{
  ACE_INT64 usecs(ACE_Time_Value const& timeStamp)
  {
    ACE_UINT64 uSec;
    timeStamp.to_usec(uSec);
    return ACE_INT64(uSec);
  }
}

/**
 *
 */
CommandPublisher::CommandPublisher(QObject* parent,
                                   const char* agentName,
                                   const char* cmdTopic,
                                   const char* cmdProfile,
                                   const char* cmdLibrary)
                                   :
                                   QObject(parent),
                                   m_serial(0),
                                   m_cmdCount(0),
                                   m_agentName(agentName)
{
  m_cmdPublisher = new DdsTypedSupplier<Command>(cmdTopic, agentName, cmdProfile, cmdLibrary);

}

CommandPublisher::~CommandPublisher()
{
  delete m_cmdPublisher;
}

void CommandPublisher::setSerialId(int serial)
{
  m_serial = serial;
}


#ifndef QT_HAS_QVECTOR3D
void setVec3d(ParameterUnion& paramUnion, const ParamValue& paramValue) { /*nothing*/ }

#else

#include <QVector3D>
void setVec3d(ParameterUnion& paramUnion, const ParamValue& paramValue) {
  QVector3D qv3d = paramValue.value.value<QVector3D>();
  paramUnion._u.vec3d[0] = qv3d.x();
  paramUnion._u.vec3d[1] = qv3d.y();
  paramUnion._u.vec3d[2] = qv3d.z();
}
#endif //QT_HAS_QVECTOR3D

QString vec3dString(const ParameterUnion& paramUnion) {
  char buf[32];
  const double* xyz = paramUnion._u.vec3d;
  snprintf(buf, 32, "[%.3f,%.3f,%.3f]", xyz[0], xyz[1], xyz[2]);
  return QString(buf);
}

/**
 *
 */
void CommandPublisher::sendCommand(QString subsystemName, QString cmdName, QList<ParamValue> arguments)
{
  m_cmdCount++;
  const char* cmdSrc    = CommandGuiParameters::instance()->srcName.c_str();
  rapid::Command& cmd   = m_cmdPublisher->event();

  //QList<ParamValue> arguments;
  QString cmdString = subsystemName + "::" + cmdName + "( ";
  //-- set arguments
  //-- XXX CHECK WITH HANS ABOUT MEMORY MANAGEMENT XXX
  int argc = arguments.count();
  cmd.arguments.length(argc);
  for(int i = 0; i < argc; i++) {
    cmd.arguments[i]._d = arguments[i].type;
    switch(arguments[i].type) {
      case RAPID_BOOL  : cmd.arguments[i]._u.b = arguments[i].value.toBool();   break;
      case RAPID_DOUBLE: cmd.arguments[i]._u.d = arguments[i].value.toDouble(); break;
      case RAPID_FLOAT : cmd.arguments[i]._u.f = (float)arguments[i].value.toDouble();  break;
      case RAPID_INT   : cmd.arguments[i]._u.i = arguments[i].value.toInt();    break;
      case RAPID_STRING:
        cmd.arguments[i]._u.s = DDS_String_dup(qPrintable(arguments[i].value.toString()));
        break;
      case RAPID_VEC3d :
        setVec3d(cmd.arguments[i], arguments[i]);
        break;
      case RAPID_MAT33f:
        // TODO
        break;
      case RAPID_LONGLONG: cmd.arguments[i]._u.ll = arguments[i].value.toInt(); break;
        break;
    }
    if(i > 1) cmdString += ", ";
    if(arguments[i].type == RAPID_VEC3d) {
      cmdString += vec3dString(cmd.arguments[i]);
    }
    else {
      cmdString += arguments[i].value.toString();
    }
  }
  cmdString += " )";

  strncpy(cmd.cmdSrc, cmdSrc, 32);
  cmd.cmdSrc[31]        = '\0';
  strncpy(cmd.subsysName, qPrintable(subsystemName), 32);
  cmd.subsysName[31]    = '\0';
  strncpy(cmd.cmdName, qPrintable(cmdName), 32);
  cmd.cmdName[31]       = '\0';
  cmd.cmdAction         = QUEUE_BYPASS;

  // populate header
  strncpy(cmd.hdr.srcName, cmdSrc, 32);
  cmd.hdr.srcName[31]   = '\0';
  strncpy(cmd.hdr.assetName, m_agentName, 32);
  cmd.hdr.assetName[31] = '\0';
  cmd.hdr.statusCode    = 0;
  cmd.hdr.serial        = m_serial;
  cmd.hdr.timeStamp     = usecs(ACE_OS::gettimeofday());

  stringstream s;
  s << m_cmdCount << cmdSrc << ACE_OS::gettimeofday().sec();
  strncpy(cmd.cmdId, s.str().c_str(), 64);
  cmd.cmdId[63] = '\0';

  m_cmdPublisher->sendEvent();
  qDebug(qPrintable("Sent "+cmdString));
}




