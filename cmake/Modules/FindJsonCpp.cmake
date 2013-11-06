## !!! FIXME !!!
## Update JsonCpp CMake build to mirror Ubuntu install paths and names 
##
######################################################################
# Find script for jsoncpp
#
# Output Variables:
# -----------------
# JSONCPP_FOUND           : TRUE if search succeded
# JSONCPP_INCLUDE_DIR     : include path
# JSONCPP_LIBRARIES       : all libraries in one variable (use this in your CMakeLists)
# JSONCPP_LIBRARY_DIR     : library path
#
######################################################################

include( SimplePackageFind )

set( PACKAGE_NAME           JsonCpp )
set( PACKAGE_DIRS           jsoncpp )
set( PACKAGE_REQ_LIBRARY    jsoncpp)
set( PACKAGE_REQ_INCLUDE    json/json.h jsoncpp/json/json.h )

simple_package_find("${PACKAGE_NAME}" 
                    "${PACKAGE_DIRS}" 
                    "${PACKAGE_REQ_LIBRARY}"
                    "${PACKAGE_REQ_INCLUDE}"
)


##
## find paths to package libraries
##
################################################
if( ${PACKAGE_FOUND} )

  # json-c uses the same library name as jsoncpp and the same
  # include dir. Do a simple check for a unique jsoncpp header
  find_file( JSONCPP_UNIQUE_HEADER value.h
             PATHS ${${PACKAGE_INCLUDE_DIR}}
             PATH_SUFFIXES json
             NO_DEFAULT_PATH )
  
  if( JSONCPP_UNIQUE_HEADER ) 
  
    add_definitions( -DJSONCPP_FOUND )
    set( LIBRARY_NAMES 
      ${PACKAGE_REQ_LIBRARY}
    )
    get_library_list(JSONCPP ${JSONCPP_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")
        
  else( JSONCPP_UNIQUE_HEADER ) 
  
    message( STATUS "  ** No, jsoncpp was NOT found (json-c was found, but that's not what we want)" )
    message( STATUS "  ** JSONCPP_FOUND is FALSE" )
    set( ${PACKAGE_FOUND} FALSE )
    unset( ${PACKAGE_LIBRARY_DIR} )
    unset( ${PACKAGE_INCLUDE_DIR} CACHE )
    unset( ${PACKAGE_BASE_LIBRARY} CACHE )
    
  endif( JSONCPP_UNIQUE_HEADER ) 
  
  unset( JSONCPP_UNIQUE_HEADER CACHE )

endif( ${PACKAGE_FOUND} )

