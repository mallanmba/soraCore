set( LIB_NAME     "knFrameStoreSvc" )
set( DIR_NAME     "knFrameStoreSvc" )
set( EXPORT_NAME "${LIB_NAME}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( FrameStoreParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  FrameStoreConfigSvc.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  FrameStoreConfigSvc.cpp
)

include_directories (
  ${MIRO_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${ACE_INCLUDE_DIR}
)

link_libraries (
  rapidFrameStore
  rapidUtil
  ${MIRO_miroXml_LIBRARY}
)

if ( RTIDDS_FOUND )
  set( HEADERS
    ${HEADERS}
    FrameStoreUpdaterSvc.h
  )
  set( SOURCES
    ${SOURCES}
    FrameStoreUpdaterSvc.cpp
  )
  link_libraries( 
    ${KNDDS_knDds_LIBRARY}
    ${KNRAPID_rapidDds_LIBRARY}
  )
  include_directories(
    ${KNRAPID_INCLUDE_DIR}
    ${RTIDDS_INCLUDE_DIR}
  )
  add_srcdir_definitions(${RTIDDS_DEFINES} RTIDDS_FOUND )
endif ( RTIDDS_FOUND )

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
  ${EXPORT_FILE}
)

# export define only applies to lib; must go *after* add_library() call
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )


set (CONFIG_FILES
  MarscapeFrames.xml
  RoverscapeFrames.xml
  Mvp2014Frames.xml
  FieldTestSiteFrames.xml
  K10RedFrames.xml
  K10RedUpdaterConfig.xml
  KRex2Frames.xml
  KRex2UpdaterConfig.xml
  LerAFrames.xml
  LerBFrames.xml
  K11Frames.xml
  K10MiniFrames.xml
  Centaur2Frames.xml
  Centaur2UpdaterConfig.xml
)

##----------------------------------------
if ( RTIDDS_FOUND )
  set( TARGETS
    frameStoreRegressions
    testFrameStore
    testFrameStoreConfigPublisher
  )
  link_libraries( ${LIB_NAME} ${KN_knShare_LIBRARY}
  )

  foreach( TARGET ${TARGETS} ) 
    add_executable( ${TARGET} 
      ${TARGET}.cpp
    )
  endforeach( TARGET ${TARGETS} ) 

  install_targets( /tests ${TARGETS} )
endif ( RTIDDS_FOUND )

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_files  ( /etc/${DIR_NAME} FILES ${CONFIG_FILES} )

