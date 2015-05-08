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

#include <algorithm>
#include <iterator>

namespace kn
{
  using namespace std;

  ATrans3
  getTransform(FrameTreeNode const * target, FrameTreeNode const * source)
  {
    ATrans3 loc = ATrans3::Identity();

    if (source != NULL) {

      if (target == NULL)
        return source->data().transform();

      if (target != source) {

        FrameTreeNode const * ancestor = target->lastCommonAncestor(source);

        if (ancestor != NULL) {
          // from the origin frame to the ancestor
          {
            FrameTreeNode::NodeVector const& nodes = target->ancestry(true);
            FrameTreeNode::NodeVector::const_iterator iter =
              std::find(nodes.begin(), nodes.end(), ancestor);

            assert (iter != nodes.end());

            ++iter;
            if (iter != nodes.end()) {
              for (; iter != nodes.end(); ++iter) {
                loc = loc * (*iter)->data().transform();
              }
              loc = loc.inverse();
            }
          }


          // from the last common ancestor to the wrt frame
          {
            FrameTreeNode::NodeVector const& nodes = source->ancestry(true);
            FrameTreeNode::NodeVector::const_iterator iter =
              std::find(nodes.begin(), nodes.end(), ancestor);

            assert (iter != nodes.end());

            for (++iter; iter != nodes.end(); ++iter) {
              loc = loc * (*iter)->data().transform();
            }
          }
        }
      }
    }

    return loc;
  }

  namespace {
    struct FtnLess {
      bool operator () (FrameTreeNode const * lhs, FrameTreeNode const * rhs) {
        return lhs->data().name() < rhs->data().name();
      }
    };
  }

  void
  mergeFrameTrees(FrameTreeNode * targetTree, FrameTreeNode * sourceTree)
  {
    if (targetTree->data().name() != sourceTree->data().name())
      return;

    FrameTreeNode::NodeVector src_children = sourceTree->children();

    if (src_children.size() > 0) {
      FrameTreeNode::NodeVector tgt_children = targetTree->children();

      FtnLess less;
      sort(src_children.begin(), src_children.end(), less);
      sort(tgt_children.begin(), tgt_children.end(), less);

      FrameTreeNode::NodeVector::const_iterator first, last = src_children.end();
      FrameTreeNode::NodeVector::const_iterator tgt_iter = tgt_children.begin();
      for (first = src_children.begin(); first != last; ++first) {
        while (tgt_iter != tgt_children.end() &&
               (*first)->data().name() > (*tgt_iter)->data().name()) {
          ++tgt_iter;
        }

        if (tgt_iter == tgt_children.end() ||
            (*first)->data().name() < (*tgt_iter)->data().name()) {
          (*first)->setParent(targetTree);
        }
        else if ((*first)->data().name() == (*tgt_iter)->data().name()) {
          mergeFrameTrees(*tgt_iter, *first);
        }
      }

    }
  }

  namespace {
    vector<string> splitPath(string const& path)
    {
      vector<string> elements;

      string::const_iterator first, last = path.end();
      for (first = path.begin(); first < last; ++first) {

        // skip /
        if (*first == '/')
          continue;

        // search next /
        string::const_iterator start;
        for (start = first; first != last; ++first) {
          if (*first == '/')
            break;
        }

        string element(start, first);
        if (element != ".")
          elements.push_back(element);
      }

      return elements;
    }

    FrameTreeNode * matchNode(FrameTreeNode * node,
                              vector<string>::const_iterator first,
                              vector<string>::const_iterator last)
    {
      for (; first != last; ++first) {

        // single dot is skipped in splitPath already
        assert (*first != ".");

        // double dot is "one up"
        if (*first == "..") {
          // XXX mallan 010610: shouldn't this be if(!node->is_root()) node = node->parent() ?
          node = node->parent();
          if (node == NULL)
            break;
        }

        // triple dot is breadth-first search
        else if (*first == "...") {

          vector<string>::const_iterator next = first;
          ++next;

          // breadth first search for next element
          deque<FrameTreeNode *> nodes;
          back_insert_iterator<deque<FrameTreeNode *> > iter(nodes);
          nodes.push_back(node);
          //node->copy_children(iter);
          while (!nodes.empty()) {

            FrameTreeNode * n = matchNode(nodes.front(), next, last);
            if (n != NULL)
              return n;

            nodes.front()->copyChildren(iter);
            nodes.pop_front();
          }

          return NULL;
        }

        // regular elements just need to match one by one
        else {
          FrameTreeNode::NodeVector c = node->children();
          FrameTreeNode::NodeVector::const_iterator f, l = c.end();
          for (f = c.begin(); f != l; ++f) {
            if ((*f)->data().name() == *first) {
              node = (*f);
              break;
            }
          }

          // return NULL if no child node matches
          if (f == l)
            return NULL;
        }
      }

      return node;
    }
  }

  FrameTreeNode *
  lookup(FrameTreeNode * start_frame, std::string const& path)
  {
    if (start_frame == NULL)
      return NULL;

    vector<string> elements = splitPath(path);
    vector<string>::const_iterator first = elements.begin();
    vector<string>::const_iterator last = elements.end();

    if (!path.empty() && path[0] == '/') {

      start_frame = start_frame->root();
      if (!elements.empty() && elements[0] != "...") {
        if (start_frame->data().name() != elements.front())
          return NULL;

        ++first;
      }
    }

    // walk elements
    return matchNode(start_frame, first, last);
  }
}
