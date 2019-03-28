set(TARGET imageSensorSampleGui )

set( UIC_SOURCES RapidImageWidgetUi.ui )
qt4_wrap_ui( UIC_FILES ${UIC_SOURCES} )

set(SOURCES 
  RapidImageWidget.cpp
  ImageSensorSampleSubscriber.cpp
  Opts.cpp
  ${TARGET}.cpp
)

set(HEADERS
)

set( MOC_HEADERS
  RapidImageWidget.h
  ImageSensorSampleSubscriber.h
)

qt4_wrap_cpp(MOC_FILES ${MOC_HEADERS})

#message(STATUS "   QT_INCLUDE_DIR = ${QT_INCLUDE_DIR}" )
#message(STATUS "QT_QT_INCLUDE_DIR = ${QT_QT_INCLUDE_DIR}" )

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
