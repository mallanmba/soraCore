include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

add_subdirectory( libknA )
add_subdirectory( libknB )
add_subdirectory( libknC )

link_libraries(
  knShare
)

set( TARGETS
  asyncTest
  chronoAceTime
  singletonFooTest
  singletonTest
  repositorySingletonTest
  singletonLibraryTest
)

foreach( TARGET ${TARGETS} )
	add_executable( ${TARGET} 
		${TARGET}.cpp)
	# add target to DartTestfile.txt - [db] 6/4/08
	add_test(${TARGET} ${CTEST_BIN_PATH}/${TARGET})
endforeach( TARGET ${TARGETS} )

target_link_libraries( chronoAceTime ${Boost_CHRONO_LIBRARY})
target_link_libraries( singletonFooTest libknA libknB libknC)
target_link_libraries( repositorySingletonTest libknA libknB libknC)
target_link_libraries( singletonTest libknA libknB libknC)

install_targets( /tests ${TARGETS} )
