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
#include "Sha1.h"

#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;
using namespace irg;

#define BUF_SIZE 4096

void usage() {
  cerr << "Usage: testSha1 [file]" << endl
       << "  Compute the SHA1 hash of FILE, or stdin if no file is specified." << endl
       << "  The hash that this outputs should match the output of sha1sum, given the same output"
       << endl;
}

int main(int argc, char** argv)
{
  unsigned char buffer[BUF_SIZE];
  SHA1Hash hash;

  if (argc > 2) {
    usage();
    return 1;
  }
  
  istream* in;

  if (argc < 2) {
    in = &cin;
  }
  else {
    ifstream * fin = new ifstream(argv[1], ios_base::binary | ios_base::in);
    if (!fin->is_open()) {
      cerr << "Error opening " << argv[1] << endl;
      return 1;
    }
    in = fin;
  }

  hash.init();
  while (in->good()) {
    in->read((char *) buffer, BUF_SIZE);
    hash.update(buffer, in->gcount());
  }

  SHA1Hash::Hash digest = hash.final();
  cout << SHA1Hash::hexString(digest) << endl;
  
  return 0;
}


