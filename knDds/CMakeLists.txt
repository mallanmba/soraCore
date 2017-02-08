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

include( CMakePackageConfigHelpers )

include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupUtilities )
include( SetupWarnLevel )
include( UserOptions )

## We typically want a local install and automatically override CMAKE_INSTALL_PREFIX
## but we don't want to do that if we're building w/ catkin tools. We do an
## imperfect check for this by seeing if ROS_ROOT is set. 
if( NOT DEFINED ENV{ROS_ROOT} )
  ## we have to play some tricks to get install path to "stick" in Windows
  ##------------------------------------------------
  set( KNDDS_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "KNDDS install path")
  set( CMAKE_INSTALL_PREFIX ${KNDDS_INSTALL_PREFIX} CACHE INTERNAL "" )
endif()

#---------------------------------------------
# make RTI DDS optional
add_build_var( WITH_DDS NOT APPLE )
find_package_if( RtiDds KNDDS_BUILD_WITH_DDS  )

find_package( ACE )
find_package( Qt4 )
find_package( PThreads-win32 )

find_package( Boost 1.50.0 COMPONENTS program_options filesystem system chrono)

find_package( Miro )
find_package( kn )

find_package( Doxygen )

add_build_var( WITH_DDS_LBPlugin NOT APPLE )
add_build_var( WITH_DDS_Monitor  NOT APPLE )
add_build_var( WITH_RTI_DistLogger NOT APPLE )

build_with_var( WITH_DDS          RTIDDS_FOUND )
# TODO: change WITH_DDS_foo variables to WITH_RTI_foo
build_with_var( WITH_DDS_LBPlugin RTIDDS_LB_FOUND )
build_with_var( WITH_DDS_Monitor  RTIDDS_MON_FOUND )
build_with_var( WITH_RTI_DistLogger RTIDDS_DLOGGER_FOUND )

## We must add the in-source and out-of-source
## include paths
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
)

include_directories(
  ${KN_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
)

if( WIN32 )
link_directories( ${Boost_LIBRARY_DIRS} )
endif( WIN32 )

## Set up RPATH and *Config.h
## Call these after we've made all our
## find_package calls
##--------------------------------------------
setup_rpath()
setup_configure_file()

#-----------------------------------
add_subdirectory( src )
add_subdirectory( doc )

# install the export file
#------------------------------------
install_export()

# package script
#------------------------------------
include( CMakePack.txt )

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

