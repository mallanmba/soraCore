#
# Build knMath library
#

set( LIB_NAME    "knMath" )
set( DIR_NAME    "knMath" )
set( EXPORT      "knMath" )
set( EXPORT_NAME "${EXPORT}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${EXPORT}_BUILD_DLL" EXPORT_DEFINE )

set( SOURCES
  ATrans.cpp
  RotMat3d.cpp
)

set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  ATrans.h
  Distance.h
  EulerAngles.h
  Matrix.h
  Quaternion.h
  RotMat3d.h
  Vector.h
  Functions.h
)

include_directories(
  ${EIGEN3_INCLUDE_DIR}
)

add_definitions(-D${EXPORT_DEFINE})

add_library(${LIB_NAME} SHARED
  ${SOURCES}
  ${HEADERS}
)

link_libraries(
  ${LIB_NAME}
)

set( TEST_TARGETS
  transformTest
  alignedBoxTest
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
  )
endforeach( TEST_TARGET ${TEST_TARGETS} )

install_library(  ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /tests ${TEST_TARGETS} )
