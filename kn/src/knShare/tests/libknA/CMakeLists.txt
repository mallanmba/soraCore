# libA
#---------------------------------------

set( BASE_LIB_NAME     libknA )
set( BASE_DIR_NAME    "${LIB_NAME}" )
set( EXPORT_NAME "${BASE_LIB_NAME}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${BASE_LIB_NAME}_BUILD_DLL" BASE_EXPORT_DEFINE )

set( BASE_SOURCES
  libA.cpp
)

set( BASE_HEADERS
  ${EXPORT_FILE}
  libA.h
)

link_libraries(
  libknC
)

add_library( ${BASE_LIB_NAME} SHARED
  ${BASE_SOURCES}
  ${BASE_HEADERS}
)

# add target-specific defines
# *_BUILD_DLL required on win32 for proper dll linkage
set_property(
  TARGET ${BASE_LIB_NAME}
  PROPERTY COMPILE_DEFINITIONS ${BASE_EXPORT_DEFINE}
)

project_library( ${BASE_LIB_NAME} )
