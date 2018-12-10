set( LIB_NAME     "rapidUtil" )
set( DIR_NAME     "rapidUtil" )
set( EXPORT_NAME  "rapidUtil_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( RapidUtilParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  GenericPrinter_T.h
  Provider_T.h
  Receiver_T.h
  TopicPair.h
  TopicPairApp_T.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  GenericPrinter_T.cpp
  Provider_T.cpp
  Receiver_T.cpp
  TopicPair.cpp
  TopicPairApp_T.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
)

link_libraries(
  ${MIRO_miroXml_LIBRARY}  
)


if ( KNRAPID_HAS_DDS )
  set( HEADERS
    ${HEADERS}
    FramesHelper.h
    RapidHelper.h
    Transform3DHelper.h
  )
  set( SOURCES
    ${SOURCES}
    FramesHelper.cpp
    RapidHelper.cpp
    Transform3DHelper.cpp
  )
  link_libraries(
    rapidDds
    ${KN_knFrameStore_LIBRARY}
    ${KNDDS_knDds_LIBRARY}  
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

## test targets
##----------------------------------------

if ( KNRAPID_HAS_DDS )
  link_libraries(
    ${LIB_NAME}
  )

  set( TEST_TARGETS
   rapidTimeTest
  )

  foreach( TEST_TARGET ${TEST_TARGETS} )
    add_executable( ${TEST_TARGET}
    ${TEST_TARGET}.cpp
    )
  endforeach( TEST_TARGET ${TEST_TARGETS} )
  install_targets( /bin ${TEST_TARGETS} )
endif ( KNRAPID_HAS_DDS )

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
