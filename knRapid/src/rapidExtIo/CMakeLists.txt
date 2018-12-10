set( LIB_NAME     "rapidExtIo" )
set( DIR_NAME     "rapidExtIo" )
set( EXPORT_NAME  "rapidExtIo_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( RapidExtIoParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  NavMapHelper.h
  NavMapIo.h
  NavMapProvider.h
  ProcessManagerIo.h
  ProcessManagerProvider.h
  RangeScanIo.h
  RangeScanProvider.h
  Trajectory2DIo.h
  Trajectory2DProvider.h
  Trajectory2DReceiver.h
  TrajectoryIo.h
  TrajectoryProvider.h
  VEStopIo.h
  VEStopProvider.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  NavMapHelper.cpp
  NavMapIo.cpp
  NavMapProvider.cpp
  ProcessManagerIo.cpp
  ProcessManagerProvider.cpp
  RangeScanIo.cpp
  RangeScanProvider.cpp
  Trajectory2DIo.cpp
  Trajectory2DProvider.cpp
  Trajectory2DReceiver.cpp
  TrajectoryIo.cpp
  TrajectoryProvider.cpp
  VEStopIo.cpp
  VEStopProvider.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}/../rapidDds
)

link_libraries(
  rapidDds
  rapidExtDds
  rapidUtil
  rapidIo
  ${MIRO_miroXml_LIBRARY}  
  ${KNDDS_knDds_LIBRARY}  
)


add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )
add_srcdir_definitions(${RTIDDS_DEFINES} RTIDDS_FOUND )

#
# rapid ext printers
#=============================

link_libraries(
  ${LIB_NAME}
)

set( TARGETS
 processIoPrinter
 processManagerPrinter
 navMapPrinter
 rangeScanPrinter
 trajectoryPrinter
 trajectory2DPrinter
 vEStopPrinter
)

foreach( TARGET ${TARGETS} ) 
  add_executable( ${TARGET} 
    ${TARGET}.cpp
  )
endforeach( TARGET ${TARGETS} ) 

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /bin ${TARGETS} )
