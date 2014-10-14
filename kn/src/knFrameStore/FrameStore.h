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
#ifndef kn_FrameStore_h
#define kn_FrameStore_h

#include "knFrameStore_Export.h"
#include "FrameHandle.h"
#include "FrameTreeNode.h"

#include "knMath/Vector.h"
#include "knShare/Thread.h"
#include "knShare/Mutex.h"

namespace kn
{
  /** 
   * @defgroup knFrameStore Frame Store
   * @brief A collection of classes that implement the transform-tree (coordinate frames tree) concept.
   */
  
  /**
   * @ingroup knFrameStore
   * @brief Thread-safe coordinate-frame tree class.
   * 
   * The FrameStore class implements a thread-safe interface to a
   * multi-tree. (Tree with multiple root nodes). It pretty much
   * mirrors the FrameTreeNode interface. The FrameStore adds locking
   * primitives for thread-safety to the feature-set..
   *
   * Frame tree nodes in the FrameStore are referenced by the
   * FrameHandle data structure. This indirection is done to avoid
   * accidential use of FrameTreeNode nodes from the FrameStore
   * outside the class interface.
   *
   * The frame trees are managed as heap-allocated structures. Error
   * checking is done to ensure the integrity of the tree structure,
   * as well as to prevent segementation faults on null-handles.  So
   * for instance, when re-parenting a frame, we check that the frame
   * is actually part of the FrameStore instance and when adding
   * frames we check for uniqueness of the name within the set of
   * siblings.  Error checking is omitted for methods, where passing
   * erronous arguments does only affect the the return value, but not
   * the integrity of the tree. For instance, is_root() does not check
   * for membership of the frame to the FrameStore.

  */
  class knFrameStore_Export FrameStore
  {
  public:
    /** @brief A vector of frame handles. */
    typedef std::vector<FrameHandle> FrameHandleVector;
    /**
     * @brief A vector of FrameTreeNode's.
     *
     * Those are actual nodes, that can be manipulated using the
     * TreeNode<Frame> interface.
     */
    typedef std::vector<FrameTreeNode, Eigen::aligned_allocator<FrameTreeNode> > FrameTree;

    //! Destructor
    /** Deletes all frames owned by this FrameStore instance.
     */
    ~FrameStore() throw();

    //! Get a copy of the frame tree.
    /**
     *
     * The vector holds a set of FrameTreeNode objects, which describe
     * all tree(s) of the FrameStore.  The FrameStore is copied in
     * pre-order, so the first element of the vector is the root node
     * of the first tree.
     *
     * Note that the FrameTreeNodes have a completely different
     * interface than the FrameStore. FrameTreeNodes don't have
     * locking, so this is a static snapshot of the tree.
     * 
     * @param tree The returned frame tree.
     * @param rootFrame The root frame to start the recursive copy with. 
     *                  If NULL-handle, copies the entire tree.
     */
    void cloneTree(FrameTree & tree, FrameHandle rootFrame = NULL) const;

    /** 
     * @brief Get a copy of the frame tree.
     * @param rootFrame The root frame to start the recursive copy with.
     * @throw std::logic_error If NULL-handle is passed as rootFrame.
     * 
     * The rootFrame is required to be non-NULL, otherwise
     * std::logic_error is thrown.
     *
     * @note The FrameTreeNodes have a completely different
     * interface than the FrameStore. FrameTreeNodes don't have
     * locking, so this is a static snapshot of the tree.
     */
    FrameTreeNode * cloneTree(FrameHandle rootFrame) const;


    /**
     * @brief Get name of frame.
     * @param frame Frame to lookup name of.
     * @return Name of the frame.
     * @throw std::logic_error If passed a NULL-handle.
     * 
     * The frame argument is required to be non-NULL, otherwise
     * std::logic_error is thrown.
     */
    std::string const& name(FrameHandle frame) const;

    //! Get fully qualified name of frame, including path of all parent frames.
    /**
     * @param frame Frame to lookup name of.
     * @return Name of the frame.
     * @throw std::logic_error If passed a NULL-handle.

     * The frame argument is required to be non-NULL, otherwise
     * std::logic_error is thrown.
     */
    std::string fullName(FrameHandle frame) const;

