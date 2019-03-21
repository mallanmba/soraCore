message(STATUS "Looking for irgUtil")
#
# XXX FIXME XXX stub "search" for IRGUTIL
include( SetArchitecture )
include( GetLibraryList )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( NOT IRGUTIL_ROOT_DIR )
  find_file( irgUtilConfig_INCLUDE_H "include/irgUtilConfig.h"
    ${PROJ_SRC_PARENT}/${ARCHITECTURE})
  if(irgUtilConfig_INCLUDE_H) 
    string(REGEX REPLACE "/[^/]*/[^/]*$" "" IRGUTIL_ROOT_DIR ${irgUtilConfig_INCLUDE_H} )
  else()
    set( IRGUTIL_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
    message(STATUS "  irgUtil root hardcoded without check to ${IRGUTIL_ROOT_DIR}")
  endif()
endif( NOT IRGUTIL_ROOT_DIR )

set( IRGUTIL_INCLUDE_DIR ${IRGUTIL_ROOT_DIR}/include )
set( IRGUTIL_LIBRARY_DIR ${IRGUTIL_ROOT_DIR}/lib )
set( IRGUTIL_FOUND TRUE )

set( LIBRARY_NAMES
  irgUtmll
  irgSha1
)

get_library_list(IRGUTIL ${IRGUTIL_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")

# experimental:
get_library_imports(irgUtil "${IRGUTIL_LIBRARY_DIR}" "${LIBRARY_NAMES}")

