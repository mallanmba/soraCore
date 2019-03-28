set( LIB_NAME     "rapidExtArcIo" )
set( DIR_NAME     "rapidExtArcIo" )
set( EXPORT_NAME  "rapidExtArcIo_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( RapidExtArcIoParameters.xml StateMachineDescriptionParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  BatteryPackIo.h
  EphemerisIo.h
  EphemerisProvider.h
  Float32Io.h
  Float32Provider.h
  GenericIo.h
  GeometryIo.h
  GpsIo.h
  GpsProvider.h
  HydraIo.h
  HydraProvider.h
  SpectrumIo.h
  SpectrumProvider.h
  StateMachineIo.h
  StateMachineProvider.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  BatteryPackIo.cpp
  EphemerisIo.cpp
  EphemerisProvider.cpp
  Float32Io.cpp
  Float32Provider.cpp
  GenericIo.cpp
  GeometryIo.cpp
  GpsIo.cpp
  GpsProvider.cpp
  HydraIo.cpp
  HydraProvider.cpp
  SpectrumIo.cpp
  SpectrumProvider.cpp
  StateMachineIo.cpp
  StateMachineProvider.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}/../rapidDds
)

link_libraries(
  rapidDds
  rapidExtArcDds
  rapidUtil
  rapidIo
  rapidExtIo
  ${KN_knShare_LIBRARY}  
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
# rapid ext arc printers
#=============================

link_libraries(
  ${LIB_NAME}
)

set( TARGETS
 batteryPackPrinter
 ephemerisPrinter
 dlpStatusConfigPrinter
 dlpStatusSamplePrinter
 float32Printer
 geometryMeshPrinter
 gpsPrinter
 hydraPrinter
 mobilitySamplePrinter
 spectrumPrinter
 stateMachinePrinter
 systemInfoConfigPrinter
 systemInfoSamplePrinter
 wheelGroupSamplePrinter
)

foreach( TARGET ${TARGETS} ) 
  add_executable( ${TARGET} 
    ${TARGET}.cpp
  )
endforeach( TARGET ${TARGETS} ) 

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /bin ${TARGETS} )
