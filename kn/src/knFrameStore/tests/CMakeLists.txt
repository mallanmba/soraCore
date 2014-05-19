include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/.. )

set( TEST_TARGETS
#  aTransTest
  frameStoreTest
  frameTreeNodeTest
  treeNodeTest
)

link_libraries(
  knFrameStore
)

foreach( TARGET ${TEST_TARGETS} )
  add_executable( ${TARGET} ${TARGET}.cpp)
endforeach( TARGET ${TEST_TARGETS} )


#-- install ----------------
install_targets( /tests ${TEST_TARGETS} )

#-- testing ----------------
if(CTEST_ENABLED) 

  
endif(CTEST_ENABLED) 
