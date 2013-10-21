## find_package_if
##
## Only execute find_package if the conditional
## is true. Usage:
##  find_package_if( OpenGL BUILD_WITH_OPENGL AND NOT BAD_DAY )
##
##################################################
macro( find_package_if PACKAGE )
  if( ${ARGN} )
    find_package( ${PACKAGE} )
  endif( ${ARGN} )
endmacro( find_package_if )

## assert 
## 
## message, followed by a conditional expression
## if the conditional expression fails, cmake 
## will abort. 
##   assert( "minimum requirements" OPENGL_FOUND AND NOT APPLE )
##
#################################################
macro( assert MESSAGE )

  if( ${ARGN} )
    # do nothing
  else( ${ARGN} )
  
    set( MSG "\nASSERT ${MESSAGE} failed!\n" )
    set( MSG "${MSG}    assertion: ${ARGN}\n" )
    foreach( ARG ${ARGN} )
      set( MSG "${MSG}        ${ARG}[${${ARG}}]\n" )
    endforeach( ARG )
    message( FATAL_ERROR "${MSG}" )
    
  endif( ${ARGN} )

endmacro( assert )

## minimum_requirements
##
## Checks the passed variables, if any of them
## are false, abort cmake and print error 
## message. Useage: 
##   minimum_requirements( TAO_FOUND OPENGL_FOUND KNALGO_knFoo_LIBRARY )
## 
#################################################
macro( minimum_requirements )

  set( MSG "\nERROR! CMake cannot continue because the following minimum requirements were not met: \n" )
  set( MINIMUM_REQUIREMENTS_OK TRUE )
  foreach( ARG ${ARGN} )
  
    if( NOT ${ARG} )
      set( MSG "${MSG}    ${ARG} is not true, value is \"${${ARG}}\" \n" )
      set( MINIMUM_REQUIREMENTS_OK FALSE )
    endif( NOT ${ARG} )
  
  endforeach( ARG ${ARGN} )

  if( NOT MINIMUM_REQUIREMENTS_OK ) 
    message( FATAL_ERROR "${MSG}" )
  endif( NOT MINIMUM_REQUIREMENTS_OK )
  
endmacro( minimum_requirements )

##
## add_target_definitions
##
## macro to simplify adding definitions to a 
## target. The passed arguments should NOT be
## prefixed with a -D
##
## The legacy "add_definitions" function required a 
## -D, but to support that syntax, we'd have to use
## the COMPILE_FLAGS property instead of the 
## COMPILE_DEFINITIONS property. 
##
#################################################
macro( add_target_definitions TARGET_NAME )
  set_property( TARGET ${TARGET_NAME} APPEND PROPERTY COMPILE_DEFINITIONS ${ARGN} )
endmacro( add_target_definitions )

##
## add_directory_definitions
##
## macro to simplify adding definitions to a source
## directory. The passed arguments should NOT be
## prefixed with a -D
##
## This does essentially the same thing as "add_definitions"
## function, except "-D" should not be prefixed to the define
##
#################################################
macro( add_srcdir_definitions )
  #get_property( EXISTING DIRECTORY PROPERTY COMPILE_DEFINITIONS )
  #message(STATUS "BEFORE: ${EXISTING}")
  set_property( DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS ${ARGN} )
endmacro( add_srcdir_definitions )










