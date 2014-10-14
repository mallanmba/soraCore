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
#include "knFrameStore/FrameStoreSingleton.h"

#include "FrameStoreConfigSvc.h"
#include "FrameStoreUpdaterSvc.h"

#include "miro/Configuration.h"
#include "miro/Log.h"
#include "miro/Robot.h"
#include "knDds/DdsSupport.h"
#include "knDds/DdsEntitiesFactorySvc.h"

#include "knFrameStore/FrameStore.h"
#include "knMath/EulerAngles.h"

#include <ace/Get_Opt.h>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using namespace kn;



ostream& operator << (ostream& ostr, kn::ATrans3 const& atrans)
{
  Vector3 rpy = 
    rotationMatrixToEulerXyz(atrans.rotation());
  Vector3 const& xyz = atrans.translation();

  ostr << "(" << setiosflags(ios_base::fixed) << setprecision(2) << setw(7)
       << xyz[0] << "m, " << xyz[1] << "m, " << xyz[2] << "m, "
       << rpy[0] * 180./M_PI << "deg, " << rpy[1] * 180./M_PI<<  "deg, " << rpy[2] * 180./M_PI << "deg)" ;
  return ostr;
}

class FrameStoreInterface
{
public:
  FrameStoreInterface();

  void printMemory();
  void printOptions();
  void printOptionsGet();
  void printOptionsIs();

  bool evalCommand(char c);
  bool evalCommandGet(char c);
  bool evalCommandIs(char c);

  void lookup();
  void add();
  void del();
  void setTransform();
  void setTransformRel();

  void getAll();
  void getParent();
  void getRoot();
  void getChildren();
  void getTransform();
  void getTransformOf();

  void isRoot();
  void isLeaf();
  void isAncestorOf();

protected:
  static int queryMemory();
  static ATrans3 queryTransform();

  FrameHandle m_memory[5];
  FrameStore * m_frameStore;
};

FrameStoreInterface::FrameStoreInterface() :
  m_frameStore(kn::FrameStoreSingleton::instance())
{
  for (unsigned int i = 0; i < 5; ++i) {
    m_memory[i] = NULL;
  }
}

void
FrameStoreInterface::printMemory()
{
  for (unsigned int i = 0; i < 5; ++i) {
    cerr << "#" << i << " - ";
    if (m_memory[i] == FrameHandle::NULL_HANDLE) {
      cerr << "<empty>" << endl;
    }
    else {
      cerr << m_frameStore->getTransform(FrameHandle::NULL_HANDLE, m_memory[i]) << " "
	   << m_frameStore->fullName(m_memory[i]) << endl;
    }
  }
  cerr << endl;
}

void
FrameStoreInterface::printOptions()
{
  printMemory();

  cerr << " 0 - get*" << endl
       << " 1 - is*" << endl
       << " 2 - lookup() and store" << endl
       << " 3 - add() and store" << endl
       << " 4 - del()" << endl
       << " 5 - setTransform()" << endl
       << " 6 - setTransformRel()" << endl;
}

void
FrameStoreInterface::printOptionsGet()
{
  printMemory();

  cerr << " 1 - list all" << endl
       << " 2 - parent() and store" << endl
       << " 3 - list children" << endl
       << " 4 - get_transform()" << endl
       << " 5 - get_transform_of()" << endl;
}

void
FrameStoreInterface::printOptionsIs()
{
  printMemory();

  cerr << " 0 - is_root()" << endl
       << " 1 - is_leaf()"<< endl
       << " 2 - is_ancestor_of()" << endl;
}

