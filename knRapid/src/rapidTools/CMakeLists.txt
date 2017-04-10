set( TARGETS "" )

set( TARGET idl-strip-copy )
add_executable( ${TARGET} ${TARGET}.cpp )
set( TARGETS ${TARGETS} ${TARGET} )

##----------------------------------------
install_targets( /bin ${TARGETS} )

#add_build_switch( imageSensorSampleGui QT_FOUND AND KNRAPID_HAS_DDS )
#add_build_switch( genericCommandGui    QT_FOUND AND KNRAPID_HAS_DDS )
#add_build_switch( rapidLogTools        QT_FOUND AND KNRAPID_HAS_DDS )

