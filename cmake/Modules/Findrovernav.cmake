######################################################################
# Find script for rovernav
#
# Output Variables:
# -----------------
# ROVERNAV_FOUND                : TRUE if search succeded
# ROVERNAV_INCLUDE_DIR          : include path
# ROVERNAV_LIBRARY_DIR          : library path
# ROVERNAV_LIBRARIES            : All rovernav libraries that were found
# ROVERNAV_rnCore_LIBRARY
# ROVERNAV_rnAlgorithm_LIBRARY
# ROVERNAV_rnMath_LIBRARY
# ROVERNAV_rnEstimation_LIBRARY
# ROVERNAV_rnSensors_LIBRARY
# ROVERNAV_rnPointcloud_LIBRARY
# ROVERNAV_rnTravmap_LIBRARY
# ROVERNAV_rnSpeedmap_LIBRARY
# ROVERNAV_rnGui_LIBRARY
# 
######################################################################
set( ROVERNAV_NAME "rovernav" )

message(STATUS "Looking for ${ROVERNAV_NAME}...")

include( GetLibraryList )

if( NOT ROVERNAV_ROOT_DIR )
  string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})
  
  find_file( ROVERNAV_INCLUDE_H "rovernav/core/Functions.h"
    ${PROJ_SRC_PARENT}/${ARCHITECTURE}/include
  )
  # Set the root to 4 directories above 
  string(REGEX REPLACE "/[^/]*/[^/]*/[^/]*/[^/]*$" "" ROVERNAV_ROOT_DIR ${ROVERNAV_INCLUDE_H} )
endif( NOT ROVERNAV_ROOT_DIR )


set( ROVERNAV_LIBRARY_NAMES
  rnCore
  rnAlgorithm
  rnMath
  rnEstimation
  rnSensors
  rnPointcloud
  rnTravmap
  rnFieldDStar
  rnGui
  rnPose
  rnMapping
  rnSpeedmap
)

if( ROVERNAV_ROOT_DIR ) 
  mark_as_advanced(ROVERNAV_INCLUDE_H)

  set( ROVERNAV_INCLUDE_DIR ${ROVERNAV_ROOT_DIR}/include )
  set( ROVERNAV_LIBRARY_DIR ${ROVERNAV_ROOT_DIR}/lib )
  
  get_library_list(ROVERNAV ${ROVERNAV_LIBRARY_DIR} "d" "${ROVERNAV_LIBRARY_NAMES}")
  get_library_imports(${ROVERNAV_NAME} "${ROVERNAV_LIBRARY_DIR}" "${ROVERNAV_LIBRARY_NAMES}")

  # Find version 
  set( ROVERNAV_VERSION_HEADER ${ROVERNAV_INCLUDE_DIR}/rovernavConfig.h )
  if( EXISTS ${ROVERNAV_VERSION_HEADER} )
    file(STRINGS ${ROVERNAV_VERSION_HEADER} ROVERNAV_TEMP REGEX "^#define ROVERNAV_VERSION_[A-Z]+[ \t]+[0-9]+$")
    string(REGEX REPLACE ".*#define ROVERNAV_VERSION_MAJOR[ \t]+([0-9]+).*" "\\1" ROVERNAV_VERSION_MAJOR ${ROVERNAV_TEMP})
    string(REGEX REPLACE ".*#define ROVERNAV_VERSION_MINOR[ \t]+([0-9]+).*" "\\1" ROVERNAV_VERSION_MINOR ${ROVERNAV_TEMP})
    string(REGEX REPLACE ".*#define ROVERNAV_VERSION_PATCH[ \t]+([0-9]+).*" "\\1" ROVERNAV_VERSION_PATCH ${ROVERNAV_TEMP})
  else( EXISTS ${ROVERNAV_VERSION_HEADER} )
    message(STATUS "  WARNING: Could not find ${ROVERNAV_NAME} version header ${ROVERNAV_VERSION_HEADER}")
    set( ROVERNAV_VERSION_MAJOR X )
    set( ROVERNAV_VERSION_MINOR Y )
    set( ROVERNAV_VERSION_PATCH Z )
  endif( EXISTS ${ROVERNAV_VERSION_HEADER} )
  set(ROVERNAV_VERSION ${ROVERNAV_VERSION_MAJOR}.${ROVERNAV_VERSION_MINOR}.${ROVERNAV_VERSION_PATCH})
  
  set( ROVERNAV_FOUND TRUE )
  message(STATUS "  Found ${ROVERNAV_NAME} version ${ROVERNAV_VERSION} in ${ROVERNAV_ROOT_DIR}")
  
else( ROVERNAV_ROOT_DIR )

  set( ROVERNAV_FOUND FALSE ) 
#  message(STATUS "  ** ROVERNAV_INCLUDE_H = ${ROVERNAV_INCLUDE_H}")
#  message(STATUS "  ** ROVERNAV_ROOT_DIR = ${ROVERNAV_ROOT_DIR}")
#  message(STATUS "  ** PROJ_SRC_PARENT = ${PROJ_SRC_PARENT}")
  message(STATUS "  ${ROVERNAV_NAME} NOT found!!!")
  
endif( ROVERNAV_ROOT_DIR )

