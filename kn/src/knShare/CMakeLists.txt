#
# Build knShare library
#

set( LIB_NAME    "knShare" )
set( DIR_NAME    "knShare" )
set( EXPORT      "knShare" )
set( EXPORT_NAME "${EXPORT}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${EXPORT}_BUILD_DLL" EXPORT_DEFINE )

set( SOURCES
  Image.cpp
  ImageData.cpp
  MemImageData.cpp
  Array2DView.cpp
  Singleton.cpp
  StateMachine.cpp
  StateMachineRepository.cpp
)

set( HEADERS
  ${EXPORT_FILE}
  Image.h
  ImageData.h
  MemImageData.h
  Repository.h
  Array2DView.h
  Singleton.h
  StateMachine.h
  StateMachineRepository.h
  Time.h
)

include_directories(
  ${Boost_INCLUDE_DIR}
)

add_library(${LIB_NAME} SHARED
  ${SOURCES}
  ${HEADERS}
)

# export define only applies to lib; must go *after* add_library() call
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )

target_link_libraries( ${LIB_NAME}
 ${Boost_SIGNALS_LIBRARY}
 ${Boost_THREAD_LIBRARY}
 ${Boost_SYSTEM_LIBRARY}
 ${Boost_CHRONO_LIBRARY}
)

set( TEST_TARGETS
  stateMachineTest
  array2DTest
  array2DPerformance
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

add_subdirectory( tests )
