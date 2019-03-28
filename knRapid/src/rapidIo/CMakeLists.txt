set( LIB_NAME     "rapidIo" )
set( DIR_NAME     "rapidIo" )
set( EXPORT_NAME  "rapidIo_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( RapidIoParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  AgentIo.h
  AgentProvider.h
  BaseTypesIo.h
  CommandAckPair.h
  HeaderIo.h
  JointIo.h
  JointProvider.h
  KeyTypeValue.h
  ImageSensorProvider.h
  MacroIo.h
  MacroProvider.h
  MessageIo.h
  PointCloudIo.h
  PointCloudProvider.h
  PositionIo.h
  PositionProvider.h
  TextMessager.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  AgentIo.cpp
  AgentProvider.cpp
  BaseTypesIo.cpp
  CommandAckPair.cpp
  HeaderIo.cpp
  JointIo.cpp
  JointProvider.cpp
  KeyTypeValue.cpp
  ImageSensorProvider.cpp
  MacroIo.cpp
  MacroProvider.cpp
  MessageIo.cpp
  PointCloudIo.cpp
  PointCloudProvider.cpp
  PositionIo.cpp
  PositionProvider.cpp
  TextMessager.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
)

link_libraries(
  rapidDds
  rapidUtil
  ${KN_knMath_LIBRARY}
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
# rapid printers
#=============================

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )

if ( KNRAPID_HAS_DDS )
  set( TARGETS
    accessControlStatePrinter
    ackPrinter
    agentPrinter
    commandPrinter
#   commandAckPrinter
    commandConfigPrinter
    fileAnnouncePrinter
    fileQueueConfigPrinter
    fileQueueEntryStatePrinter
    fileQueueReceiverEntryStatePrinter
    fileQueueReceiverSamplePrinter
    fileQueueSamplePrinter
    fileQueueStatePrinter
    frameStoreConfigPrinter
    macroConfigPrinter
    macroStatePrinter
    positionCovPrinter
    positionPrinter
    pointCloudPrinter
    queueStatePrinter
    jointPrinter
    imageSensorSamplePrinter
    textMessageClient
    textMessagePrinter
  )

  foreach( TARGET ${TARGETS} )
    add_executable( ${TARGET}
      ${TARGET}.cpp
    )
    target_link_libraries(${TARGET}
      ${LIB_NAME}
    )
  endforeach( TARGET ${TARGETS} )
  target_link_libraries( fileQueueEntryStatePrinter ${Boost_PROGRAM_OPTIONS_LIBRARY})

  install_targets( /bin ${TARGETS} )
endif()
