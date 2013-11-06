message(STATUS "Looking for knRapid")

# XXX FIXME XXX stub "search" for knRapid
include( SetArchitecture )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( NOT KNRAPID_ROOT_DIR )
  set( KNRAPID_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
endif( NOT KNRAPID_ROOT_DIR )

message(STATUS "  knRapid root hardcoded without check to ${KNRAPID_ROOT_DIR}")

set( KNRAPID_INCLUDE_DIR ${KNRAPID_ROOT_DIR}/include 
                       ${KNRAPID_ROOT_DIR}/include/rapidDds 
                       ${KNRAPID_ROOT_DIR}/include/rapidExtDds 
                       ${KNRAPID_ROOT_DIR}/include/rapidExtArcDds )
set( KNRAPID_LIBRARY_DIR ${KNRAPID_ROOT_DIR}/lib )
set( KNRAPID_IDL_DIR ${KNRAPID_ROOT_DIR}/idl )

set( LIBRARY_NAMES
  rapidFrameStore
  rapidDds
  rapidExtDds
  rapidExtArcDds
  rapidCommanding
  rapidUtil
  rapidIo
  rapidExtIo
  rapidExtArcIo
  knFrameStoreSvc
  knSystemInfoSvc
  knRaft
  knProcessManager
)
get_library_list(KNRAPID ${KNRAPID_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")

get_library_imports(knRapid "${KNRAPID_LIBRARY_DIR}" "${LIBRARY_NAMES}")

if( KNRAPID_rapidDds_LIBRARY OR KNRAPID_rapidFrameStore_LIBRARY )
  set( KNRAPID_FOUND TRUE )
endif( KNRAPID_rapidDds_LIBRARY OR KNRAPID_rapidFrameStore_LIBRARY )

if( KNRAPID_FOUND )
  message(STATUS "  Found knRapid in ${KNRAPID_ROOT_DIR}")
else( KNRAPID_FOUND )
  message(STATUS "  knRapid NOT found!!! ")
endif( KNRAPID_FOUND )

