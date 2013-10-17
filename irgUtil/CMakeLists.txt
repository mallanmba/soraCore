project(irgUtil)
cmake_minimum_required(VERSION 2.6)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupWarnLevel )

## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( IRGUTIL_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "irgUtil install path")
set( CMAKE_INSTALL_PREFIX ${IRGUTIL_INSTALL_PREFIX} CACHE INTERNAL "" )

## find the packages we depend on 
find_package(ACE)

## Set up RPATH and *Config.h
## Call these after we've made all our 
## find_package calls
##--------------------------------------------
setup_rpath()
setup_configure_file()

# Defaults
#-----------------------------------
add_subdirectory( src )

# install the export file
#------------------------------------
install_export()

#------------------------------------
print_build_switches()
