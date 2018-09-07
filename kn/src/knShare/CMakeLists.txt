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
  FileImageData.cpp
  MemImageData.cpp
  Array2DView.cpp
  Singleton.cpp
  StateMachine.cpp
  StateMachineRepository.cpp
)

set( HEADERS
  ${EXPORT_FILE}
  ConditionVariable.h
  Functional.h
  Image.h
  ImageData.h
  FileImageData.h
  Log.h
  MemImageData.h
  Mutex.h
  LruPool.h
  Repository.h
  Array2DView.h
  Singleton.h
  SmartPtr.h
  StateMachine.h
  StateMachineRepository.h
  Thread.h
)

if (${Boost_CHRONO_FOUND})
set( HEADERS
  ${HEADERS}
  Chrono.h
  Time.h
)
set ( SOURCES
  ${SOURCES}
  Time.cpp
)
endif (${Boost_CHRONO_FOUND})

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

install_library(  ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )

add_subdirectory( tests )
