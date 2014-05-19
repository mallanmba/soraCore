#
# Build knMotorShare library
#

set( LIB_NAME    "knMotorShare" )
set( DIR_NAME    "knMotorShare" )
set( EXPORT      "knMotorShare" )
set( EXPORT_NAME "${EXPORT}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${EXPORT}_BUILD_DLL" EXPORT_DEFINE )

set( SOURCES
  MotorGroupFuture.cpp
  WheelGroupState.cpp
  WheelGroupFuture.cpp
  LocomotorCmd.cpp
)

set( HEADERS
  ${EXPORT_FILE}
  MotorGroupFuture.h
  WheelGroupState.h
  WheelGroupFuture.h
  LocomotorCmd.h
)

include_directories(
  ${EIGEN3_INCLUDE_DIR}
)

add_definitions(-D${EXPORT_DEFINE})

add_library(${LIB_NAME} SHARED
  ${SOURCES}
  ${HEADERS}
)

set( TEST_TARGETS
  testMWGroupFutureIO
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
  )
  target_link_libraries( ${TEST_TARGET} ${LIB_NAME})
endforeach( TEST_TARGET ${TEST_TARGETS} )

install_library(  ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /tests ${TEST_TARGETS} )
