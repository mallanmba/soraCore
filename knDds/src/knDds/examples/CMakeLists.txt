set( ALL_IDL_FILENAMES
	HelloWorld.idl
)

rtidds_wrap_idl( ${ALL_IDL_FILENAMES} )

add_srcdir_definitions( ${RTIDDS_DEFINES} )

include_directories( ${RTIDDS_INCLUDE_DIR} )

link_libraries(
 ${RTIDDS_LIBRARIES}
)

add_library(knDdsExample STATIC
  ${RTIDDS_IDL_GENERATED}
)

link_libraries( knDdsExample knDds )

set( HELLO_TARGETS
  ddsHelloWorldSubscriber
  ddsHelloWorldPublisher
  typedHelloWorldPublisher
  typedHelloWorldCopyPublisher
  typedHelloWorldConnector
  typedHelloWorldColocated
  typedHelloWorldPullConsumer
  typedHelloWorldPullCondConsumer
  typedHelloWorldEventLoopConsumer
  rawWriter
)

foreach( HELLO_TARGET ${HELLO_TARGETS} )
	add_executable( ${HELLO_TARGET} 
		${HELLO_TARGET}.cpp
	)
endforeach( HELLO_TARGET ${HELLO_TARGETS} )

set(XML_FILES
LBEDRawWriter.xml LBPDRawWriter.xml LBPQosProfiles.xml )

install_targets( /bin ${HELLO_TARGETS} )
install_files(/bin FILES ${XML_FILES} )
