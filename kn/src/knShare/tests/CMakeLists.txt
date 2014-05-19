include_directories( ${PROJECT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

add_subdirectory( libknA )
add_subdirectory( libknB )
add_subdirectory( libknC )

link_libraries(
  knShare
)

set( TARGETS
  array2DPerformance
  array2DTest
  asyncTest
  knChronoTest
  lruPoolTest
  repositorySingletonTest
  singletonFooTest
  singletonLibraryTest
  singletonTest
  stateMachineTest
)

if (NOT WIN32)
  set( TARGETS 
    ${TARGETS}
    knLatencyTest
  )
endif (NOT WIN32)

foreach( TARGET ${TARGETS} )
  add_executable( ${TARGET} ${TARGET}.cpp)
  target_link_libraries( ${TARGET}
    knShare
    ${Boost_THREAD_LIBRARY}
  )
endforeach( TARGET ${TARGETS} )

target_link_libraries( singletonFooTest        libknA libknB libknC)
target_link_libraries( repositorySingletonTest libknA libknB libknC)
target_link_libraries( singletonTest           libknA libknB libknC)
target_link_libraries( singletonLibraryTest    ${ACE_LIBRARIES})
if (NOT WIN32)
  target_link_libraries( knLatencyTest           ${ACE_LIBRARIES})
endif (NOT WIN32)


#-- install ----------------
install_targets( /tests ${TARGETS} )


#-- testing ----------------
if(CTEST_ENABLED) 

  add_test( asyncTest               ${CTEST_BIN_DIR}/asyncTest )
  set_tests_properties( asyncTest PROPERTIES PASS_REGULAR_EXPRESSION "MyException: object maeh" )
  
  add_test( repositorySingletonTest ${CTEST_BIN_DIR}/repositorySingletonTest )
  add_test( singletonLibraryTest    ${CTEST_BIN_DIR}/singletonLibraryTest )
  add_test( singletonTest           ${CTEST_BIN_DIR}/singletonTest )
  
endif(CTEST_ENABLED) 