    /**
     * @brief Get cloned extras object from Frame.
     * 
     * @param frame Frame to return the extras for.
     * @throw std::logic_error If passed a NULL-handle.
     * 
     * The caller takes ownership of the returned object.
     * If no extras are associated with the Frame, a NULL-pointer
     * is returned.
     * The frame argument is required to be non-NULL, otherwise
     * @throw std::logic_error is thrown.
     * 
     * FIXME Switch the interface to use const-shared pointers
     */
    Frame::Extras * getExtras(FrameHandle frame) const;

    /**
     * @brief Set  extras object for Frame.
     * 
     * @param frame Frame to return the extras for.
     * @param extras The new extras.
     * @throw std::logic_error If passed a NULL-handle as frame handle.
     *
     * The frame argument is required to be non-NULL, otherwise
     * @throw std::logic_error is thrown.
     * The FrameStore takes ownership of the passed Extras object,
     * a NULL-pointer will delete the stored extras object.
     * 
     * FIXME Switch the interface to use const-shared pointers
     */
    void setExtras(FrameHandle frame, Frame::Extras * extras);

    /**
     * @brief Accessor method for frame names.
     * @return List of fully qualified names of all frames.
     */
    std::vector<std::string> frameNames() const;

    /**
     * @brief Return the parent Frame
     *
     * Returns the NULL-handle if root frame.
     *
     * @param frame Valid frame handle.
     * @throw std::logic_error If NULL-handle is passed as @a frame argument.
     * @note The frame argument is required to be non-NULL.
     */
    FrameHandle parent(FrameHandle frame) const;

    /**
     * @brief Get the list of direct children of a frame.
     *
     * @param frame Valid frame handle.
     * @throw std::logic_error If NULL-handle is passed as @a frame argument.
     * @note The frame argument is required to be non-NULL.
     *
     */
    FrameHandleVector children(FrameHandle frame = FrameHandle::NULL_HANDLE) const;

    //! Lookup a frame by name.
    /**
     * @param name
     *
     * Note our special lookup naming semantics: Frame names are
     * alphanumeric only. . and / are reserved characters.  A frame
     * name can be specified by giving it's absolute or relative path
     * in Unix file-system convention: /rootNode/myNode or
     * ../../grandParent/uncleFrame.
     *
     * A special wild-card is the ... which starts a breadth-first
     * expansion of the tree.  So .../myNode will return the first
     * node named myNode beneath the scope-node in a bread-first
     * expansion.  As the ordering of children is not defined, it is
     * not guaranteed which node is returned if multiple nodes with
     * the same name are specified at the same depth level.
     *
     * @param scope
     * If a non-NULL scope frame is passed as second parameter, the
     * search is restricted to the sub-tree spawned by this frame.
     */
    FrameHandle lookup(std::string const& name, FrameHandle scope = NULL) const;

    //! Adding a frame to the frame store.
    /**
     * @param name The name of the frame to add.
     * @param parent The parent node under which to add the frame.
     * @param p  Transform of the frame.
     */
    FrameHandle add(std::string const& name, FrameHandle parent, ATrans3 const& p);

    /**
     * @brief Adding a sub-tree to the frame store
     * @param node
     * The FrameStore takes ownership of the passed sub-tree.
     * The tree must not be member of a FrameStore already. Otherwise,
     * std::logic_error is thrown.
     *
     * @param parent
     * @throw std::logic_error
     */
    void add(FrameTreeNode * node, FrameHandle parent);

    /**
     * @brief Merging a tree with the the frame store
     * 
     * @param tree The tree to merge.
     * @param start_frame
     * The start-node for the merge operation. The startFrame is required to have the same
     * name as the node. x
     * @return True, if the tree was merged,
     * false if the tree was added as a new tree to the forest.
     * @throw std::logic_error This exception is thrown if tree is already a member of a FrameStore.
     * 
     *  - If a NULL_HANDLE is passed as @a start_frame the tree is merged into the forrest.
     *  - If @a start_frame is not the NULL_HANDLE, the names of the start_frame and the
     *    name of the @a tree root_node have to match.
     *  - On successful merging the FrameStore takes ownership of the passed sub-tree.
     *  - If std::logic_error is thrown, the passed tree is still owned by the caller, to
     *    allow forensics.
     */
    bool mergeTree(FrameTreeNode * tree, FrameHandle start_frame = FrameHandle::NULL_HANDLE);

