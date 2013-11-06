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
#include "FrameTreeNode.h"

#include <string>
#include <iostream>

using namespace std;

using namespace kn;

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

namespace kn
{
  ostream& operator << (ostream& ostr, FrameTreeNode const * rhs) {
    if (rhs != NULL)
      ostr << rhs->data().name();
    else
      ostr << "NULL";
    return ostr;
  }
  ostream& operator << (ostream& ostr, FrameTreeNode const& rhs) {
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
    ATrans3 t = get_transform(node, m_wrt_frame);
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
    m_root->breadth_first_traverse(l);
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
  

  FrameTreeNode root(NULL, Frame("root  ", ATrans3(r)));
  FrameTreeNode node0(&root, Frame("node0 ", ATrans3(n0)));
  FrameTreeNode node1(&root, Frame("node1 ", ATrans3(n1)));
  FrameTreeNode node2(&root, Frame("node2 ", ATrans3(n2)));
  FrameTreeNode node00(&node0, Frame("node00", ATrans3(n00)));
  FrameTreeNode node01(&node0, Frame("node01", ATrans3(n01)));
  FrameTreeNode node02(&node0, Frame("node02", ATrans3(n02)));
  FrameTreeNode node10(&node1, Frame("node10", ATrans3(n10)));
  FrameTreeNode node11(&node1, Frame("node11", ATrans3(n11)));
  FrameTreeNode node12(&node1, Frame("node12", ATrans3(n12)));
  FrameTreeNode node20(&node2, Frame("node20", ATrans3(n20)));
  FrameTreeNode node21(&node2, Frame("node21", ATrans3(n21)));
  FrameTreeNode node22(&node2, Frame("node22", ATrans3(n22)));
  FrameTreeNode node223(&node22, Frame("node223", ATrans3(n22)));

  F f;
  P d("(");
  P u(")");
  cout << "pre-order traverse: " << flush;
  root.pre_order_traverse(f, d, u);
  cout << endl;

  // get all nodes relative to each other
  BreadthFirst bf(&root);
  root.breadth_first_traverse(bf);

  cout << "lookup root: " << lookup(&root, "root  ") << endl;
  cout << "lookup /root: " << lookup(&root, "/root  ") << endl;
  cout << "lookup node22: " << lookup(&root, ".../node22") << endl;
  cout << "lookup node22 from node2: " << lookup(&node2, ".../node22") << endl;
  cout << "lookup .../node22/node223: " << lookup(&root, ".../node22/node223") << endl;
  cout << "lookup ../node22 from node 21: " << lookup(&node21, "../node22") << endl;
  cout << "lookup ../.../node22 from node 1: " << lookup(&node1, "../.../node22") << endl;
  cout << "lookup ../.../node22 from root: " << lookup(&root, "../.../node22") << endl;
  cout << "lookup empty from node2: " << lookup(&node2, ".") << endl;
  cout << "lookup / from node2: " << lookup(&node2, "/") << endl;

  return 0;
}
