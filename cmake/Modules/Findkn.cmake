message(STATUS "Looking for kn")
#
# XXX FIXME XXX stub "search" for kn
include( SetArchitecture )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( KN_ROOT_DIR )

  message(STATUS "  KN_ROOT_DIR set to ${KN_ROOT_DIR}")
  
else( KN_ROOT_DIR )

  find_path( KN_ROOT_DIR include/irgUtilConfig.h
            HINTS ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
  if( KN_ROOT_DIR )
    message(STATUS "  kn root found at ${KN_ROOT_DIR}")
  else( KN_ROOT_DIR )
    set( KN_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
    message(STATUS "  kn root hardcoded without check to ${KN_ROOT_DIR}")
  endif( KN_ROOT_DIR )
  
endif( KN_ROOT_DIR )

set( KN_INCLUDE_DIR ${KN_ROOT_DIR}/include )
set( KN_LIBRARY_DIR ${KN_ROOT_DIR}/lib )

set( LIBRARY_NAMES
  knShare
  knMath
  knGeometry
  knFrameStore
  knMotorShare
)
get_library_list(KN ${KN_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")
get_library_imports(kn ${KN_LIBRARY_DIR} "${LIBRARY_NAMES}")

set( KN_FOUND TRUE )
