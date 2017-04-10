project(irgUtil)
cmake_minimum_required(VERSION 2.6)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

include (TestBigEndian)

include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupWarnLevel )
include( SetupUtilities )

## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( IRGUTIL_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" CACHE PATH "irgUtil install path")

## find the packages we depend on 

## add the in-source and out-of-source
## include paths 
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
)

## set variables for config file
test_big_endian(IRGUTIL_IS_BIG_ENDIAN)
if(NOT IRGUTIL_IS_BIG_ENDIAN)
  set(IRGUTIL_IS_LITTLE_ENDIAN TRUE)
endif(NOT IRGUTIL_IS_BIG_ENDIAN)

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
