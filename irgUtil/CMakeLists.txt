cmake_minimum_required(VERSION 2.8.3)
project(irgUtil)

if (CATKIN_DEVEL_PREFIX)
  find_package(catkin  REQUIRED COMPONENTS
    irg_cmake
  )
  include_directories( ${CATKIN_DEVEL_PREFIX}/include )
endif(CATKIN_DEVEL_PREFIX)

if (catkin_FOUND)
  ###################################
  ## catkin specific configuration ##
  ###################################
  catkin_package(
    INCLUDE_DIRS src
    LIBRARIES irgSha1 irgUtmll
  )
else (catkin_FOUND)
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
set( IRGUTIL_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "irgUtil install path")
set( CMAKE_INSTALL_PREFIX ${IRGUTIL_INSTALL_PREFIX} CACHE INTERNAL "" )
endif (catkin_FOUND)

## find the packages we depend on 

find_package(GTest)
find_package(Doxygen)


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
add_subdirectory( doc )

# install the export file
#------------------------------------
install_export()

#------------------------------------
print_build_switches()
