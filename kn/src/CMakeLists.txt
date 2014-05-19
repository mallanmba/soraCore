# 
# Build kn base components
#

add_build_switch( knShare           Boost_FOUND )
add_build_switch( knMath            EIGEN3_FOUND )
add_build_switch( knMotorShare      EIGEN3_FOUND )
add_build_switch( knFrameStore      Boost_FOUND AND EIGEN3_FOUND )
add_build_switch( knGeometry        Boost_FOUND AND EIGEN3_FOUND )
add_subdirectory( knTiledMap )
