######################################################################
# Find script for CLARAty
#
# NOTE: We do not attempt to find or define all the CLARAty
#       libraries because there are a ton of them. 
#
# Output Variables:
# -----------------
# CLARATY_FOUND           : TRUE if search succeded
# CLARATY_INCLUDE_DIR     : include path
# CLARATY_LIBRARY_DIR     : library path
# CLARATY_LIBRARIES       : all CLARAty libraries found (see below for list)
# CLARATY_hw_k9_gps_pipe_LIBRARY: full path to hw_k9_gps_pipe
# etc...
#
######################################################################

include(GetReleaseSearchPath)

message(STATUS "Looking for CLARAty")

set(     PACKAGE CLARAty )
set( PACKAGE_DIR claraty )

get_release_search_path( "${PACKAGE}" "${PACKAGE_DIR}" CLARATY_ROOT_DIR CLARATY_ROOT )

set( LIB_DIR "lib/${ARCHITECTURE}" )

set( FIND_LIBS 
  analysis_terrain_morphin 
  arrays
  bits 
  camera_ieee1394 
  camera_image
  camera_image_io 
  camera_linux1394 
  camera_model 
  cmd_base  
  cost_function_dstar
  data_io
  dev_camera 
  device 
  estimation
  frame
  image_io 
  image_io_png  
  image_io_pnm  
  image_ops 
  k10_hw_charger
  locomotor 
  map_grid
  matrices  
  model_locomotor  
  motion_control  
  motor  
  navigation 
  navigator_gui 
  navigator_morphin  
  numerics 
  path_planner_dstar
  png  
  point_image 
  points  
  rectify_op 
  resource 
  sequence_drive  
  share
  share 
  share_cmu 
  solver_1d  
  stereo_processor  
  stereo_vision_arc 
  string_io
  telemetry 
  transforms  
  triangulated_mesh 
  user_cmu_ace_interface 
  user_cmu_state  
  user_clay 
  util_open_gl
  wheel
)

foreach( FIND_LIB ${FIND_LIBS} )
  find_library( CLARATY_${FIND_LIB}_LIBRARY ${FIND_LIB}
    ${RELEASE_SEARCH_PATH}/${LIB_DIR}
    "${PACKAGE} ${FIND_LIB} library"
  )
endforeach( FIND_LIB )
    
# Set the root to 3 directories above base library.
#-----------------------------------------
string(REGEX REPLACE "/[^/]*/[^/]*/[^/]*$" "" CLARATY_ROOT_DIR ${CLARATY_frame_LIBRARY} )

if( CLARATY_ROOT_DIR ) 

  message(STATUS "  Found CLARAty in ${CLARATY_ROOT_DIR}")
  set( CLARATY_FOUND          TRUE )
  set( CLARATY_LIBRARY_DIR    ${CLARATY_ROOT_DIR}/${LIB_DIR} )
  set( CLARATY_INCLUDE_DIR    ${CLARATY_ROOT_DIR}/include )
  
  set( CLARATY_LIBRARIES "" )
  foreach( FIND_LIB ${FIND_LIBS} )
    if( CLARATY_${FIND_LIB}_LIBRARY )
      # if the library was found, append it to the list of CLARATY_LIBRARIES
      set( CLARATY_LIBRARIES ${CLARATY_LIBRARIES} ${CLARATY_${FIND_LIB}_LIBRARY} )
      mark_as_advanced( CLARATY_${FIND_LIB}_LIBRARY )
    else( CLARATY_${FIND_LIB}_LIBRARY )
      message( STATUS "  Could NOT find ${PACKAGE} library : ${FIND_LIB}" )
    endif( CLARATY_${FIND_LIB}_LIBRARY )
  endforeach( FIND_LIB )
  
else( CLARATY_ROOT_DIR ) 

  set( CLARATY_FOUND FALSE )
  message(STATUS ${RELEASE_SEARCH_ERROR_MESSAGE})

endif( CLARATY_ROOT_DIR )

