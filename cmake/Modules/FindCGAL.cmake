######################################################################
# Find script for CGAL
#
# Output Variables:
# -----------------
# CGAL_FOUND               : TRUE if search succeded
# CGAL_INCLUDE_DIR         : include path
# CGAL_LIBRARIES           : all libraries in one variable (use this in your CMakeLists)
# CGAL_LIBRARY_DIR         : library path
# CGAL_CGAL_LIBRARY        : full path to library
# CGAL_CGALQt_LIBRARY      : full path to library
# CGAL_CGALPDB_LIBRARY     : full path to library
# CGAL_CGALimageIO_LIBRARY : full path to library
# CGAL_CGALcore++_LIBRARY  : full path to library
#
######################################################################

include( SimplePackageFind )

set( PACKAGE_NAME           CGAL )
set( PACKAGE_DIRS           CGAL )
set( PACKAGE_REQ_LIBRARY    CGAL )
set( PACKAGE_REQ_INCLUDE    CGAL/CGALversion.h )

simple_package_find("${PACKAGE_NAME}" 
                   "${PACKAGE_DIRS}" 
                   "${PACKAGE_REQ_LIBRARY}"
                   "${PACKAGE_REQ_INCLUDE}"
)

################################################
if( ${PACKAGE_FOUND} )
  set( LIBRARY_NAMES
    CGAL
    CGALQt
    CGALPDB
    CGALimageIO
    CGALcore++
  )
  get_library_list(${PACKAGE_UPPER} ${${PACKAGE_LIBRARY_DIR}} "d" "${LIBRARY_NAMES}")
endif( ${PACKAGE_FOUND} )

