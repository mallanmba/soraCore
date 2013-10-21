######################################################################
# Find script for USB Camera Control
#
# Output Variables:
# -----------------
# KN_USB_CAMERA_FOUND           : TRUE if search succeded
# KN_USB_CAMERA_INCLUDE_DIR     : include path
# KN_USB_CAMERA_LIBRARY_DIR     : library path
#
######################################################################
message(STATUS "Looking for knUsbCamera")

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

include( SetArchitecture )

if( NOT KN_USB_CAMERA_ROOT_DIR ) 
  # try and find usb camera control root
  #-------------------------------------------------
  find_library( KN_USB_CAMERA_BASE_LIBRARY knUsbCamera
    ${PROJ_SRC_PARENT}/${ARCHITECTURE}/lib
    $ENV{USB_CAMERA_CONTROL_ROOT}/lib
    ${LOCAL_RELEASES}/roversw/${ARCHITECTURE}/lib
    DOC "kn USB camera base library"
  )
  string(REGEX REPLACE "/[^/]*/[^/]*$" "" KN_USB_CAMERA_ROOT_DIR ${KN_USB_CAMERA_BASE_LIBRARY})
endif( NOT KN_USB_CAMERA_ROOT_DIR ) 


if( KN_USB_CAMERA_ROOT_DIR )
  
  set( KN_USB_CAMERA_INCLUDE_DIR ${KN_USB_CAMERA_ROOT_DIR}/include/knUsbCamera CACHE PATH "KN USB CAMERA include directory" )
  set( KN_USB_CAMERA_LIBRARY_DIR ${KN_USB_CAMERA_ROOT_DIR}/lib     CACHE PATH "KN USB CAMERA library directory" )
  
  message(STATUS "  Found knUsbCamera in ${KN_USB_CAMERA_ROOT_DIR}")
  set( KN_USB_CAMERA_FOUND TRUE )
  
else( KN_USB_CAMERA_ROOT_DIR )

  message(STATUS "  knUsbCamera NOT found!")
  
endif( KN_USB_CAMERA_ROOT_DIR )

