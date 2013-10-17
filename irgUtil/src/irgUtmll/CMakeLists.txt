set( LIB_NAME     irgUtmll )
set( DIR_NAME     ${LIB_NAME} )
set( EXPORT_NAME "${LIB_NAME}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

set( SOURCES
  Utmll.cpp 
  LatLonConverter.cpp
)

set( HEADERS
  ${EXPORT_FILE}
  Utmll.h
  LatLonConverter.h
)

include_directories(
  ${ACE_INCLUDE_DIR}
)

link_libraries( 
  ${ACE_LIBRARIES}
)

add_definitions(-D${EXPORT_DEFINE})

add_library(${LIB_NAME} SHARED
  ${SOURCES}
  ${HEADERS}
)

set( TARGETS
  utmToLatLon 
  latLonToUtm 
)

link_libraries( 
  ${LIB_NAME}
)

foreach( TEST_TARGET ${TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
    )
endforeach( TEST_TARGET ${TARGETS} )

install_targets( /bin ${TARGETS})

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
