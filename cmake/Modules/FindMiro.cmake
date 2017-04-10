######################################################################
# Find script for Miro
#
# TODO: Update this to get root dir by finding header, then find
# MakeParams and libraries
#
# Output Variables:
# -----------------
# MIRO_FOUND           : TRUE if search succeded
# MIRO_INCLUDE_DIR     : include path
# MIRO_LIBRARY_DIR     : library path
# MIRO_LIBRARIES       : all miro libraries
# MIRO_miro_LIBRARY     
# MIRO_miroBase_LIBRARY    
# MIRO_miroCore_LIBRARY    
# MIRO_miroParams_LIBRARY    
# MIRO_miroWidgets_LIBRARY    
# MIRO_miroXml_LIBRARY    
# MIRO_miroJson_LIBRARY    
#
######################################################################


message(STATUS "Looking for Miro")
# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

include( SetArchitecture )
include( GetLibraryList )

set( MIRO_ROOT_DIR /usr )
#if( MIRO_ROOT_DIR )
#  message(STATUS "  (dbg) MIRO_ROOT_DIR=${MIRO_ROOT_DIR}" )
#endif()

# include the GenerateMiroMakeParams
# here so it is automatically available 
# when FindMiro is called
#------------------------------------------------
include( GenerateMiroMakeParams )

if( NOT MIRO_MAKEPARAMS_EXECUTABLE )
  # verify the presence of the miro "MakeParams" 
  # executable
 #------------------------------------------------
  find_program( MIRO_MAKEPARAMS_EXECUTABLE 
    NAME MakeParams
    HINTS
      ${MIRO_ROOT_DIR}
      $ENV{MIRO_ROOT}
      ${PROJ_SRC_PARENT}/${ARCHITECTURE}
      ${PROJ_SRC_PARENT}
      ${IRG_PACKAGES_DIR}/Miro
    PATH_SUFFIXES bin
    DOC "Miro MakeParams executable"
  )
endif( NOT MIRO_MAKEPARAMS_EXECUTABLE )

string(REGEX REPLACE "/[^/]*/[^/]*$" "" _MIRO_ROOT_DIR ${MIRO_MAKEPARAMS_EXECUTABLE})
# resolve any symlinks
get_filename_component(MIRO_ROOT_DIR ${_MIRO_ROOT_DIR} REALPATH)

if( MIRO_ROOT_DIR )
  
  
  set( MIRO_INCLUDE_DIR ${MIRO_ROOT_DIR}/include CACHE PATH "Miro include directory" )
  set( MIRO_LIBRARY_DIR ${MIRO_ROOT_DIR}/lib     CACHE PATH "Miro library directory" )
  
  mark_as_advanced(MIRO_MAKEPARAMS_EXECUTABLE)
  mark_as_advanced(MIRO_INCLUDE_DIR)
  mark_as_advanced(MIRO_LIBRARY_DIR)
  
  set(LIBRARY_NAMES 
    miro 
    miroBase
    miroCore
    miroParams
    miroWidgets
    miroXml
    miroJson
  )

  get_library_list(MIRO ${MIRO_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")
  get_library_imports(Miro "${MIRO_LIBRARY_DIR}" "${LIBRARY_NAMES}")

  find_file( MIRO_CONFIG_H MiroConfig.h PATHS ${MIRO_INCLUDE_DIR} NO_DEFAULT_PATH)
  if(MIRO_CONFIG_H)
    file(STRINGS ${MIRO_CONFIG_H} Miro_VERSIONS_TMP REGEX "^#define MIRO_VERSION_[A-Z]+[ \t]+[0-9]+$")
    string(REGEX REPLACE ".*#define MIRO_VERSION_MAJOR[ \t]+([0-9]+).*" "\\1" MIRO_VERSION_MAJOR ${Miro_VERSIONS_TMP})
    string(REGEX REPLACE ".*#define MIRO_VERSION_MINOR[ \t]+([0-9]+).*" "\\1" MIRO_VERSION_MINOR ${Miro_VERSIONS_TMP})
    string(REGEX REPLACE ".*#define MIRO_VERSION_PATCH[ \t]+([0-9]+).*" "\\1" MIRO_VERSION_PATCH ${Miro_VERSIONS_TMP})
    set(MIRO_VERSION ${MIRO_VERSION_MAJOR}.${MIRO_VERSION_MINOR}.${MIRO_VERSION_PATCH} CACHE STRING "" FORCE)
  else(MIRO_CONFIG_H)
    set(MIRO_VERSION "UNKNOWN")
  endif(MIRO_CONFIG_H)
  
  set( MIRO_FOUND TRUE )
  message(STATUS "  Found Miro version ${MIRO_VERSION} in ${MIRO_ROOT_DIR}")
  
  set(MIRO_DEPEND_FILE "${MIRO_ROOT_DIR}/cmake/Miro.cmake")

else( MIRO_ROOT_DIR )

  message(STATUS "  Miro NOT found!!!")
  
endif( MIRO_ROOT_DIR )

