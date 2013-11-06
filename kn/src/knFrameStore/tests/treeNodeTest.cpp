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
#include "TreeNode.h"

#include <string>
#include <iostream>

using namespace std;

typedef kn::TreeNode<std::string> TreeNode; 

class P
{
  string s_;
public:
  P(string const& s) : s_(s) {}
  void operator() (TreeNode const *) { cout << s_ << flush; }
};

class F
{
public:
  void operator() (TreeNode const * node) { cout << node->data() << " " << flush; }
};


namespace kn
{
  ostream& operator << (ostream& ostr, TreeNode<std::string> const * rhs) {
    ostr << rhs->data();
    return ostr;
  }
  ostream& operator << (ostream& ostr, TreeNode<std::string> const& rhs) {
    ostr << rhs.data();
    return ostr;
  }
}

int main (int, char**)
{
  TreeNode root(NULL, "root");
  TreeNode node0(NULL, "node0");
  TreeNode node1(&root, "node1");
  TreeNode node00(&node0, "node00");
  TreeNode node01(&node0, "node01");
  TreeNode node10(&node1, "node10");
  TreeNode node11(&node1, "node11");

  TreeNode otherRoot;
  otherRoot.data() = string("otherRoot");

  cout << "is_root (" << root.data() << "): " << root.is_root() << endl;
  cout << "is_root (" << node11.data() << "): " << node11.is_root() << endl;
  cout << endl;
  cout << "root of (" << node01.data() << "): " << node01.root()->data() << endl;
  cout << "set parent" << endl;
  node0.set_parent(&root);
  cout << "parent of (" << node01.data() << "): " << node01.parent()->data() << endl;
  cout << "root of (" << node01.data() << "): " << node01.root()->data() << endl;
  cout << endl;
  cout << node0.data() << " is ancestor of (" << node01.data() << "): " << node0.is_ancestor_of(&node01) << endl;
  cout << node01.data() << " is ancestor of (" << node01.data() << "): " << node01.is_ancestor_of(&node01) << endl;
  cout << root.data() << " is ancestor of (" << node01.data() << "): " << node0.is_ancestor_of(&node01) << endl;
  cout << endl;

  cout << node11.data() << " ancetry:" << flush;
  {
    TreeNode::NodeVector ancestors = node11.ancestry();
    TreeNode::NodeVector::const_iterator first, last = ancestors.end();
    for (first = ancestors.begin(); first != last; ++first) {
      cout << " " << (*first)->data();
    }
    cout << endl;
  }
  cout << node01.data() << " last common ancestor with " << root.data() << ": " << node01.last_common_ancestor(&root)->data() << endl;
  cout << node01.data() << " last common ancestor with " << node0.data() << ": " << node01.last_common_ancestor(&node0)->data() << endl;
  cout << node01.data() << " last common ancestor with " << node1.data() << ": " << node01.last_common_ancestor(&node1)->data() << endl;
  cout << node01.data() << " last common ancestor with " << node00.data() << ": " << node01.last_common_ancestor(&node00)->data() << endl;
  cout << node01.data() << " last common ancestor with " << node01.data() << ": " << node01.last_common_ancestor(&node01)->data() << endl;
  cout << node01.data() << " last common ancestor with " << node10.data() << ": " << node01.last_common_ancestor(&node10)->data() << endl;
  cout << node01.data() << " last common ancestor with " << node11.data() << ": " << node01.last_common_ancestor(&node11)->data() << endl;
  cout << node01.data() << " last common ancestor with " << otherRoot.data() << ": " << (void*)node01.last_common_ancestor(&otherRoot) << endl;

  {
    cout << root.data() << " children:" << flush;
    TreeNode::NodeVector children = root.children();
    TreeNode::NodeVector::const_iterator first, last = children.end();
    for (first = children.begin(); first != last; ++first) {
      cout << " " << (*first)->data();
    }
    cout << endl;
  }
  
  {
    cout << root.data() << " copy children: " << flush;
    ostream_iterator<TreeNode *> o(cout, " ");
    root.copy_children<>(o);
    cout << endl;
  }
  
  F f;
  P d("(");
  P u(")");
  cout << "pre-order traverse: " << flush;
  root.pre_order_traverse(f, d, u);
  cout << endl;
  cout << "post-order traverse: " << flush;
  root.post_order_traverse(f, d, u);
  cout << endl;

  cout << "breadth-first traverse: " << flush;
  root.breadth_first_traverse(f);
  cout << endl << endl;

  TreeNode * newRoot = root.clone();
  cout << "cloned tree pre-order traverse: " << flush;
  newRoot->pre_order_traverse(f, d, u);
  cout << endl << "recursive_delete()" << flush;
  newRoot->recursive_delete();
  cout << " - done" << endl << endl;
  
  cout << "pre-order traverse: " << flush;
  root.pre_order_traverse(f, d, u);
  cout << endl;

  TreeNode::TreeNodeVector tree;
  tree.reserve(16);
  root.clone_vec(NULL, tree);
  cout << "cloned tree vector output: " << flush;
  copy(tree.begin(), tree.end(), ostream_iterator<TreeNode>(cout, " "));
  cout << endl;
  
  cout << "cloned tree pre-order traverse: " << flush;
  tree.front().pre_order_traverse(f, d, u);
  cout << endl;
}
