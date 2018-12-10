set( LIB_NAME     "rapidExtTraclabsIo" )
set( DIR_NAME     "rapidExtTraclabsIo" )
set( EXPORT_NAME  "rapidExtTraclabsIo_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( RapidExtTraclabsIoParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  NoticeIo.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  NoticeIo.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}/../rapidDds
)

link_libraries(
  rapidDds
  rapidExtTraclabsDds
  rapidUtil
  rapidIo
  ${KN_knShare_LIBRARY}  
  ${MIRO_miroXml_LIBRARY}  
  ${KNDDS_knDds_LIBRARY}  
)


add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )
add_srcdir_definitions(${RTIDDS_DEFINES} RTIDDS_FOUND )

#
# rapid ext arc printers
#=============================

link_libraries(
  ${LIB_NAME}
)

set( TARGETS
 noticeAckPrinter
 noticePrinter
)

foreach( TARGET ${TARGETS} ) 
  add_executable( ${TARGET} 
    ${TARGET}.cpp
  )
endforeach( TARGET ${TARGETS} ) 

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /bin ${TARGETS} )
