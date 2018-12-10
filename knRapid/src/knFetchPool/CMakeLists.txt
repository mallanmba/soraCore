set( LIB_NAME     "knFetchPool" )
set( DIR_NAME     "knFetchPool" )
set( EXPORT_NAME "${LIB_NAME}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( FetchPoolParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  FetchPool.h
  CurlFetcher.h
)

set ( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
)

if( CURL_FOUND AND CURL_HAS_SSH )
  set( SOURCES ${SOURCES}
    CurlFetcher.cpp
  )
else( CURL_FOUND AND CURL_HAS_SSH )
  set( SOURCES ${SOURCES}
    NoopFetcher.cpp
  )
endif( CURL_FOUND AND CURL_HAS_SSH )

include_directories( 
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${KN_INCLUDE_DIR}
)

link_directories( ${Boost_LIBRARY_DIRS} )

link_libraries (
  ${MIRO_miroXml_LIBRARY}
  ${MIRO_miroCore_LIBRARY}
  ${Boost_SYSTEM_LIBRARY}
  ${Boost_THREAD_LIBRARY}
  ${QT_LIBRARIES}
)

if( CURL_FOUND AND CURL_HAS_SSH )
  include_directories(
    ${CURL_INCLUDE_DIR}
  )

  link_libraries(
    ${CURL_LIBRARIES}
  )
endif( CURL_FOUND AND CURL_HAS_SSH )

add_definitions(-D${EXPORT_DEFINE})

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

##----------------------------------------
set( TEST_TARGETS
  fetchPoolTest
)

link_libraries(
  ${LIB_NAME}
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
  )
endforeach( TEST_TARGET ${TEST_TARGETS} )

##----------------------------------------
install_library( ${LIB_NAME} )
install_targets( /tests ${TEST_TARGETS} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
