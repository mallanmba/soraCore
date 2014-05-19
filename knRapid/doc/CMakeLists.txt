
if(DOXYGEN_FOUND)
  
  doxygen_set_working_dir( )
  doxygen_create_tagfile_list( irgUtil 
                               kn 
                               knDds )
  # don't search the generated code directories
  doxygen_create_exclude_list( ${CMAKE_BINARY_DIR}/src/rapidDds  
                               ${CMAKE_BINARY_DIR}/src/rapidExtDds  
                               ${CMAKE_BINARY_DIR}/src/rapidExtArcDds  
                               ${CMAKE_BINARY_DIR}/src/rapidExtTraclabsDds  
                               ${CMAKE_BINARY_DIR}/src/rapidTests
                               ${CMAKE_BINARY_DIR}/src/rapidTools/genericCommandGui
                               ${CMAKE_BINARY_DIR}/src/rapidTools/imageSensorSampleGui )
  doxygen_create_doc_target( )
  
endif(DOXYGEN_FOUND)
