#
# Build knTiledMap library
#

set( LIB_NAME    "knTiledMap" )
set( DIR_NAME    "knTiledMap" )
set( EXPORT      "knTiledMap" )
set( EXPORT_NAME "${EXPORT}_Export" )
set( EXPORT_FILE "${EXPORT_NAME}.h" )
string( TOUPPER  "${EXPORT}_BUILD_DLL" EXPORT_DEFINE )

set( SOURCES
  ${MIRO_MAKEPARAMS_SOURCES}
)

set( HEADERS
  ${MIRO_MAKEPARAMS_HEADERS}
  ${EXPORT_FILE}
  MultiResTile.h
  Tile.h
  TileBase.h
  TileCache.h
  TileFactory.h
  TiledMap.h
  TiledMapBase.h
  ScrollingMapTile.h
  ScrollingTiledMap.h
)

add_definitions(-D${EXPORT_DEFINE})

#add_library(${LIB_NAME} SHARED
#  ${SOURCES}
#  ${HEADERS}
#)

#link_libraries(
#  ${LIB_NAME}
#)

set( TEST_TARGETS
  tiledMapTest
  multiResMapTest
  scrollingTiledMapTest
)

foreach( TEST_TARGET ${TEST_TARGETS} )
  add_executable( ${TEST_TARGET} 
    ${TEST_TARGET}.cpp 
  )
endforeach( TEST_TARGET ${TEST_TARGETS} )

#install_library(  ${LIB_NAME} )
install_files  ( /include/${DIR_NAME} FILES ${HEADERS} )
install_targets( /bin ${TEST_TARGETS} )
