cmake_minimum_required(VERSION 2.8.3)
project(knDds)

###################################
## catkin                        ##
###################################
if (CATKIN_DEVEL_PREFIX)
  find_package(catkin  REQUIRED COMPONENTS
    irg_cmake
    kn
    Miro
  )
  include_directories( ${CATKIN_DEVEL_PREFIX}/include )
endif(CATKIN_DEVEL_PREFIX)

if (NOT catkin_FOUND)

  set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

  include( SetArchitecture )
  include( SetupBuildSwitch )
  include( SetupConfigureFile )
  include( SetupInstall )
  include( SetupRPATH )
  include( SetupUtilities )
  include( SetupWarnLevel )
  include( UserOptions )

  ## we have to play some tricks to get install
  ## path to "stick" in Windows
  ##------------------------------------------------
  set( KNDDS_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "knDds install path")
  set( CMAKE_INSTALL_PREFIX ${KNDDS_INSTALL_PREFIX} CACHE INTERNAL "" )

  find_package( Miro )
  find_package( kn )
  
endif (NOT catkin_FOUND)


if( CMAKE_COMPILER_IS_GNUCXX )
  message( STATUS "****************************************************")
  message( STATUS "** Manually setting compiler flags to prevent")
  message( STATUS "** strict-aliasing warnings in DDS generated files")
  message( STATUS "****************************************************")
  set( WARN_FLAGS "-fno-strict-aliasing -Wall -Woverloaded-virtual -Wno-write-strings" )
endif( CMAKE_COMPILER_IS_GNUCXX )

#---------------------------------------------
# make RTI DDS optional
add_build_var( WITH_DDS NOT APPLE )
find_package( RtiDds )

find_package( ACE )
find_package( Qt4 )
find_package( PThreads-win32 )

find_package( Boost 1.50.0 COMPONENTS program_options filesystem system chrono)

find_package( Doxygen )

add_build_var( WITH_DDS_LBPlugin NOT APPLE )
add_build_var( WITH_DDS_Monitor  NOT APPLE )
add_build_var( WITH_RTI_DistLogger NOT APPLE )

build_with_var( WITH_DDS          RTIDDS_FOUND )
# TODO: change WITH_DDS_foo variables to WITH_RTI_foo
build_with_var( WITH_DDS_LBPlugin RTIDDS_LB_FOUND )
build_with_var( WITH_DDS_Monitor  RTIDDS_MON_FOUND )
build_with_var( WITH_RTI_DistLogger RTIDDS_DLOGGER_FOUND )

if (RTIDDS_FOUND)
  set(knDDS_EXPORT_LIBRARIES knDds knDdsUtil)
endif (RTIDDS_FOUND)

message("knDDS_EXPORT_LIBRARIES ${knDDS_EXPORT_LIBRARIES}")

if (catkin_FOUND)
  ###################################
  ## catkin specific configuration ##
  ###################################
  catkin_package(
    INCLUDE_DIRS src
    LIBRARIES ${knDDS_EXPORT_LIBRARIES}
    CATKIN_DEPENDS kn Miro
    CFG_EXTRAS knDds-extras.cmake
    DEPENDS
  )
  ## set variable with full path of extras file so we can append library info
  set_cfg_extras_file()

  # add devel/include - this should add to persistent catkin metadata
  list(APPEND ${PROJECT_NAME}_INCLUDE_DIRS ${CATKIN_DEVEL_PREFIX}/include)
endif(catkin_FOUND)

## We must add the in-source and out-of-source
## include paths
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
)

include_directories(
  ${KN_INCLUDE_DIR}
  ${catkin_INCLUDE_DIRS}
)
include_directories(SYSTEM
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
#include( CMakePack.txt )

#------------------------------------
print_build_switches()

