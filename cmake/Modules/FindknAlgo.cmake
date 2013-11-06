message(STATUS "Looking for knAlgo")
#
# XXX FIXME XXX stub "search" for knAlgo
include( SetArchitecture )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( NOT KNALGO_ROOT_DIR )
  set( KNALGO_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
endif( NOT KNALGO_ROOT_DIR )

message(STATUS "  knAlgo root hardcoded without check to ${KNALGO_ROOT_DIR}")

set( KNALGO_INCLUDE_DIR ${KNALGO_ROOT_DIR}/include )
set( KNALGO_LIBRARY_DIR ${KNALGO_ROOT_DIR}/lib )
set( KNALGO_FOUND TRUE )

set( LIBRARY_NAMES
  knArcNav
  knCoordinatedWheelLocomotion
  knDeadReckoning
  knHfta
  knLocalMapEval
  knLocomotionModel
  knSunTracker
  knStereo
  knFieldDMap
)
get_library_list(KNALGO ${KNALGO_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")
get_library_imports(knAlgo "${KNALGO_LIBRARY_DIR}" "${LIBRARY_NAMES}")



