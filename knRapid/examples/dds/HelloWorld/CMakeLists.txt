set( LIB_NAME    "HelloWorld" )
set( DIR_NAME    "${LIB_NAME}" )

file( GLOB ALL_IDL_FILENAMES "${CMAKE_CURRENT_SOURCE_DIR}/*.idl" )

rtidds_wrap_idl( ${ALL_IDL_FILENAMES} )

include_directories( ${RTIDDS_INCLUDE_DIR} )
link_libraries( ${RTIDDS_LIBRARIES} )

add_library( ${LIB_NAME} 
  ${RTIDDS_IDL_GENERATED}
)

add_target_definitions( ${LIB_NAME} NDDS_USER_DLL_EXPORT )
add_srcdir_definitions( ${RTIDDS_DEFINES} )

link_libraries( ${LIB_NAME} )
if( UNIX ) 
  link_libraries( dl )
endif( UNIX )

set( TARGETS
  HelloWorld_publisher
  HelloWorld_subscriber 
)

foreach( TARGET ${TARGETS} ) 
	add_executable( ${TARGET} 
		${TARGET}.cxx
	)
endforeach( TARGET ${TARGETS} ) 

install_targets( /bin ${TARGETS} )
#install_library( ${LIB_NAME} )
#install_files  ( /include/${DIR_NAME} FILES ${RTIDDS_IDL_GENERATED_HEADERS})
#install_files  ( /idl/${DIR_NAME}     FILES ${ALL_IDL_FILENAMES} )

