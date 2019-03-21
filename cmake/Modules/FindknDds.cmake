message(STATUS "Looking for knDds")

# XXX FIXME XXX stub "search" for knDds
include( SetArchitecture )
include( GetLibraryList )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( NOT KNDDS_ROOT_DIR )
  find_file( knDdsConfig_INCLUDE_H "include/knDdsConfig.h"
    ${PROJ_SRC_PARENT}/${ARCHITECTURE})
  if(knDdsConfig_INCLUDE_H) 
    string(REGEX REPLACE "/[^/]*/[^/]*$" "" KNDDS_ROOT_DIR ${knDdsConfig_INCLUDE_H} )
  else()
    set( KNDDS_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
    message(STATUS "  knDds root hardcoded without check to ${KNDDS_ROOT_DIR}")
  endif()
endif( NOT KNDDS_ROOT_DIR )


set( KNDDS_INCLUDE_DIR ${KNDDS_ROOT_DIR}/include 
                       ${KNDDS_ROOT_DIR}/include/rapidDds 
                       ${KNDDS_ROOT_DIR}/include/rapidExtDds 
                       ${KNDDS_ROOT_DIR}/include/rapidExtArcDds )
set( KNDDS_LIBRARY_DIR ${KNDDS_ROOT_DIR}/lib )
set( KNDDS_IDL_DIR ${KNDDS_ROOT_DIR}/idl )

set( LIBRARY_NAMES
  knDds
)
get_library_list(KNDDS ${KNDDS_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")

get_library_imports(knDds "${KNDDS_LIBRARY_DIR}" "${LIBRARY_NAMES}")

if( KNDDS_knDds_LIBRARY )
  set( KNDDS_FOUND TRUE )
endif( KNDDS_knDds_LIBRARY )

if( KNDDS_FOUND )
  message(STATUS "  Found knDds in ${KNDDS_ROOT_DIR}")
else( KNDDS_FOUND )
  message(STATUS "  knDds NOT found!!! ")
endif( KNDDS_FOUND )

