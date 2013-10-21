# see:
# http://www.cmake.org/Wiki/CMake_RPATH_handling
#
# Note that this should be called *after* CMAKE_INSTALL_PREFIX
# has been set!

macro( setup_rpath  )

set( CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib" CACHE STRING "" )

if(APPLE)
  set( CMAKE_INSTALL_NAME_DIR ${CMAKE_INSTALL_PREFIX}/lib CACHE STRING "" )
endif(APPLE)

set( CMAKE_SKIP_RPATH                   FALSE CACHE BOOL "" )
set( CMAKE_SKIP_BUILD_RPATH             FALSE CACHE BOOL "" )
set( CMAKE_BUILD_WITH_INSTALL_RPATH     FALSE CACHE BOOL "" )
set( CMAKE_INSTALL_RPATH_USE_LINK_PATH  TRUE  CACHE BOOL "" )

mark_as_advanced( 
  CMAKE_INSTALL_RPATH 
  CMAKE_SKIP_RPATH 
  CMAKE_SKIP_BUILD_RPATH 
  CMAKE_BUILD_WITH_INSTALL_RPATH 
  CMAKE_INSTALL_RPATH_USE_LINK_PATH 
)

endmacro( setup_rpath  )

