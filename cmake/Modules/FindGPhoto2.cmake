######################################################################
# Find script for gphoto2
#
# Output Variables:
# -----------------
# GPHOTO2_FOUND           : TRUE if search succeded
# GPHOTO2_INCLUDE_DIR     : include path
# GPHOTO2_LIBRARIES       : all libraries in one variable (use this in your CMakeLists)
# GPHOTO2_LIBRARY_DIR     : library path
#
######################################################################

include( SimplePackageFind )

set( PACKAGE_NAME           gphoto2 )
set( PACKAGE_DIRS           libgphoto2 )
set( PACKAGE_REQ_LIBRARY    gphoto2 )
set( PACKAGE_REQ_INCLUDE    gphoto2/gphoto2.h )

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
    gphoto2
  )
  get_library_list(${PACKAGE_UPPER} ${${PACKAGE_LIBRARY_DIR}} "d" "${LIBRARY_NAMES}")
  
endif( ${PACKAGE_FOUND} )

