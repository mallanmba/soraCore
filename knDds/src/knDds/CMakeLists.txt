set( LIB_NAME knDds )
set( DIR_NAME "${LIB_NAME}" )
set( EXPORT_NAME  "${LIB_NAME}_Export" )
set( EXPORT_FILE  "${EXPORT_NAME}.h" )
string( TOUPPER   "${LIB_NAME}_BUILD_DLL" EXPORT_DEFINE )

include_directories( ${RTIDDS_INCLUDE_DIR} )

miro_makeparams( KnDdsParameters.xml )

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
  DdsDataHandler.cpp
  DdsEntitiesFactory.cpp
  DdsEntitiesFactorySvc.cpp
  DdsEntityRepositories.cpp
  DdsEventHandler.cpp
  DdsEventLoop.cpp
  DdsPushConsumer.cpp
  DdsSupport.cpp
  DdsTypedConsumer.cpp
  DdsTypedSupplier.cpp
  DdsTypeRegistrator.cpp
)

# headers need to be added for MSVC project generation
set( HEADERS
  ${EXPORT_FILE}
  ${MIRO_MAKEPARAMS_HEADERS}
  DdsDataHandler.h
  DdsEntitiesFactory.h
  DdsEntitiesFactorySvc.h
  DdsEntityRepositories.h
  DdsEventHandler.h
  DdsEventLoop.h
  DdsPushConsumer.h
  DdsReaderAccessFunctors.h
  DdsSupport.h
  DdsTypedConnector.h
  DdsTypedConsumer.h
  DdsTypedSupplier.h
  DdsTypeRegistrator.h
)

add_library( ${LIB_NAME} SHARED
  ${SOURCES}
  ${HEADERS}
)

include_directories(
  ${ACE_INCLUDE_DIR}
  ${MIRO_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${QT_QTXML_INCLUDE_DIR}
  ${QT_QTCORE_INCLUDE_DIR}
  ${RAPID_INCLUDE_DIR}
  ${RTIDDS_INCLUDE_DIR}
)

# export define only applies to lib
add_target_definitions( ${LIB_NAME} ${EXPORT_DEFINE} )
# DDS defines apply to all projects in this directory
add_srcdir_definitions( ${RTIDDS_DEFINES} )

## NOTE catkin_build 
## Unexplained linking failures occur with the knDds examples if qt_gui_cpp
## is added to the find_package(catkin...) list, e.g. 
## .../libnddscore.so: undefined reference to `dlopen'
## .../libnddscore.so: undefined reference to `dlclose'
## .../libnddscore.so: undefined reference to `dlerror'
## .../libnddscore.so: undefined reference to `dlsym'
## Adding ${CMAKE_DL_LIBS} (dl) to the link line on the examples does not fix
## the problem, but adding ${CMAKE_DL_LIBS} immediately after ${RTIDDS_LIBRARIES}
## does. Note that ${RTIDDS_LIBRARIES} ALREADY has -ldl in the variable. However,
## while the RTIDDS_LIBRARIES variable has the full paths to the RTI libraries, 
## the link line does NOT. I don't know if it is catkin or cmake that is munging 
## the contents of the RTIDDS_LIBRARIES variable but non-deterministic behavior 
## in a build system is not OK. 

target_link_libraries( ${LIB_NAME}
  ${ACE_LIBRARIES}
  ${MIRO_miroXml_LIBRARY}
  ${RTIDDS_LIBRARIES}
  ${CMAKE_DL_LIBS}
  ${KN_knShare_LIBRARY}
  ${catkin_LIBRARIES}
  ${QT_QTXML_LIBRARY}
  ${QT_QTCORE_LIBRARY}
)

if ( KNDDS_HAS_DDS_LBPlugin )
  target_link_libraries( ${LIB_NAME}
    ${RTIDDS_LB_LIBRARIES}
  )
  include_directories(
    ${RTIDDS_LB_INCLUDE_DIR}
  )
endif ( KNDDS_HAS_DDS_LBPlugin )

if ( KNDDS_HAS_DDS_Monitor )
  target_link_libraries( ${LIB_NAME}
    ${RTIDDS_MON_LIBRARIES}
  )
endif ( KNDDS_HAS_DDS_Monitor )

if ( KNDDS_HAS_RTI_DistLogger )
  target_link_libraries( ${LIB_NAME}
    ${RTIDDS_DLOGGER_LIBRARIES}
  )
endif ( KNDDS_HAS_RTI_DistLogger )

add_subdirectory(examples)

install_library( ${LIB_NAME}  )
install_files  ( /include/knDds FILES ${HEADERS} )

