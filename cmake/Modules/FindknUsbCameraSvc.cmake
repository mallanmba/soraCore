######################################################################
# Find script for USB Camera Control
#
# Output Variables:
# -----------------
# KNUSBCAMERASVC_FOUND           : TRUE if search succeded
# KNUSBCAMERASVC_INCLUDE_DIR     : include path
# KNUSBCAMERASVC_LIBRARY_DIR     : library path
#
######################################################################
message(STATUS "Looking for knUsbCameraSvc")

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

include( SetArchitecture )

if( NOT KNUSBCAMERASVC_ROOT_DIR ) 
  # try and find usb camera control root
  #-------------------------------------------------
  find_library( KNUSBCAMERASVC_BASE_LIBRARY knUsbCameraSvc
    ${PROJ_SRC_PARENT}/${ARCHITECTURE}/lib
    $ENV{USB_CAMERA_CONTROL_ROOT}/lib
    ${LOCAL_RELEASES}/roversw/${ARCHITECTURE}/lib
    DOC "kn USB camera svc base library"
  )
  string(REGEX REPLACE "/[^/]*/[^/]*$" "" KNUSBCAMERASVC_ROOT_DIR ${KNUSBCAMERASVC_BASE_LIBRARY})
endif( NOT KNUSBCAMERASVC_ROOT_DIR ) 


if( KNUSBCAMERASVC_ROOT_DIR )
  
  set( KNUSBCAMERASVC_INCLUDE_DIR ${KNUSBCAMERASVC_ROOT_DIR}/include/knUsbCameraSvc CACHE PATH "KN USB CAMERA SVC include directory" )
  set( KNUSBCAMERASVC_LIBRARY_DIR ${KNUSBCAMERASVC_ROOT_DIR}/lib     CACHE PATH "KN USB CAMERA SVC library directory" )
  
  message(STATUS "  Found knUsbCameraSvc in ${KNUSBCAMERASVC_ROOT_DIR}")
  set( KNUSBCAMERASVC_FOUND TRUE )
  
else( KNUSBCAMERASVC_ROOT_DIR )

  message(STATUS "  knUsbCameraSvc NOT found!!!")
  
endif( KNUSBCAMERASVC_ROOT_DIR )

