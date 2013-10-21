######################################################################
# Find script for PROJ4
#
# Output Variables:
# -----------------
# PROJ4_FOUND           : TRUE if search succeded
# PROJ4_INCLUDE_DIR     : include path
# PROJ4_LIBRARIES       : all libraries in one variable (use this in your CMakeLists)
# PROJ4_LIBRARY_DIR     : library path
# PROJ4_BASE_LIBRARY    : full path to proj
#
######################################################################

include( SimplePackageFind )

set( PACKAGE_NAME         proj4 )
set( PACKAGE_DIRS         proj4 )
set( PACKAGE_REQ_LIBRARY  proj )
set( PACKAGE_REQ_INCLUDE  proj_api.h )

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
  set( LIBRARY_NAMES
    proj
  )
  get_library_list(${PACKAGE_UPPER} ${${PACKAGE_LIBRARY_DIR}} "d" "${LIBRARY_NAMES}")
endif( ${PACKAGE_FOUND} )



