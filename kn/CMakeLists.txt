project(kn)
cmake_minimum_required(VERSION 2.6)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

include( CMakePackageConfigHelpers )

include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupCTest )
include( SetupWarnLevel )
include( SetupUtilities )
include( UserOptions )

## We typically want a local install and automatically override CMAKE_INSTALL_PREFIX
## but we don't want to do that if we're building w/ catkin tools. We do an
## imperfect check for this by seeing if ROS_ROOT is set. 
if( NOT DEFINED ENV{ROS_ROOT} )
  ## we have to play some tricks to get install path to "stick" in Windows
  ##------------------------------------------------
  set( ${PROJECT_UPPER}_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "irg apps install path")
  set( CMAKE_INSTALL_PREFIX ${${PROJECT_UPPER}_INSTALL_PREFIX} CACHE INTERNAL "" )
endif()

# find dependencies

message(STATUS "CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")
message(STATUS "CMAKE_INSTALL_PREFIX= ${CMAKE_INSTALL_PREFIX}")

find_package( ACE )
find_package( Eigen3 )
find_package( Boost 1.50 COMPONENTS REQUIRED program_options signals thread system chrono )

find_package( GTest )
find_package( Doxygen )

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
add_subdirectory( doc )

# install the export file
#------------------------------------
install_export()

#------------------------------------
print_build_switches()

## create a cmake config file that
## is compatible with catkin_tools
##------------------------------------
set ( ${PROJECT_UPPER}_INCLUDE_DIRS "include" )
set ( CMAKE_CONFIG_DEST "share/${PROJECT_NAME}/cmake" )
configure_package_config_file (                         
        "cmake/${PROJECT_NAME}Config.cmake.in"
        "${CMAKE_BINARY_DIR}/${PROJECT_NAME}Config.cmake"  
        INSTALL_DESTINATION "${CMAKE_CONFIG_DEST}"
        PATH_VARS ${PROJECT_UPPER}_INCLUDE_DIRS
)
export ( PACKAGE ${PROJECT_NAME} ) 
install( FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake 
         DESTINATION ${CMAKE_CONFIG_DEST} )

