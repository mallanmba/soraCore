# FIXME: This script needs to be rewritten to comply with the 
#        found library variable naming convention, e.g.
#        GRI_IMPL_LIBRARY should be GRI_griImpl_LIBRARY
#        During the transition, the old variables names will remain, 
#        but please use new variable names in new scripts.
#        Rewrite is in progress...
#
# looks for GRI installation
#
# Output Variables:
# -----------------
# GRI_FOUND                 : TRUE if search succeded
# GRI_INCLUDE_DIR           : include path
# GRI_IDL_DIR               : idl include path
# GRI_LIBRARY_DIR           : library path
# GRI_LIBRARIES             : all GRI libraries
# GRI_gri_LIBRARY           : full path to libgri
# GRI_griImpl_LIBRARY       : full path to libgriImpl
# GRI_griMrs_LIBRARY        : full path to libgriMrs
# GRI_griMrsImpl_LIBRARY    : full path to libgriMrsImpl
# GRI_griWidgetsQt4_LIBRARY : full path to libgriWidgetsQt4
#
# GRI_griImpl_HAS_LidarIO_h : set to path of LidarIO.h 
#
######################################################################
message(STATUS "Looking for GRI")

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

include( SetArchitecture )

# find base GRI library if GRI_ROOT_DIR not set
#-------------------------------------------------
if( NOT GRI_ROOT_DIR ) 
  find_library( GRI_BASE_LIBRARY gri
    ${PROJ_SRC_PARENT}/${ARCHITECTURE}/lib
    ${PROJ_SRC_PARENT}/GRI/lib
    $ENV{GRI_ROOT}/lib
    ${LOCAL_RELEASES}/roversw/${ARCHITECTURE}/lib
    DOC "GRI base library"
  )
  string(REGEX REPLACE "/[^/]*/[^/]*$" "" GRI_ROOT_DIR ${GRI_BASE_LIBRARY})
endif( NOT GRI_ROOT_DIR ) 

# find base GRI library
#-------------------------------------------------
find_library( GRI_BASE_LIBRARY gri
  ${GRI_ROOT_DIR}/lib
  DOC "Base GRI library path"
)

## 
## If we found the base GRI library, assume we 
## have a valid install and search in the same
## directory for the other GRI libs. 
##------------------------------------------------
if( GRI_BASE_LIBRARY )
  string(REGEX REPLACE "/[^/]*$" "" GRI_LIBRARY_DIR ${GRI_BASE_LIBRARY})
  
  set( GRI_INCLUDE_DIR "${GRI_ROOT_DIR}/include" CACHE PATH "GRI include directory")
  set( GRI_IDL_DIR     "${GRI_ROOT_DIR}/idl"     CACHE PATH "GRI idl directory")
  
  # deprecated fltk library is the oddball
  find_library( GRI_GUI_LIBRARY  gri_gui ${GRI_LIBRARY_DIR} NO_DEFAULT_PATH )
  
  set( GRI_LIBRARY_NAMES 
    gri        
    griImpl   
    griMrs       
    griMrsImpl        
    griWidgetsQt4 
  )
  get_library_list(GRI ${GRI_LIBRARY_DIR} "d" "${GRI_LIBRARY_NAMES}")
  
  # LidarIO is left out of griImpl if bzip2 is not found
  find_file( GRI_griImpl_HAS_LidarIO_h "griImpl/LidarIO.h" PATHS ${GRI_INCLUDE_DIR} NO_DEFAULT_PATH )
  
  # experimental:
  get_library_imports(GRI "${GRI_LIBRARY_DIR}" "${GRI_LIBRARY_NAMES}")

  # Backwards compatibility
  set( GRI_IMPL_LIBRARY       ${GRI_griImpl_LIBRARY}       )
  set( GRI_MRS_LIBRARY        ${GRI_griMrs_LIBRARY}        )
  set( GRI_MRS_IMPL_LIBRARY   ${GRI_griMrsImpl_LIBRARY}    )
  set( GRI_WIDGETSQT4_LIBRARY ${GRI_griWidgetsQt4_LIBRARY} )
  
  mark_as_advanced(
    GRI_BASE_LIBRARY
    GRI_GUI_LIBRARY
    GRI_INCLUDE_DIR
    GRI_IDL_DIR
  )
  
  message(STATUS "  GRI found in ${GRI_ROOT_DIR}")
  set( GRI_FOUND TRUE )
  
  set(GRI_DEPEND_FILE "${GRI_ROOT_DIR}/cmake/GRI.cmake")
    
else( GRI_BASE_LIBRARY )

  message(STATUS "  GRI NOT found!!! Try setting GRI_ROOT")

endif( GRI_BASE_LIBRARY )

