set(TARGET rapidLogTopicInfo)

set(SOURCES 
  rapidLogTopicInfo.cpp
)

set(HEADERS
)

include_directories( 
  ${IRGUTIL_INCLUDE_DIR} 
  ${KNRAPID_INCLUDE_DIR}
)

link_libraries(
  ${QT_QTCORE_LIBRARY}

)

add_executable(${TARGET}
  ${SOURCES}
  ${HEADERS}
)

install_targets( /bin ${TARGET} )

add_subdirectory(rapidLogReader)
#add_subdirectory(rapidLogTest)

