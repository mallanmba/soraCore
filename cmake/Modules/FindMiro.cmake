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
    PATHS
      ${MIRO_ROOT_DIR}
      $ENV{MIRO_ROOT}
      ${PROJ_SRC_PARENT}/${ARCHITECTURE}
      ${PROJ_SRC_PARENT}
      /usr/local/irg/packages/${ARCHITECTURE}/Miro
      ${LOCAL_RELEASES}/roversw/${ARCHITECTURE}
    PATH_SUFFIXES bin
    DOC "Miro MakeParams executable"
  )
endif( NOT MIRO_MAKEPARAMS_EXECUTABLE )

string(REGEX REPLACE "/[^/]*/[^/]*$" "" MIRO_ROOT_DIR ${MIRO_MAKEPARAMS_EXECUTABLE})

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

  # experimental:
  get_library_imports(Miro "${MIRO_LIBRARY_DIR}" "${LIBRARY_NAMES}")

  set( MIRO_FOUND TRUE )
  message(STATUS "  Found Miro in ${MIRO_ROOT_DIR}")
  
  set(MIRO_DEPEND_FILE "${MIRO_ROOT_DIR}/cmake/Miro.cmake")

else( MIRO_ROOT_DIR )

  message(STATUS "  Miro NOT found!!!")
  
endif( MIRO_ROOT_DIR )