bool
FrameStoreInterface::evalCommand(char c)
{
  int rc = 0;
  
  switch (c) {
  case '0':
    {
      string input;
      while(input != "q") {
	
	cerr << "Possible Get* Commands:" << endl << endl;
	
	printOptionsGet();
	cerr << "q to quit" << endl << endl
	     << "Selection: " << flush;
	
	cin >> input;
	
	try {
	  evalCommandGet(input[0]);
	}
	catch (const std::logic_error& e) {
	  cerr << "ERROR: FrameStore reported logic error." << endl << e.what() << endl;
	}
      }
    }
    break;

  case '1':
    {
      string input;
      while(input != "q") {
	
	cerr << "Possible Is* Commands:" << endl << endl;
	
	printOptionsIs();
	cerr << "q to quit" << endl << endl
	     << "Selection: " << flush;
	
	cin >> input;
	
	try {
	  evalCommandIs(input[0]);
	}
	catch (const std::logic_error& e) {
	  cerr << "ERROR: FrameStore reported logic error." << endl << e.what() << endl;
	}
      }
    }
    break;

  case '2':
    lookup();
    break;

  case '3':
    add();
    break;

  case '4':
    del();
    break;

  case '5':
    setTransform();
    break;

  case '6':
    setTransformRel();
    break;

  default:
    rc = false;
    break;
  }
  return rc;
}

bool
FrameStoreInterface::evalCommandGet(char c)
{
  int rc = 0;
  
  switch (c) {
  case '1':
    getAll();
    break;

  case '2':
    getParent();
    break;

  case '3':
    getChildren();
    break;

  case '4':
    getTransform();
    break;

  case '5':
    getTransformOf();
    break;

  default:
    rc = false;
    break;
  }
  return rc;
}

bool
FrameStoreInterface::evalCommandIs(char c)
{
  int rc = 0;
  
  switch (c) {
  case '0':
    isRoot();
    break;

  case '1':
    isLeaf();
    break;

  case '2':
    isAncestorOf();
    break;
  }
  return rc;
}

void
FrameStoreInterface::getAll()
{
  vector<string> flist = m_frameStore->frameNames();
  vector<string>::const_iterator first, last = flist.end();
  for (first = flist.begin(); first != last; ++first) {
    cout << *first << endl;
  }
}

