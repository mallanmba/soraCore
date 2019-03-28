set(TARGET rapidLogReader)

set(HEADERS
  DeclareDataProvider.h
  DeclareRapid.h
  DeclareRapidExt.h
  DeclareRapidExtArc.h
  TypedLogDataProvider.h
  TypedLogDataListener.h
  TopicLogHeader.h
  TopicLogFileReader.h
  TopicLogSet.h
  PositionSampleDistance.h
  RangeScanText.h
)

set(SOURCES 
  main.cpp
  TopicLogFileReader.cpp
  TopicLogSet.cpp
  PositionSampleDistance.cpp
  RangeScanText.cpp
)

include_directories( 
  ${CMAKE_CURRENT_BINARY_DIR}/../../../rapidDds
  ${Boost_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
)

link_libraries(
  rapidDds
  rapidExtDds
  rapidExtArcDds
  ${QT_QTCORE_LIBRARY}
)

add_srcdir_definitions( ${RTIDDS_DEFINES} )

add_executable(${TARGET}
  ${SOURCES}
  ${HEADERS}
)

install_targets( /bin ${TARGET} )


