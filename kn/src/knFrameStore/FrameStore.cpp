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

#include <algorithm>
#include <memory>
#include <stdexcept>

namespace kn
{
  using namespace std;

  FrameStore::~FrameStore() throw()
  {
    // delete all frames
    FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
    for (first = m_rootNodes.begin(); first != last; ++first) {
      (*first)->recursiveDelete();
    }
  }

  void
  FrameStore::cloneTree(FrameTree & tree, FrameHandle rootFrame) const
  {
    lock_guard<mutex> guard(m_mutex);

    tree.clear();
    if (rootFrame.node == NULL) {
      int num_nodes = 0;
      FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
      for (first = m_rootNodes.begin(); first != last; ++first) {
        num_nodes += (*first)->numOffsprings() + 1;
      }
      tree.reserve(num_nodes);
    }
    else {
      tree.reserve(rootFrame.node->numOffsprings() + 1);
    }

    if (rootFrame.node == NULL) {
      FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
      for (first = m_rootNodes.begin(); first != last; ++first) {
        (*first)->cloneVec(NULL, tree);
      }
    }
    else {
      rootFrame.node->cloneVec(NULL, tree);
    }
  }

  FrameTreeNode *
  FrameStore::cloneTree(FrameHandle rootFrame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (rootFrame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return rootFrame.node->clone();
  }

  std::string const&
  FrameStore::name(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return frame.node->data().name();
  }

  std::string
  FrameStore::fullName(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    string name;
    FrameTreeNodeVector const& ancestry = frame.node->ancestry();
    FrameTreeNodeVector::const_iterator first, last = ancestry.end();
    for (first = ancestry.begin(); first != last; ++first) {
      name += "/" + (*first)->data().name();
    }

    return name;
  }

  Frame::Extras *
  FrameStore::getExtras(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return (frame.node->data().extras() != NULL)?
      frame.node->data().extras()->clone() : 0;
  }

  void
  FrameStore::setExtras(FrameHandle frame, Frame::Extras * extras)
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    frame.node->data().setExtras(extras);
  }


  FrameHandle
  FrameStore::lookup(std::string const& name, FrameHandle scope) const
  {

    if (scope == NULL &&
        !name.empty() && name[0] != '/') {
      // try to explicitly resolve the root frames
      string searchName = "/" + name;
      FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
      for (first = m_rootNodes.begin(); first != last; ++first) {
        FrameTreeNode * node = kn::lookup(*first, searchName);

        if (node != NULL)
          return FrameHandle(node);
      }
    }

    string searchName = name;

    // if not explicitly state otherwise, we search for .../name
    if (!name.empty() && name[0] != '/') {
      if (name.length() < 4 || name.substr(0, 4) != ".../") {
        searchName = ".../" + name;
      }
    }

    if (scope == NULL ||
        (!searchName.empty() && searchName[0] == '/')) {
      FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
      for (first = m_rootNodes.begin(); first != last; ++first) {
        FrameTreeNode * node = kn::lookup(*first, searchName);

        if (node != NULL)
          return FrameHandle(node);
      }
      return NULL;
    }

    return kn::lookup(scope.node, searchName);
  }


  namespace {
    class Append
    {
      vector<string>& s_;
    public:
      Append(vector<string>& s) :
        s_(s) {}
      void operator() (FrameTreeNode const * node) {
        string full_name;
        vector<FrameTreeNode *> const& ancestry = node->ancestry();
        vector<FrameTreeNode *>::const_iterator first, last = ancestry.end();
        for (first = ancestry.begin(); first != last; ++first) {
          full_name += "/" + (*first)->data().name();
        }

        s_.push_back(full_name);
      }
    };

    class Nothing
    {
    public:
      void operator() (FrameTreeNode const *) {}
    };
  }

  std::vector<std::string>
  FrameStore::frameNames() const
  {
    lock_guard<mutex> guard(m_mutex);

    vector<string> names;

    Nothing n;
    Append app(names);
    FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
    for (first = m_rootNodes.begin(); first != last; ++first) {
      (*first)->preOrderTraverse(app, n, n);
    }

    return names;
  }


