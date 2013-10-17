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
#include <cstdlib> 
#include <QFile>
#include <QDataStream>
#include <QDateTime>
#include <iostream>

using namespace std;

inline bool isSamp(const char* preamble) {
  return strncmp(preamble, "samp", 4) == 0;
}
inline bool isDead(const char* preamble) {
  return strncmp(preamble, "dead", 4) == 0;
}
inline bool isRapidLog(const char* protocol) {
  return strncmp(protocol, "rapidLog", 8) == 0;
}

/**
 * simple example of counting the number of samples in a RAPID log
 * (skipping CDR data)
 */
int main(int argc, const char** argv) {
  int minVersion = 2;
  
  if(argc != 2) {
    cerr << "please supply rlog filename" << endl;
    exit(-1);
  }
  
  const char* filename = argv[1];
  QFile file(filename);
  
  if(file.open(QIODevice::ReadOnly) == FALSE) {
    cerr << "ERROR! Could not open file: " << filename << endl;
    exit(-1);
  }

  QDataStream dataStream(&file);
  dataStream.setByteOrder(QDataStream::BigEndian);

  char   protocol[9];
  qint16 version;
  qint64 startTime;
  qint8  isBigEndian;
  qint8  wasReliable;
  qint8  wasDurable;
  qint16 typeNameLen;
  char   typeNameBuffer[512];

  dataStream.readRawData(protocol, 8);
  if(!isRapidLog(protocol)) {
    cerr << "ERROR! " << filename << " is not a rapidLog file\n";
    exit(-1);
  }
  dataStream >> version;
  dataStream >> startTime  ;
  dataStream >> isBigEndian;
  dataStream >> wasReliable;
  dataStream >> wasDurable ;
  dataStream >> typeNameLen;
  if(typeNameLen > 511) {
    cerr << "That's a mighty long type name!\n";
    exit(-1);
  }
  dataStream.readRawData(typeNameBuffer, typeNameLen);
  typeNameBuffer[typeNameLen] = 0;

  QDateTime dt;
  //dt.setMSecsSinceEpoch(startTime); // not until qt4.7
  dt.setTime_t(startTime/1000);
  protocol[8] = 0;

  cout << "-------------------------------------------------" << endl;
  cout << " protocol = " << protocol << endl;
  cout << "  version = " << version << endl;
  cout << "startTime = " << startTime << " (" << dt.toString().toStdString() << ")\n";
  cout << " typeName = " << typeNameBuffer << endl;
  cout << " CDR is big endian: " << (bool)isBigEndian << endl;
  cout << "topic was reliable: " << (bool)wasReliable << endl;
  cout << " topic was durable: " << (bool)wasDurable  << endl;
  
  if(version < minVersion) {
    cout << "Sorry - this file is version " << minVersion << ", but I only understand version " << minVersion << " or greater.";
    exit(-2);
  }

  char   preambleId[5];
  char   instanceHandle[16];
  qint32 chunkSize = -1;
  qint32 sendSec;
  qint32 sendNanoSec;
  qint32 recvSec;
  qint32 recvNanoSec;
  qint32 cdrSize;

  int numSamples = 0;

  while(dataStream.status() == QDataStream::Ok) {
    dataStream.readRawData(preambleId, 4);
    dataStream >> chunkSize;
    if(isSamp(preambleId)) {
      dataStream.readRawData(instanceHandle, 16);
      dataStream >> sendSec;
      dataStream >> sendNanoSec;
      dataStream >> recvSec;
      dataStream >> recvNanoSec;
      dataStream >> cdrSize;
      dataStream.skipRawData(cdrSize);
      numSamples++;
    }
    else {
      dataStream.skipRawData(chunkSize);
      break;
    }
  }
  cout << "-------------------------------------------------" << endl;
  cout << "file contains " << numSamples << " valid samples." << endl;
  cout << "-------------------------------------------------" << endl;

  return 0;
}
