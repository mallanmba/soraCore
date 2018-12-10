set( LIB_NAME     "rapidFrameStore" )
set( DIR_NAME     "rapidFrameStore" )
set( EXPORT_NAME "${DIR_NAME}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( RapidFrameStoreParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  FrameExtras.h
  FrameStoreInit.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  FrameExtras.cpp
  FrameStoreInit.cpp
)

include_directories (
  ${MIRO_INCLUDE_DIR}
  ${ACE_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
)

link_libraries (
  ${MIRO_miroXml_LIBRARY}
  rapidUtil
)


if ( KNRAPID_HAS_DDS )
  set( HEADERS
    ${HEADERS}
    FsConfigUpdater.h
    FsPositionUpdater.h
    FsJointUpdater.h
  )
  set( SOURCES
    ${SOURCES}
    FsConfigUpdater.cpp
    FsPositionUpdater.cpp
    FsJointUpdater.cpp
  )
  link_libraries( 
    rapidDds
    rapidUtil
    rapidIo
  )
  include_directories(
    ${KNDDS_INCLUDE_DIR}
    ${RTIDDS_INCLUDE_DIR}
  )
  add_srcdir_definitions(${RTIDDS_DEFINES} RTIDDS_FOUND )
endif ( KNRAPID_HAS_DDS )

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )

##----------------------------------------
install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