    /**
     * Delete frame from tree.
     * @param frame The frame to delete.
     *
     * @param recursive If recursive is set to false, all children of
     * the frame will be added as root-frames to the FrameStore.
     */
    void del(FrameHandle frame, bool recursive = true);

    //! Reparent a frame.
    /**
     * @param frame
     * @param parent
     */
    void setParent(FrameHandle frame, FrameHandle parent);

    //! Return root node of specified frame.
    /**
     * The frame-store can hold multiple-root nodes.
     * @param frame The child frame to start from.
     */
    FrameHandle root(FrameHandle frame) const;

    //! @{ Public predicates.

    //! Test if frame is a base frame.
    /**
     * That is, does not have a parent.
     * @param frame The frame to check.
     */
    bool isRoot(FrameHandle frame) const;

    /**
     * @brief Test if frame is a leaf frame.
     * 
     * That is, does not have any children.
     * @param frame The frame to check.
     */
    bool isLeaf(FrameHandle frame) const;

    //! Test if @a frame is somewhere up in the chain of parents of @a pop .
    /**
     * @param frame Potential ancestro frame.
     * @param pop Child frame.
     */
    bool isAncestorOf(FrameHandle frame, FrameHandle pop) const;

    /**
     * @brief Test if the frame belongs to this FrameStore instance.
     * 
     * @param frame The frame to check. 
     */
    bool isMember(FrameHandle frame) const throw();

    //! @}

    /**
     * @brief Return the transform of @p source expressed relative to @p frame.
     * @param frame The frame to calculate the transform relative to.
     * @param source The frame to calculate.
     * @return The transform relative to @p frame.
     */
    ATrans3 getTransform(FrameHandle frame, FrameHandle source);

    /**
     * Return the transform @p loc, which is expressed relative to @p source
     * with respect to @p frame.
     * @param frame The frame to calculate the transform relative to.
     * @param source The frame loc is expressed is.
     * @param loc The location to calculate in new coordinate frame..
     * @return The transform relative to @p frame.
     */
    ATrans3 getTransformOf(FrameHandle frame, FrameHandle source, ATrans3 const& loc);

    /**
     * Return the position @p loc, which is expressed relative to @p source
     * with respect to @p frame.
     * @param frame The frame to calculate the transform relative to.
     * @param source The frame loc is expressed is.
     * @param loc The location to calculate in new coordinate frame..
     * @return The location relative to frame.
     */
    Vector3 getPositionOf(FrameHandle frame, FrameHandle source, Vector3 const& loc);

    /**
     * Set the transform of @a frame to @a update, which is expressed relative to @a wrt_frame.
     * @param frame The frame to assign the transform to.
     * @param wrt_frame The frame @a update is expressed in.
     * @param update The transform to update the @a frame to.
     */
    void setTransform(FrameHandle frame, FrameHandle wrt_frame, ATrans3 const& update);

    /**
     * Update the transform of @a frame to @a loc, expressed relative to current transform.
     * @param frame The frame to assign the transform to.
     * @param loc The transform to update the @a frame to.
     */
    void setTransformRel(FrameHandle frame, ATrans3 const& loc);

    /**
     * @brief Query a set of frame transforms at onse
     * 
     * @param handles The frame to look up.
     * @param[out] transforms The transforms to return.
     */
    void getFrameTransforms(FrameHandleVector const& handles, ATrans3Vector& transforms) const;
    /**
     * @brief Set multiple frame transforms at onse
     * 
     * @param handles The frame to set.
     * @param transforms The transforms.
     */
    void setFrameTransforms(FrameHandleVector const& handles, ATrans3Vector const& transforms);

  protected:
    void assertUnique(std::string const& name, FrameTreeNode * parent) const;
    /** Test if the frame belongs to this FrameStore instance. */
    bool isMember(FrameTreeNode * node) const throw();

    /** Vector of FrameTreeNode pointers. */
    typedef std::vector<FrameTreeNode *> FrameTreeNodeVector;

    /** Mutex to ensure exclusive access to framestore operations. */
    mutable mutex m_mutex;
    /** The vector of root nodes. */
    FrameTreeNodeVector m_rootNodes;
  };
}

#endif // kn_FrameStore_h
