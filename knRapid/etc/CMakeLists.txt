file(GLOB NDDS_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *NDDS* ) 
#install_files(/etc/rapid FILES ${NDDS_FILES} )

file(GLOB DDS_PROFILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.xml )
install_files(/etc FILES ${DDS_PROFILES})
install_files(/bin FILES ${DDS_PROFILES})

#message(STATUS "DDS_PROFILES=${DDS_PROFILES}")

install_files(/etc FILES NDDS_DISCOVERY_PEERS )
install_files(/bin FILES NDDS_DISCOVERY_PEERS )

add_subdirectory( rtiRoutingService )
