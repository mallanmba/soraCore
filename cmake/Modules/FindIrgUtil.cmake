message(STATUS "Looking for irgUtil")
include( SetArchitecture )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( IRGUTIL_ROOT_DIR )

  message(STATUS "  IRGUTIL_ROOT_DIR set to ${IRGUTIL_ROOT_DIR}")
  
else( IRGUTIL_ROOT_DIR )

  find_path( IRGUTIL_ROOT_DIR include/irgUtilConfig.h
            HINTS ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
  if( IRGUTIL_ROOT_DIR )
    message(STATUS "  irgUtil root found at ${IRGUTIL_ROOT_DIR}")
  else( IRGUTIL_ROOT_DIR )
    set( IRGUTIL_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
    message(STATUS "  irgUtil root hardcoded without check to ${IRGUTIL_ROOT_DIR}")
  endif( IRGUTIL_ROOT_DIR )
  
endif( IRGUTIL_ROOT_DIR )

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

