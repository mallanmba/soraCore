cmake_minimum_required(VERSION 2.8.3)
project(kn)

###################################
## catkin                        ##
###################################
if (${CATKIN_TOPLEVEL})
  find_package(catkin  REQUIRED COMPONENTS
    irg_cmake
  )
endif(${CATKIN_TOPLEVEL})

if (catkin_FOUND)
  ###################################
  ## catkin specific configuration ##
  ###################################
  catkin_package(
    INCLUDE_DIRS src
    LIBRARIES knShare knMath knGeometry knFrameStore knMotorShare
  )
  ## set variable with full path of extras file so we can append library info
  set_cfg_extras_file()

else (catkin_FOUND)
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
  set( ${PROJECT_UPPER}_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "irg apps install path")
  set( CMAKE_INSTALL_PREFIX ${${PROJECT_UPPER}_INSTALL_PREFIX} CACHE INTERNAL "" )
endif (catkin_FOUND)

# find dependencies
find_package( ACE REQUIRED )
find_package( Eigen3 )
find_package( Boost COMPONENTS chrono )
find_package( Boost 1.46 REQUIRED program_options signals thread system )

find_package( GTest )
find_package( Doxygen )

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

