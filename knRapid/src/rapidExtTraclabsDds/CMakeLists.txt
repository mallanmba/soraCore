set( LIB_NAME       "rapidExtTraclabsDds" )
set( DIR_NAME       "${LIB_NAME}" )
set( EXPORT_SUFFIX  "${LIB_NAME}" )

file( GLOB ALL_IDL_FILENAMES "${CMAKE_CURRENT_SOURCE_DIR}/*.idl" )

set( EXTRA_RTIDDS_IDL_ARGS "-I${CMAKE_CURRENT_SOURCE_DIR}/../rapidDds" )

# use rti dds to generate the sources
#rtidds_wrap_idl( ${ALL_IDL_FILENAMES} )
# use pre-compiled sources so we don't have to redistributed rapid
file( GLOB RTIDDS_IDL_GENERATED_XMLS "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.xml" )
file( GLOB RTIDDS_IDL_GENERATED_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.h" )
file( GLOB RTIDDS_IDL_GENERATED "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.cxx" )

include_directories( 
  ${RTIDDS_INCLUDE_DIR} 
  ${CMAKE_CURRENT_SOURCE_DIR}/../rapidDds/generated
)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated )

link_libraries( 
  ${RTIDDS_LIBRARIES} 
  rapidDds
)

add_srcdir_definitions("NDDS_USER_DLL_EXPORT" ${RTIDDS_DEFINES})

add_library( ${LIB_NAME} SHARED
  ${RTIDDS_IDL_GENERATED}
)

# make sure rapidDds headers have been generated before we build
add_dependencies( ${LIB_NAME} rapidDds )

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME}              FILES ${RTIDDS_IDL_GENERATED_HEADERS})
install_files  ( /idl/${DIR_NAME}                  FILES ${ALL_IDL_FILENAMES} )
install_files  ( /etc/rtiRoutingService/           FILES ${RTIDDS_IDL_GENERATED_XMLS} )
install_files  ( /etc/rtiRecordingService/types/   FILES ${RTIDDS_IDL_GENERATED_XMLS} )
install_files  ( /etc/rtiRoutingServiceMcc/        FILES ${RTIDDS_IDL_GENERATED_XMLS} )
install_files  ( /etc/rtiRoutingServiceGramps/     FILES ${RTIDDS_IDL_GENERATED_XMLS} )
install_files  ( /etc/rtiRoutingServiceRoverscape/ FILES ${RTIDDS_IDL_GENERATED_XMLS} )
install_files  ( /etc/rtiRoutingServiceMvp/        FILES ${RTIDDS_IDL_GENERATED_XMLS} )
install_files  ( /etc/rtiRoutingServiceSnrf/       FILES ${RTIDDS_IDL_GENERATED_XMLS} )
