set( LIB_NAME     "irgSha1" )
set( DIR_NAME     "irgSha1" )
set( EXPORT_NAME "${LIB_NAME}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Library
##------------------------------------------------
set( HEADERS
  ${EXPORT_FILE}
  Sha1.h
)

set( SOURCES
  Sha1.cpp
)

add_definitions(-D${EXPORT_DEFINE})
include_directories(
  ${ACE_INCLUDE_DIR}
)

link_libraries (
  ${ACE_LIBRARIES} 
)

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

##----------------------------------------
set( TARGETS
  testSha1
)

link_libraries( ${LIB_NAME} )

foreach( TARGET ${TARGETS} )
  add_executable( ${TARGET} 
    ${TARGET}.cpp 
  )
endforeach( TARGET ${TARGETS} )

##----------------------------------------
install_library( ${LIB_NAME} )
install_targets( /bin ${TARGETS})
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
