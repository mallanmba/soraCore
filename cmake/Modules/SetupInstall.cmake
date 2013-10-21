include(AppendInternalList)
initialize_internal_list(INSTALL_LIBRARY_LIST)

# setup a 'make uninstall' target if we find a 
# cmake_uninstall.cmake.in in the module path
#===========================================================
foreach( MODULE_PATH ${CMAKE_MODULE_PATH} )
  set( UNINSTALL_IN  "${MODULE_PATH}/cmake_uninstall.cmake.in" )
  set( UNINSTALL_OUT "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake" )
  if( EXISTS ${UNINSTALL_IN} )
    configure_file( "${UNINSTALL_IN}"
                    "${UNINSTALL_OUT}"
                    IMMEDIATE @ONLY
    )
    add_custom_target(uninstall
                   "${CMAKE_COMMAND}" -P "${UNINSTALL_OUT}")
    break()
  endif( EXISTS ${UNINSTALL_IN} )
endforeach( MODULE_PATH )

# this convenience macro saves typing in CMakeLists.txt and
# sets things up property for windows where lib does in lib, 
# but the runtime dll should go in bin
#===========================================================
macro( install_library TARGET_NAME )
  #message( STATUS "install_library( ${TARGET_NAME} )" )
  install(TARGETS ${TARGET_NAME}
          EXPORT ${PROJECT_NAME} 
          ARCHIVE DESTINATION lib 
          LIBRARY DESTINATION lib 
          RUNTIME DESTINATION bin
  )
  
  # maintain a list of libraries so we can avoid doing 
  # an 'export' if the list is empty
  append_internal_list( INSTALL_LIBRARY_LIST ${TARGET_NAME} )
  
  # if soversion variables have been set, set the property
  # e.g. FOO_SOVERSION = 3.0.0, FOO_SOVERSION_MAJOR = 3
  if( DEFINED ${PROJECT_UPPER}_SOVERSION AND DEFINED ${PROJECT_UPPER}_SOVERSION_MAJOR )
    set_target_properties( ${TARGET_NAME}
      PROPERTIES
        VERSION   ${${PROJECT_UPPER}_SOVERSION}
        SOVERSION ${${PROJECT_UPPER}_SOVERSION_MAJOR}
    )
  endif( DEFINED ${PROJECT_UPPER}_SOVERSION AND DEFINED ${PROJECT_UPPER}_SOVERSION_MAJOR )
  
endmacro( install_library )

# this macro could use a better name... it's the same 
# as the above, but without the EXPORT directive. Use this
# for test and example libraries
#===========================================================
macro( project_library TARGET_NAME )
  install(TARGETS ${TARGET_NAME}
          ARCHIVE DESTINATION lib 
          LIBRARY DESTINATION lib 
          RUNTIME DESTINATION bin
  )
endmacro( project_library )


# install a project export file into /lib/cmake
#===========================================================
macro( install_export )
  set( DO_EXPORT FALSE )
  if( INSTALL_LIBRARY_LIST ) 
    set( DO_EXPORT TRUE)
  endif( INSTALL_LIBRARY_LIST ) 

  if(DO_EXPORT)
    install( EXPORT ${PROJECT_NAME} DESTINATION lib/cmake )
  else(DO_EXPORT)
    message( STATUS "** Skipping EXPORT because it appears there are no libraries to export **" )
  endif(DO_EXPORT)
endmacro( install_export )
