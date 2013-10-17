#
# Build knFrameStore library
#
set( DIR_NAME    "knFrameStore" )
set( LIB_NAME    "knFrameStore" )
set( EXPORT      "knFrameStore" )
set( EXPORT_NAME "${EXPORT}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${EXPORT}_BUILD_DLL" EXPORT_DEFINE )

set( HEADERS
  ${EXPORT_FILE}
  Frame.h
  FrameHandle.h
  FrameStore.h
  FrameStoreSingleton.h
  FrameTreeNode.h
  TreeNode.h
)

set( SOURCES
  FrameHandle.cpp
  FrameStore.cpp
  FrameStoreSingleton.cpp
  FrameTreeNode.cpp
)

add_library( ${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

add_definitions(-D${EXPORT_DEFINE})

# export define only applies to lib; must go *after* add_library() call
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )

target_link_libraries( ${LIB_NAME}
  knShare
  ${ACE_LIBRARIES}
  ${Boost_THREAD_LIBRARY}
  ${Boost_SYSTEM_LIBRARY}
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
)

set( TEST_TARGETS
#  aTransTest
  frameStoreTest
  frameTreeNodeTest
  treeNodeTest
)

link_libraries(
  ${LIB_NAME}
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
  )
endforeach( TEST_TARGET ${TEST_TARGETS} )

install_library(  ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /tests ${TEST_TARGETS} )
