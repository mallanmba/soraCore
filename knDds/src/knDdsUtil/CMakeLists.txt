set( LIB_NAME     "knDdsUtil" )
set( DIR_NAME     "knDdsUtil" )
set( EXPORT_NAME  "knDdsUtil_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

##------------------------------------------------
set( HEADERS
  ${EXPORT_FILE}
  DdsBuiltInIo.h
  GenericPrinter_T.h
  GenericBuiltinPrinter_T.h
)

set( SOURCES
  DdsBuiltInIo.cpp
  GenericPrinter_T.cpp
  GenericBuiltinPrinter_T.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
)

link_libraries(
  knDds  
)

add_srcdir_definitions(${RTIDDS_DEFINES} RTIDDS_FOUND )

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )

## test targets
##----------------------------------------

link_libraries(
  ${LIB_NAME}
)

set( TEST_TARGETS
  ddsParticipantPrinter
  ddsTopicPrinter
  ddsPublicationPrinter
  ddsSubscriptionPrinter
  ddsPubSubPrinter
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET}
  ${TEST_TARGET}.cpp
  )
endforeach( TEST_TARGET ${TEST_TARGETS} )
install_targets( /bin ${TEST_TARGETS} )

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
