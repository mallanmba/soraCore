set( LIB_NAME     "rapidCommanding" )
set( DIR_NAME     "rapidCommanding" )
set( EXPORT_NAME  "rapidCommanding_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

## Miro parameters
##------------------------------------------------
miro_makeparams( CommandingParameters.xml )

## Library
##------------------------------------------------
set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  AccessControlImpl.h
  AdminImpl.h
  CommandExceptions.h
  CommandImpl.h
  CommandManager.h
  CommandManagerSvc.h
  MacroManager.h
  MobilityImplBase.h
  QueueImpl.h
)

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  AccessControlImpl.cpp
  AdminImpl.cpp
  CommandExceptions.cpp
  CommandImpl.cpp
  CommandManager.cpp
  CommandManagerSvc.cpp
  MacroManager.cpp
  MobilityImplBase.cpp
  QueueImpl.cpp
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${KNDDS_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${QT_QTXML_INCLUDE_DIR}
  ${QT_QTCORE_INCLUDE_DIR}
)

# there's some wicked weird black magic going on w/ boost
# on windows wrt transitive linking... adding the link dir is
# neccessary, as is having all the correct boost compile defines
link_directories( ${Boost_LIBRARY_DIRS} )

add_library(${LIB_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

target_link_libraries( ${LIB_NAME}
  rapidDds
  rapidIo
  rapidUtil
  ${KNRAPID_rapidDds_LIBRARY}
  ${KNRAPID_rapidIo_LIBRARY}
  ${KN_knShare_LIBRARY}
  ${KNDDS_knDds_LIBRARY}  
  ${MIRO_miroXml_LIBRARY}
  ${RTIDDS_LIBRARIES}
)

# export define only applies to lib
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )
# DDS defines apply to lib and test targets (all projects in this directory)
add_srcdir_definitions( ${RTIDDS_DEFINES} )

set( TARGETS
 commandManagerTest
 rapidCmdClient
)

foreach( TARGET ${TARGETS} ) 
  add_executable( ${TARGET} 
    ${TARGET}.cpp
      )
endforeach( TARGET ${TARGETS} ) 
target_link_libraries( commandManagerTest ${LIB_NAME} )
target_link_libraries( rapidCmdClient
  rapidDds
  rapidIo
  rapidUtil
  ${KNRAPID_rapidDds_LIBRARY}
  ${KNRAPID_rapidIo_LIBRARY}
  ${KN_knShare_LIBRARY}
  ${KNDDS_knDds_LIBRARY}  
  ${MIRO_miroXml_LIBRARY}
  ${RTIDDS_LIBRARIES}
)

install_library( ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_files  ( /etc/${DIR_NAME} FILES ${CONFIG_FILES} )
install_targets( /bin ${TARGETS} )
