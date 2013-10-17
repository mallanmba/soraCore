project(knDds)
cmake_minimum_required(VERSION 2.6)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

if( CMAKE_COMPILER_IS_GNUCXX )
  message( STATUS "****************************************************")
  message( STATUS "** Manually setting compiler flags to prevent")
  message( STATUS "** strict-aliasing warnings in DDS generated files")
  message( STATUS "****************************************************")
  set( WARN_FLAGS "-fno-strict-aliasing -Wall -Woverloaded-virtual -Wno-write-strings" )
endif( CMAKE_COMPILER_IS_GNUCXX )

include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupUtilities )
include( UserOptions )
include( SetupWarnLevel )

## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( KNDDS_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "KNDDS install path")
set( CMAKE_INSTALL_PREFIX ${KNDDS_INSTALL_PREFIX} CACHE INTERNAL "" )


#---------------------------------------------
# make RTI DDS optional
add_build_var( WITH_DDS NOT APPLE )
find_package_if( RtiDds KNDDS_BUILD_WITH_DDS  )

find_package( ACE )
find_package( Qt4 )
find_package( PThreads-win32 )

find_package( Boost 1.50.0 COMPONENTS program_options filesystem system)

find_package( Miro )
find_package( kn )

add_build_var( WITH_DDS_LBPlugin NOT APPLE )
add_build_var( WITH_DDS_Monitor  NOT APPLE )

build_with_var( WITH_DDS          RTIDDS_FOUND )
build_with_var( WITH_DDS_LBPlugin RTIDDS_LB_FOUND )
build_with_var( WITH_DDS_Monitor  RTIDDS_MON_FOUND )

## We must add the in-source and out-of-source
## include paths 
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
)

## Set up RPATH and *Config.h
## Call these after we've made all our 
## find_package calls
##--------------------------------------------
setup_rpath()
setup_configure_file()

#-----------------------------------
add_subdirectory( src )

# install the export file
#------------------------------------
install_export()

# package script
#------------------------------------
include( CMakePack.txt )

#------------------------------------
print_build_switches()
