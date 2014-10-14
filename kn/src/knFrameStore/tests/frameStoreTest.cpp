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
#include "FrameStore.h"

#include <string>
#include <iostream>

using namespace std;
using namespace kn;

typedef ATrans3 Transform;
using Eigen::Matrix4d;

class P
{
  string s_;
public:
  P(string const& s) : s_(s) {}
  void operator() (FrameTreeNode const *) { cout << s_ << flush; }
};

class F
{
public:
  void operator() (FrameTreeNode const * node) { cout << node->data().name() << " " << flush; }
};

namespace kn {
  ostream& operator << (ostream& ostr, ::FrameTreeNode const * rhs) {
    ostr << rhs->data().name();
    return ostr;
  }
  ostream& operator << (ostream& ostr, ::FrameTreeNode const rhs) {
    ostr << rhs.data().name();
    return ostr;
  }
}


struct Locate
{
  Locate(FrameTreeNode const * wrt_frame) :
    m_wrt_frame(wrt_frame)
  {}

  void operator() (FrameTreeNode const * node)
  {
    cout << "get_location( wrt_node=" << node << ", source=" << m_wrt_frame << ")" << endl;
    Transform t = getTransform(node, m_wrt_frame);
    cout << "xATrans(Vector3(";
    for (size_t i = 0; i < 3; ++i) {
      if (i > 0) {
        cout << ",";
      }
      cout << t.translation()[i];
    }
    cout << "), Matrix3x3(";
    for (size_t i = 0; i < 3; ++i) {
      cout << "(";
      for (size_t j = 0; j < 3; ++j) {
        if (j > 0) {
          cout << ",";
        }
        cout << t.rotation()(i, j);
      }
      cout << ")";
    }
    cout << "))" << endl << endl;
  }

  FrameTreeNode const * const m_wrt_frame;
};

struct BreadthFirst
{
  BreadthFirst(FrameTreeNode const * root) :
    m_root(root)
  {}

  void operator() (FrameTreeNode const * node)
  {
    Locate l(node);
    m_root->breadthFirstTraverse(l);
  }

  FrameTreeNode const * const m_root;
};

// tree structure
//
//
// |
// r((0,0,0), (0,0,0)
// |
// |
// n0((0,1,0), (0,0,0)
// |
// |
Matrix4d r;
Matrix4d n0;
Matrix4d n1;
Matrix4d n2;
Matrix4d n00;
Matrix4d n01;
Matrix4d n02;
Matrix4d n10;
Matrix4d n11;
Matrix4d n12;
Matrix4d n20;
Matrix4d n21;
Matrix4d n22;



int main (int, char**)
{
  r <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n0 << 
    1, 0, 0, 1,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n1 << 
    1, 0, 0, 0,
    0, 1, 0, 1,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n2 << 
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 1,
    0, 0, 0, 1;
  n00 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n01 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n02 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n10 << 
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n11 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n12 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n20 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n21 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;
  n22 <<
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1;

  FrameStore fs;

  FrameHandle root = fs.add("root  ", NULL, ATrans3(r));
  FrameHandle node0 = fs.add("node0 ", NULL, ATrans3(n0));
  FrameHandle node1 = fs.add("node1 ", root, ATrans3(n1));
  FrameHandle node2 = fs.add("node2 ", root, ATrans3(n2));
  FrameHandle node00 = fs.add("node0", node0, ATrans3(n00));
  FrameHandle node01 = fs.add("node1", node0, ATrans3(n01));
  FrameHandle node02 = fs.add("node2", node0, ATrans3(n02));
  FrameHandle node10 = fs.add("node0", node1, ATrans3(n10));
  FrameHandle node11 = fs.add("node1", node1, ATrans3(n11));
  FrameHandle node12 = fs.add("node2", node1, ATrans3(n12));
  FrameHandle node20 = fs.add("node0", NULL, ATrans3(n20));
  FrameHandle node21 = fs.add("node1", NULL, ATrans3(n21));
  FrameHandle node22 = fs.add("node2", NULL, ATrans3(n22));

  // print tree using children

  // clone tree
  FrameTreeNode * tree = fs.cloneTree(root);

  // clone tree vec

  FrameStore::FrameTree t;
  fs.cloneTree(t);

  // all names

  // all parents

  // del node0/node2
  // del node1/node2

  // add node0/node0/node2
  // add node1/node0/node2

  // lookup
  // node0
  // node0/node0
  // node0/node2
  // node1/.../node2
  // /node2

  // reparent node2x

  // all is_root
  // all is_ancestor_of

  // all get_location

  F f;
  P d("(");
  P u(")");
  cout << "pre-order traverse: " << flush;
  tree->preOrderTraverse(f, d, u);
  cout << endl;

  return 0;
}
