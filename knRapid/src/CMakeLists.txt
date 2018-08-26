# FIXME use add_subdirectory for rapidTools because build switches are 
# broken when a project does not have any libraries to export
add_subdirectory( rapidTools )

add_build_slave ( rapidDds            KNRAPID_HAS_DDS )
add_build_slave ( rapidExtDds         KNRAPID_HAS_DDS )
add_build_slave ( rapidExtArcDds      KNRAPID_HAS_DDS )
add_build_slave ( rapidExtTraclabsDds KNRAPID_HAS_DDS )
add_build_switch( rapidUtil           KNRAPID_HAS_DDS AND EIGEN3_FOUND )
add_build_switch( rapidIo             KNRAPID_HAS_DDS AND EIGEN3_FOUND )
add_build_switch( rapidExtIo          KNRAPID_HAS_DDS AND EIGEN3_FOUND )
add_build_switch( rapidExtArcIo       KNRAPID_HAS_DDS AND EIGEN3_FOUND )
add_build_switch( rapidExtTraclabsIo  KNRAPID_HAS_DDS AND EIGEN3_FOUND )
add_build_switch( rapidCommanding     KNRAPID_HAS_DDS ) #AND NOT WIN32 ) # compile failure in ACE_NS_Thread.inl
add_build_switch( rapidFrameStore     KNRAPID_HAS_DDS AND EIGEN3_FOUND)
add_build_switch( knFrameStoreSvc     KNRAPID_HAS_DDS AND EIGEN3_FOUND )
add_build_switch( knSystemInfo        NOT APPLE AND UNIX )
add_build_switch( knSystemInfoSvc     KNRAPID_HAS_DDS AND KNRAPID_BUILD_knSystemInfo )
add_subdirectory( knFetchPool )
add_build_switch( knRaft              KNRAPID_BUILD_rapidCommanding )
add_build_switch( knProcessManager    KNRAPID_HAS_DDS AND UNIX )





