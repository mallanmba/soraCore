#
# Build knMotor library
#

set( LIB_NAME    "knSystemInfo" )
set( DIR_NAME    "knSystemInfo" )
set( EXPORT      "knSystemInfo" )
set( EXPORT_NAME "${EXPORT}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${EXPORT}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams(SystemInfoParameters.xml )

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  BatteryInfo.cpp
  CpuInfo.cpp
  FilesystemInfo.cpp
  MemoryInfo.cpp
  NetTrafficInfo.cpp
  SystemInfo.cpp
  ThermalInfo.cpp
  WirelessInfo.cpp
  WirelessInfoFreqRate.cpp
)

set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  BatteryInfo.h
  CpuInfo.h
  FilesystemInfo.h
  MemoryInfo.h
  NetTrafficInfo.h
  SystemInfo.h
  ThermalInfo.h
  WirelessInfo.h
)

include_directories( 
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${QT_QT_INCLUDE_DIR}
  ${QT_QTXML_INCLUDE_DIR}
  ${QT_QTCORE_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${KN_INCLUDE_DIR}
  )

add_definitions(-D${EXPORT_DEFINE})

link_libraries(
  ${MIRO_miroXml_LIBRARY} 
  ${KN_knShare_LIBRARY}
  ${QT_QTXML_LIBRARY}
  ${QT_QTCORE_LIBRARY}
)

add_library(${LIB_NAME} SHARED
  ${SOURCES}
  ${HEADERS}
)

link_libraries(
  ${LIB_NAME}
)

set( TEST_TARGETS
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
  )
endforeach( TEST_TARGET ${TEST_TARGETS} )

install_library(  ${LIB_NAME} )
##install_targets( /bin ${TEST_TARGETS})
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
