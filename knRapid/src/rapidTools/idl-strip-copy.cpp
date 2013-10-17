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
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctype.h>
#include <sys/stat.h>

using namespace std;

bool truncateLanguageSpecificDirectives = true;

bool fileExists(const string& filename)
{
  struct stat fileInfo;
  if( (stat(filename.c_str(), &fileInfo)) == 0 ) {
    return true;
  }
  return false;
}

bool whitespaceOnly(const char* str)
{
  for( int i = 0; str[i] != 0; i++ ) {
    if(!isspace(str[i])) {
      return false;
    }
  }
  return true;
}

/**
 * Simple utility to strip //@copy from DDS IDL files
 * This is intended to be an INPUT_FILTER for Doxygen, see:
 * http://www.stack.nl/~dimitri/doxygen/config.html#cfg_input_filter
 */
int main(int argc, char** argv)
{
  const char* truncateStr = "//@copy-";
  const char* removeStr = "//@copy ";
  const int   removeLen = strlen(removeStr);

  if(argc == 2) {
    string filename(argv[1]);
    if(fileExists(filename)) {
      ifstream inStream(filename.c_str());
      bool doPrint;
      string line;
      while( getline(inStream, line) ) {
        doPrint = true;
        string::size_type idx;
        while( (idx = line.find(removeStr)) != string::npos ) {
          line.erase(idx, removeLen);
        }
        if(truncateLanguageSpecificDirectives &&
              (idx = line.find(truncateStr)) != string::npos) {
          line.erase(idx, string::npos);
          if(whitespaceOnly(line.c_str())) {
            doPrint = false;
          }
        }
        if(doPrint) {
          cout << line << endl;
        }
      }
    }
    else {
      cerr << "File does not exist: \"" << filename << "\"\n";
    }
  }
  else {
    string cmdName = argv[0];
    int slash;
    // look for forward and back slashes to simplify command name
    slash = cmdName.rfind("/");
    if(slash >= 0) {
      cmdName.erase(0, slash+1);
    }
    slash = cmdName.rfind("\\");
    if(slash >= 0) {
      cmdName.erase(0, slash+1);
    }
    cerr << endl << cmdName << " strips \"" << removeStr
         << "\" from idl files and writes to stdout." << endl;
    cerr << endl << "useage: " << cmdName << " <filename>" << endl;
  }
}
