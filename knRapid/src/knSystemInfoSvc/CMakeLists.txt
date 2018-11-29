set( LIB_NAME     "knSystemInfoSvc" )
set( DIR_NAME     "knSystemInfoSvc" )
set( EXPORT_NAME  "knSystemInfoSvc_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

set( PARAM_FILES SystemInfoSvcParameters.xml )

## Miro parameters
##------------------------------------------------
miro_makeparams( ${PARAM_FILES} )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  SystemInfoSvc.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  SystemInfoSvc.cpp
)

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}/../rapidDds
  ${ACE_INCLUDE_DIR}
  ${KN_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
)

link_libraries(
  knSystemInfo
  rapidUtil
  rapidDds
  rapidExtDds
  rapidIo
  rapidExtIo
)

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

# export define only applies to lib
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )
# DDS defines apply to lib and test targets (all projects in this directory)
add_srcdir_definitions( ${RTIDDS_DEFINES} )

set( TARGETS rapidSystemInfo )

foreach( TARGET ${TARGETS} ) 
  add_executable( ${TARGET} 
    ${TARGET}.cpp
      )
endforeach( TARGET ${TARGETS} ) 

target_link_libraries( rapidSystemInfo ${LIB_NAME} ${KNDDS_knDds_LIBRARY} )

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_files  ( /etc/${DIR_NAME} FILES ${CONFIG_FILES} )
install_targets( /bin ${TARGETS} )
