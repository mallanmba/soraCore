project(kn)
cmake_minimum_required(VERSION 2.6)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupCTest )
include( SetupWarnLevel )
include( SetupUtilities )
include( UserOptions )

## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( ${PROJECT_UPPER}_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" CACHE PATH "irg apps install path")

# find dependencies

find_package( ACE )
find_package( Eigen3 )
find_package( Boost 1.50 COMPONENTS REQUIRED program_options signals thread system chrono )

minimum_requirements( Boost_FOUND )

## We must add the in-source and out-of-source
## include paths 
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
)

#
# Set up RPATH and *Config.h
##--------------------------------------------
setup_rpath()
setup_configure_file()
setup_ctest()

# Defaults
#-----------------------------------
# everything needs to include boost headers, so set it
# up at the top level for convinience
##-----------------------------------------------
include_directories(
  ${Boost_INCLUDE_DIR}
)

#-----------------------------------
# everything needs to include ACE export macros, so set it
# up at the top level for convinience
##-----------------------------------------------
include_directories(
  ${ACE_INCLUDE_DIR}
)
link_libraries( 
  ${ACE_LIBRARIES}
)
if( WIN32 )
  link_directories( ${Boost_LIBRARY_DIRS} )
endif( WIN32 )


#-----------------------------------
add_subdirectory( src )

# install the export file
#------------------------------------
install_export()

#------------------------------------
print_build_switches()
