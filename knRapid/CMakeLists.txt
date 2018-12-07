cmake_minimum_required(VERSION 2.8.3)
project(knRapid)

###################################
## catkin                        ##
###################################
if (CATKIN_DEVEL_PREFIX)
  find_package(catkin  REQUIRED COMPONENTS
    irg_cmake
    irgUtil
    Miro
    kn
    knDds
  )
  include_directories( ${CATKIN_DEVEL_PREFIX}/include )
endif(CATKIN_DEVEL_PREFIX)

if (NOT catkin_FOUND)
  ## standard CMake setup
  set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

  if( CMAKE_COMPILER_IS_GNUCXX )
    message( STATUS "****************************************************")
    message( STATUS "** Manually setting compiler flags to prevent")
    message( STATUS "** strict-aliasing warnings in DDS generated files")
    message( STATUS "****************************************************")
    set( WARN_FLAGS "-fno-strict-aliasing -Wall -Woverloaded-virtual -Wno-write-strings" )
  
    if( NOT SETUP_WARN_LEVEL_HAS_RUN )
      message( STATUS "** disable --as-needed because k10controller *wants* 'unecessary' shared libs to be linked **")
      set( CMAKE_EXE_LINKER_FLAGS    "-Wl,--no-as-needed" CACHE STRING "" FORCE )
    endif( NOT SETUP_WARN_LEVEL_HAS_RUN )
    
  endif( CMAKE_COMPILER_IS_GNUCXX )

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
  set( RAPID_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../${ARCHITECTURE}" CACHE PATH "RAPID install path")
  set( CMAKE_INSTALL_PREFIX ${RAPID_INSTALL_PREFIX} CACHE INTERNAL "" )

  find_package( IrgUtil )
  find_package( Miro )
  find_package( kn )
  find_package( knDds )
endif (NOT catkin_FOUND)

#---------------------------------------------
# make RTI DDS optional
add_build_var( WITH_DDS NOT APPLE )
find_package( RtiDds )

if( MIRO_BUILD_WITH_QT5 )
  message(STATUS "FOUND QT 5")
  find_package(Qt5Widgets REQUIRED)
  find_package(Qt5Xml REQUIRED)
  find_package(Qt5Network REQUIRED)
  if (Qt5_POSITION_INDEPENDENT_CODE)
    SET(CMAKE_POSITION_INDEPENDENT_CODE ON)
  endif()
  include_directories(SYSTEM "${Qt5Widgets_INCLUDE_DIRS}")
  include_directories(SYSTEM "${Qt5Xml_INCLUDE_DIRS}")
  include_directories(SYSTEM "${Qt5Network_INCLUDE_DIRS}")
  set(QT_QTXML_LIBRARY Qt5::Xml)
  set(QT_QTCORE_LIBRARY Qt5::Widgets)
  set(QT_QTNETWORK_LIBRARY Qt5::Network)
else()
  message(STATUS "FOUND QT 4")
  find_package(Qt4 COMPONENTS QtCore QtGui QtNetwork REQUIRED)
  include(${QT_USE_FILE})
  include_directories(SYSTEM "${QT_INCLUDE_DIR}")
  include_directories(SYSTEM "${QT_QTXML_INCLUDE_DIR}")
  include_directories(SYSTEM "${QT_QTCORE_INCLUDE_DIR}")
  include_directories(SYSTEM "${QT_QTNETWORK_INCLUDE_DIR}")
endif()

find_package( ACE )
find_package( PThreads-win32 )
find_package( CURL )

find_package( Boost 1.50.0 COMPONENTS program_options filesystem system thread bind function)
find_package( Eigen3 )
find_package( Threads )
find_package( Doxygen )

build_with_var( WITH_DDS RTIDDS_FOUND )

set(knRapid_EXPORT_LIBRARIES knSystemInfo) #knFetchPool
if (RTIDDS_FOUND)
  set(knRapid_EXPORT_LIBRARIES ${knRapid_EXPORT_LIBRARIES} rapidDds rapidIo rapidExtDds rapidExtIo rapidExtArcDds rapidExtArcIo rapidCommanding)
endif (RTIDDS_FOUND)

if (catkin_FOUND)
  ###################################
  ## catkin specific configuration ##
  ###################################
  catkin_package(
    INCLUDE_DIRS src # NOTE: see knRapid-extras.cmake for additional include dirs
    LIBRARIES ${knRapid_EXPORT_LIBRARIES}
    CFG_EXTRAS knRapid-extras.cmake
    CATKIN_DEPENDS knDds
  )
  ## set variable with full path of extras file so we can append library info
  set_cfg_extras_file()
  
  # add devel/include - this should add to persistent catkin metadata
  list(APPEND ${PROJECT_NAME}_INCLUDE_DIRS ${CATKIN_DEVEL_PREFIX}/include)
endif(catkin_FOUND)  


## We must add the in-source and out-of-source
## include paths 
## Boost include path is also required everywhere
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
  ${catkin_INCLUDE_DIRS}
  ${CATKIN_DEVEL_PREFIX}/include
)
include_directories(SYSTEM
  ${Boost_INCLUDE_DIR}
)

## Set up RPATH and *Config.h
## Call these after we've made all our 
## find_package calls
##--------------------------------------------
setup_rpath()
setup_configure_file()

# Defaults
#-----------------------------------
link_libraries(
  ${CMAKE_THREAD_LIBS_INIT}
  ${catkin_LIBRARIES}
)

if( WIN32 )
  link_directories( ${Boost_LIBRARY_DIRS} )
endif( WIN32 )

#-----------------------------------
add_subdirectory( etc )
add_subdirectory( src )
add_subdirectory( doc )

add_build_switch( examples BUILD_DEFAULT_TRUE )

# install the export file
#------------------------------------
install_export()

# package script
#------------------------------------
#include( CMakePack.txt )

#------------------------------------
print_build_switches()

