#
# Build knGeometry library
#

set( LIB_NAME    "knGeometry" )
set( DIR_NAME    "knGeometry" )
set( EXPORT      "knGeometry" )
set( EXPORT_NAME "${EXPORT}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${EXPORT}_BUILD_DLL" EXPORT_DEFINE )

set( SOURCES
  PointCloud.cpp
  Polygon.cpp
)

set( HEADERS
  ${EXPORT_FILE}
  PointCloud.h
  Polygon.h
)

include_directories(
  ${Boost_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
)

add_library(${LIB_NAME} SHARED
  ${SOURCES}
  ${HEADERS}
)

# export define only applies to lib; must go *after* add_library() call
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )

target_link_libraries( ${LIB_NAME}
 knFrameStore
 knMath
 ${Boost_SIGNALS_LIBRARY}
 ${Boost_THREAD_LIBRARY}
 ${Boost_SYSTEM_LIBRARY}
 ${Boost_CHRONO_LIBRARY}
)

set( TEST_TARGETS
  pointCloudTest
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
  )
  target_link_libraries( ${TEST_TARGET} ${LIB_NAME} knFrameStore knMath )
endforeach( TEST_TARGET ${TEST_TARGETS} )

install_library(  ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /tests ${TEST_TARGETS} )