void
FrameStoreInterface::getParent()
{
  cerr << "parent of " << flush;
  int mem = queryMemory();
  cerr << "assign to " << flush;
  int to =  queryMemory();

  if (mem != -1 && to != -1)
    m_memory[to] = m_frameStore->parent(m_memory[mem]);
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::getChildren()
{
  cerr << "children of " << flush;
  int mem = queryMemory();
  if (mem != -1) {
    FrameStore::FrameHandleVector children = m_frameStore->children(m_memory[mem]);
    FrameStore::FrameHandleVector::const_iterator first, last = children.end();
    for (first = children.begin(); first != last; ++first) {
      cout << m_frameStore->fullName(*first) << endl;
    }
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::getTransform()
{
  cerr << "transform of " << flush;
  int mem = queryMemory();
  cerr << "with respect to " << flush;
  int wrt = queryMemory();
  if (mem != -1 && wrt != -1) {
    cout << m_frameStore->getTransform(m_memory[wrt], m_memory[mem]);
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::getTransformOf()
{
  cerr << "transform of " << flush;
  int mem = queryMemory();
  cerr << "with respect to " << flush;
  int wrt = queryMemory();
  if (mem != -1 && wrt != -1) {
    ATrans3 transform = queryTransform();
    cout << m_frameStore->getTransformOf(m_memory[wrt], m_memory[mem], transform);
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::isRoot()
{
  cerr << "query status of " << flush;
  int mem = queryMemory();
  if (mem != -1) {
    cerr << "is base: " << flush;
    cout << m_frameStore->isRoot(m_memory[mem]) << endl;
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::isLeaf()
{
  cerr << "query status of " << flush;
  int mem = queryMemory();
  if (mem != -1) {
    cerr << "is base: " << flush;
    cout << m_frameStore->isLeaf(m_memory[mem]) << endl;
  }
  else {
    cerr << "aborted" << endl;
  }
}


void
FrameStoreInterface::isAncestorOf()
{
  cerr << "query status of " << flush;
  int mem = queryMemory();
  cerr << "potential descendant: " << flush;
  int des = queryMemory();
  if (mem != -1 && des != -1) {
    cerr << "is base: " << flush;
    cout << m_frameStore->isAncestorOf(m_memory[mem], m_memory[des]) << endl;
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::lookup()
{
  string frame;
  cerr << "frame name: " << flush;
  cin >> frame;
  cerr << "assign to " << flush;
  int to =  queryMemory();
  if (to != -1) {
    m_memory[to] = m_frameStore->lookup(frame);
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::add()
{
  string name;
  cerr << "frame name: " << flush;
  cin >> name;
  cerr << "assign to " << flush;
  int to =  queryMemory();
  cerr << "parent " << flush;
  int parent =  queryMemory();
  if (to != -1 && parent != -1) {
    ATrans3 transform = queryTransform();
    m_memory[to] = m_frameStore->add(name, m_memory[parent], transform);
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::del()
{
  cerr << "deletable " << flush;
  int frame =  queryMemory();
  if (frame != -1) {
    m_frameStore->del(m_memory[frame]);
    m_memory[frame] = FrameHandle::NULL_HANDLE;
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::setTransform()
{
  cerr << "set transform of " << flush;
  int frame =  queryMemory();
  cerr << "parent " << flush;
  int parent =  queryMemory();
  if (frame != -1 && parent != -1) {
    ATrans3 transform = queryTransform();
    m_frameStore->setTransform(m_memory[frame], m_memory[parent], transform);
  }
  else {
    cerr << "aborted" << endl;
  }
}

void
FrameStoreInterface::setTransformRel()
{
  cerr << "set transform of " << flush;
  int frame =  queryMemory();
  if (frame != -1) {
    ATrans3 transform = queryTransform();
    m_frameStore->setTransformRel(m_memory[frame], transform);
  }
  else {
    cerr << "aborted" << endl;
  }
}

int
FrameStoreInterface::queryMemory()
{
  int slot;
  cerr << " frame in memory slot # (0-4): " << flush;
  cin >> slot;

  if (slot > 4 || slot < 0)
    slot = -1;
  return slot;
}


ATrans3
FrameStoreInterface::queryTransform()
{
  double x, y, z;
  double roll, pitch, yaw;

  cerr << "x (m): " << flush;
  cin >> x;
  cerr << "y (m): " << flush;
  cin >> y;
  cerr << "z (m): " << flush;
  cin >> z;
  cerr << "roll (deg): " << flush;
  cin >> roll;
  roll *= M_PI/180.;
  cerr << "pitch (deg): " << flush;
  cin >> pitch;
  pitch *= M_PI/180.;
  cerr << "yaw (deg): " << flush;
  cin >> yaw;
  yaw *= M_PI/180.;

  return ATrans3(Translation3(x, y, z) * eulerXyzToRotationMatrix(roll, pitch, yaw));

}

string name = "FrameStore";
bool verbose = false;

int 
parseArgs(int& argc, char* argv[])
{
  int rc = 0;
  int c;

  ACE_Get_Opt get_opts (argc, argv, "n:v?");
  
  while ((c = get_opts()) != -1) {
    switch (c) {
    case 'n':
      name = get_opts.optarg;
      break;
    case 'v':
      verbose = true;
      break;
    case '?':
    default:
      cerr << "usage: " << argv[0] << "[-n name] [-v?]" << endl
	   << "  -n <name> name of the FrameManager instance (default: FrameManager)" << endl
	   << "  -v verbose mode" << endl
	   << "  -? help: emit this text and stop" << endl;
      rc = 1;
    }

    if (verbose) {
      cerr << "interface name: " << name << endl;
    }
  }
  return rc;
}

int cntr = 1;
char * vec[] = { "testFrameStore" };

int
main(int argc, char * argv[])
{
  Miro::Log::init(argc,argv);
  Miro::Robot::init(argc, argv);
  kn::DdsSupport::init(argc, argv);

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(argc, argv);
  kn::FrameStoreUpdaterSvc frameStoreUpdater;
  frameStoreUpdater.init(cntr, vec);

  if (parseArgs(argc, argv))
    return 1;

  FrameStoreInterface interface;
  
  string input;
  while(input != "q") {
    
    cerr << "Possible Commands:" << endl << endl;
    
    interface.printOptions();
    cerr << "q to quit" << endl << endl
	 << "Selection: " << flush;
    
    cin >> input;
    
    try {
      interface.evalCommand(input[0]);
    }
    catch (const std::logic_error& e) {
      cerr << "ERROR: FrameStore reported logic error." << endl << e.what() << endl;
    }
  }

  return 0;
}
