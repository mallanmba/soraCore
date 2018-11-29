set( LIB_NAME     "knRaft" )
set( DIR_NAME     "knRaft" )
set( EXPORT_NAME  "knRaft_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( RaftParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  FileAnnouncer.h
  FileQueue.h
  DataPriorityController.h
  RaftSubsysImpl.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  DataPriorityController.cpp
  FileAnnouncer.cpp
  FileQueue.cpp
  RaftSubsysImpl.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${IRGUTIL_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
)

link_directories( ${Boost_LIBRARY_DIRS} )

link_libraries(
  rapidCommanding
  knFetchPool
  ${RTIDDS_LIBRARIES}
  ${IRGUTIL_irgSha1_LIBRARY}
)

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

# export define only applies to lib
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )
# DDS defines apply to lib and test targets (all projects in this directory)
add_srcdir_definitions( ${RTIDDS_DEFINES} )

set (CONFIG_FILES
  RaftEndpointDescriptions.xml
  RaftDrats2011.xml
  RaftDrats2011AutoQueueing.xml
  RAFT_DRATS2011_PROFILES.xml
)

set( TARGETS
 raftFileQueue
 raftFileReceiver
 raftFileAnnouncePublisher
)

foreach( TARGET ${TARGETS} )
  add_executable( ${TARGET}
    ${TARGET}.cpp
  )
endforeach( TARGET ${TARGETS} )

target_link_libraries( raftFileQueue ${LIB_NAME} )
target_link_libraries( raftFileReceiver ${LIB_NAME} ${Boost_FILESYSTEM_LIBRARY} )
target_link_libraries( raftFileAnnouncePublisher ${LIB_NAME} )

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_files  ( /etc/${DIR_NAME} FILES ${CONFIG_FILES} )
install_targets( /bin ${TARGETS} )

