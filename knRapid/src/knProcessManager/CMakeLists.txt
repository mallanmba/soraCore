set( LIB_NAME     "knProcessManager" )
set( DIR_NAME     "knProcessManager" )
set( EXPORT_NAME "${LIB_NAME}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( ProcessManagerParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  PipeHandler.h
  ProcessData.h
  ProcessManagerHelper.h
  ProcessManagerSvc.h
  ProcMgrSubsysImpl.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  PipeHandler.cpp
  ProcessData.cpp
  ProcessManagerHelper.cpp
  ProcessManagerSvc.cpp
  ProcMgrSubsysImpl.cpp
)

include_directories (
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${KN_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}/../rapidDds
)

link_libraries (
  rapidCommanding
  rapidExtIo
)

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

#XXX should NDDS_USER_DLL_EXPORT be here? This is only needed
#XXX when DDS IDL generated source code is compiled
add_target_definitions( ${LIB_NAME} NDDS_USER_DLL_EXPORT )
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )
add_srcdir_definitions( ${RTIDDS_DEFINES} )

##----------------------------------------
set( CONFIG_FILES
  rctlCfgTest.xml
)

set( TARGETS
  rctld
)

link_libraries (
 ${LIB_NAME}
)
if (  KNRAPID_BUILD_knSystemInfoSvc )
  link_libraries( knSystemInfoSvc )
endif (  KNRAPID_BUILD_knSystemInfoSvc )

foreach( TARGET ${TARGETS} )
  add_executable( ${TARGET}
    ${TARGET}.cpp
  )
endforeach( TARGET ${TARGETS} )


install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_files  ( /etc/${DIR_NAME} FILES ${CONFIG_FILES} )
install_targets( /bin ${TARGETS} )

