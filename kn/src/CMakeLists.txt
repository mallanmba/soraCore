# 
# Build kn base components
#

add_build_switch( knShare       Boost_FOUND )
add_build_switch( knMath        EIGEN3_FOUND )
add_build_switch( knFrameStore  Boost_FOUND AND EIGEN3_FOUND )
add_build_switch( knMotorShare  EIGEN3_FOUND )
add_build_switch( knFetchPool   MIRO_miroXml_LIBRARY AND QT_FOUND AND Boost_FOUND )
add_build_switch( knSystemInfo  NOT APPLE AND UNIX )
add_subdirectory( knTiledMap )
