message(STATUS "Looking for knHw")
#
# XXX FIXME XXX stub "search" for knHw
include( SetArchitecture )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( NOT KNHW_ROOT_DIR )
  set( KNHW_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
endif( NOT KNHW_ROOT_DIR )

message(STATUS "  knHw root hardcoded without check to ${KNHW_ROOT_DIR}")

set( KNHW_INCLUDE_DIR ${KNHW_ROOT_DIR}/include )
set( KNHW_LIBRARY_DIR ${KNHW_ROOT_DIR}/lib )

set( LIBRARY_NAMES
  knBb232Sda12
  knBiclopsPantilt
  knCharger
  knDeployer
  knDpPantilt
  knDlp
  knDgps
  knHmrCompass
  knHwShare
  knKvh
  knMotor
  knSimMotor
  knProtoMotor
  knMala
  knNirvss
  knPicservo
  knSerial
  knSimMotor
  knSonyPtz
  knTyzxG2
  knUrgLrf
  knUsbCamera
  knFirewireCamera
  knVelodyne
  knXrf
  knXSens
  knHydra
)
get_library_list(KNHW ${KNHW_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")
get_library_imports(knHw "${KNHW_LIBRARY_DIR}" "${LIBRARY_NAMES}")

set( KNHW_FOUND TRUE )