  FrameHandle
  FrameStore::parent(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return frame.node->parent();
  }

  FrameHandle
  FrameStore::root(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return frame.node->root();
  }

  FrameStore::FrameHandleVector
  FrameStore::children(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL) {
      return FrameHandleVector(m_rootNodes.begin(), m_rootNodes.end());
    }

    FrameTreeNodeVector c = frame.node->children();
    return FrameHandleVector(c.begin(), c.end());
  }



  FrameHandle
  FrameStore::add(std::string const& name, FrameHandle parent, ATrans3 const& p)
  {
    // create new node
    FrameTreeNode * node = new FrameTreeNode(NULL, Frame(name, p));
    // add node
    add(node, parent);

    return node;
  }

  void
  FrameStore::add(FrameTreeNode * node, FrameHandle parent)
  {
    lock_guard<mutex> guard(m_mutex);

    if (node == NULL)
      throw std::invalid_argument("NULL pointer not allowed as node parameter.");
    if (isMember(node))
      throw std::logic_error("Node already member of FrameStore instance.");

    auto_ptr<FrameTreeNode> n(node);

    if (node->data().name().empty())
      throw std::invalid_argument("None empty frame name required.");
    if (!(parent.node == NULL || isMember(parent.node)))
      throw std::logic_error("None member node not allowed as parent.");

    // check frame name uniqueness
    assertUnique(node->data().name(), parent.node);

    if (parent.node == NULL)
      m_rootNodes.push_back(node);

    node->setParent(parent.node);

    n.release();
  }

  void
  FrameStore::del(FrameHandle frame, bool recursive)
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    // erase the node from root node vector, if root node
    FrameTreeNodeVector::iterator elem =
      std::find(m_rootNodes.begin(), m_rootNodes.end(), frame.node);
    if (elem != m_rootNodes.end())
      m_rootNodes.erase(elem);

    if (frame.node != NULL) {
      if (recursive) {
        // delete subtree
        frame.node->recursiveDelete();
        // decrease global node count
      }
      else {
        // safe children
        FrameTreeNodeVector children = frame.node->children();
        // insert child nodes into root-node vector
        m_rootNodes.insert(m_rootNodes.end(), children.begin(), children.end());
        // delete frame
        delete frame.node;
        // we deleted only one node
      }
    }
  }

  void
  FrameStore::setParent(FrameHandle frame, FrameHandle parent)
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    if (!(parent.node == NULL || isMember(parent.node)))
      throw std::logic_error("None member node not allowed as parent.");

    // don't do anything if old and new parent are the same
    if (frame.node->parent() == parent.node)
      return;

    assertUnique(frame.node->data().name(), parent.node);

    // if root node, delete there
    FrameTreeNodeVector::iterator node =
      find(m_rootNodes.begin(), m_rootNodes.end(), frame.node);
    if (node != m_rootNodes.end()) {
      m_rootNodes.erase(node);
    }

    frame.node->setParent(parent.node);

    if (parent.node == 0) {
      m_rootNodes.push_back(frame.node);
    }
  }

  bool
  FrameStore::isRoot(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return frame.node->isRoot();
  }

  bool
  FrameStore::isLeaf(FrameHandle frame) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return frame.node->isLeaf();
  }

  bool
  FrameStore::isAncestorOf(FrameHandle frame, FrameHandle pop) const
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");


    return frame.node->isAncestorOf(pop.node);
  }

  ATrans3
  FrameStore::getTransformOf(FrameHandle frame, FrameHandle source, ATrans3 const& trans)
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");


    return kn::getTransformOf(frame.node, source.node, trans);
  }

  Vector3
  FrameStore::getPositionOf(FrameHandle frame, FrameHandle source, Vector3 const& trans)
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL || source.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    return kn::getTransform(frame.node, source.node) * trans;
  }

  ATrans3
  FrameStore::getTransform(FrameHandle frame, FrameHandle source)
  {
    lock_guard<mutex> guard(m_mutex);

    if (source.node == NULL)
      std::logic_error("NULL handle not allowed as source parameter.");

    return kn::getTransform(frame.node, source.node);
  }

  void
  FrameStore::setTransform(FrameHandle frame, FrameHandle wrt_frame, ATrans3 const& update)
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    kn::setTransform(frame.node, wrt_frame.node, update);
  }

  void
  FrameStore::setTransformRel(FrameHandle frame, ATrans3 const& update)
  {
    lock_guard<mutex> guard(m_mutex);

    if (frame.node == NULL)
      throw std::invalid_argument("NULL handle not allowed as parameter.");

    kn::setTransform(frame.node, NULL, update);
  }

  bool
  FrameStore::isMember(FrameHandle frame) const throw()
  {
    lock_guard<mutex> guard(m_mutex);
    return isMember(frame.node);
  }

  bool
  FrameStore::mergeTree(FrameTreeNode * tree, FrameHandle start_frame)
  {
    if (isMember(tree))
      throw std::logic_error("Merged tree must not yet be member of the FrameStore.");

    // if a start node is given for mergin
    if (start_frame != NULL) {
      if (tree->data().name() != start_frame.node->data().name())
        throw std::logic_error("Tree root node does not match start node.");
      kn::mergeFrameTrees(tree, start_frame.node);
      tree->recursiveDelete();
      return true;
    }

    // try to match one of the root nodes and merge with it
    FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
    for (first = m_rootNodes.begin(); first != last; ++first) {
      if ((*first)->data().name() == tree->data().name()) {
        kn::mergeFrameTrees(*first, tree);
        tree->recursiveDelete();
        return true;
      }
    }

    // just add the tree to the forest
    m_rootNodes.push_back(tree);
    return false;
  }

  void
  FrameStore::getFrameTransforms(FrameHandleVector const& frames, ATrans3Vector& transforms) const
  {
    transforms.clear();
    transforms.reserve(frames.size());

    lock_guard<mutex> guard(m_mutex);
    FrameHandleVector::const_iterator first, last = frames.end();
    for (first = frames.begin(); first != last; ++first) {
      transforms.push_back(first->node->data().transform());
    }
  }

  void
  FrameStore::setFrameTransforms(FrameHandleVector const& frames, ATrans3Vector const& transforms)
  {
    if (frames.size() != transforms.size())
      std::invalid_argument("Parameter vectors not of same size.");

    lock_guard<mutex> guard(m_mutex);
    FrameHandleVector::const_iterator first, last = frames.end();
    ATrans3Vector::const_iterator trans = transforms.begin();
    for (first = frames.begin(); first != last; ++first, ++trans) {
      first->node->data().setTransform(*trans);
    }
  }

  bool
  FrameStore::isMember(FrameTreeNode * node) const throw()
  {
    if (node != NULL) {
      FrameTreeNodeVector::const_iterator first, last = m_rootNodes.end();
      for (first = m_rootNodes.begin(); first != last; ++first) {
        if ((*first) == node ||
            (*first)->isAncestorOf(node))
          return true;
      }
    }
    return false;
  }

  // check name uniqueness
  void
  FrameStore::assertUnique(std::string const& name, FrameTreeNode * parent) const
  {
    char const * const childError = "Name not unique as child node.";
    char const * const rootError = "Name not unique as root node.";
    char const * err = NULL;

    FrameTreeNodeVector children;
    FrameTreeNodeVector::const_iterator first, last;

    if (parent == NULL) {
      first = m_rootNodes.begin();
      last = m_rootNodes.end();
      err = rootError;
    }
    else {
      children = parent->children();
      first = children.begin();
      last = children.end();
      err = childError;
    }

    for (; first != last; ++ first) {
      if ((*first)->data().name() == name)
        throw std::logic_error(err);
    }
  }

}

