# 
# Build kn base components
#

add_subdirectory( knShare )
add_build_switch( knMath            EIGEN3_FOUND )
add_build_switch( knMotorShare      EIGEN3_FOUND )
add_build_switch( knFrameStore      EIGEN3_FOUND )
add_build_switch( knGeometry        EIGEN3_FOUND )
add_subdirectory( knTiledMap )
