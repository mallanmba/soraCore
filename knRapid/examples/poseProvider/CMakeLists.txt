set(TARGET poseProvider)

set(SOURCES 
  poseProvider.cpp
)

set(HEADERS
)

include_directories( 
  ${KN_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${ACE_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${EIGEN3_INCLUDE_DIR}
)

link_libraries(
  rapidIo
)

add_srcdir_definitions( ${RTIDDS_DEFINES} )

add_executable(${TARGET}
  ${SOURCES}
  ${HEADERS}
)

#install_targets( /bin ${TARGET} )


