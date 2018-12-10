set(TARGET genericCommandGui )

## Qt UI
##------------------------------------------------
set( UIC_SOURCES GenericCommandWidgetUi.ui )
qt4_wrap_ui( UIC_FILES ${UIC_SOURCES} )

## Miro parameters
##------------------------------------------------
miro_makeparams(CommandGuiParameters.xml )

set(SOURCES 
  ${MIRO_MAKEPARAMS_SOURCES}
  #AccessControlStateSubscriber.cpp
  ArgBoolWidget.cpp
  ArgWidgetFactory.cpp
  CommandConfigSubscriber.cpp
  CommandEditWidget.cpp
  CommandPublisher.cpp
  DoubleEdit.cpp
  GenericCommandWidget.cpp
  SubsystemWidget.cpp
  ${TARGET}.cpp
)

set(HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ParamValue.h
  ArgWidgetFactory.h
)

set( MOC_HEADERS
  #AccessControlStateSubscriber.h
  ArgBoolWidget.h
  CommandConfigSubscriber.h
  CommandEditWidget.h
  CommandPublisher.h
  DoubleEdit.h
  GenericCommandWidget.h
  SubsystemWidget.h
)

if( QT_VERSION_MAJOR GREATER 3 AND QT_VERSION_MINOR GREATER 5 )
  #message( STATUS "QT_HAS_QVECTOR3D" )
  add_srcdir_definitions( QT_HAS_QVECTOR3D )
  set( SOURCES  ${SOURCES} 
       ArgVec3dWidget.cpp
  )
  set( MOC_HEADERS ${MOC_HEADERS}
       ArgVec3dWidget.h
  )
endif( QT_VERSION_MAJOR GREATER 3 AND QT_VERSION_MINOR GREATER 5 )

qt4_wrap_cpp(MOC_FILES ${MOC_HEADERS})

include_directories( 
  ${CMAKE_CURRENT_BINARY_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
)
link_libraries(
  rapidDds
  ${QT_QTCORE_LIBRARY}
  ${QT_QTGUI_LIBRARY}
  ${QT_QTXML_LIBRARY}
  ${QT_QTNETWORK_LIBRARY}
  ${MIRO_miroCore_LIBRARY}
  ${MIRO_miroXml_LIBRARY}
  ${KNDDS_knDds_LIBRARY}
)

add_srcdir_definitions( ${RTIDDS_DEFINES} )
add_executable(${TARGET}
  ${SOURCES}
  ${HEADERS}
  ${MOC_HEADERS}
  ${MOC_FILES}
  ${UIC_FILES}
)

install_targets( /bin ${TARGET} )
