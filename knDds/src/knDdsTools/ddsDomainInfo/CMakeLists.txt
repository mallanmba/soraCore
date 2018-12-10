set(TARGET ddsDomainInfo )

## Qt UI
##------------------------------------------------
#set( UIC_SOURCES GenericCommandWidgetUi.ui )
#qt4_wrap_ui( UIC_FILES ${UIC_SOURCES} )

set(SOURCES 
  BuiltinHandler.cpp
  main.cpp
)

set(HEADERS
  BuiltinTraits.h
  BuiltinHandler.h
)

set( MOC_HEADERS
)

#qt4_wrap_cpp(MOC_FILES ${MOC_HEADERS})

include_directories( 
  ${CMAKE_CURRENT_BINARY_DIR}
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
)
link_libraries(
  knDds
)

add_srcdir_definitions( ${RTIDDS_DEFINES} )
add_executable(${TARGET}
  ${SOURCES}
  ${HEADERS}
  ${MOC_HEADERS}
  ${MOC_FILES}
  ${UIC_FILES}
)

if(WIN32)
  target_link_libraries( ${TARGET} Shlwapi )
endif(WIN32)



install_targets( /bin ${TARGET} )
