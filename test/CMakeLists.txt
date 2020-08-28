find_package (Boost COMPONENTS system filesystem unit_test_framework  REQUIRED)
include_directories (
    ${CMAKE_SOURCE_DIR}/dev
    $(CMAKE_SOURCE_DIR)/dev/graph
    $(CMAKE_SOURCE_DIR)/dev/graph/DenseGraph
    ${lib.algsin81_SOURCE_DIR}
    ${Boost_INCLUDE_DIRS}
)

add_executable (lib.test 
 KMPtest.cpp
 DenseGraphTest.cpp
)
target_link_libraries (
    lib.test
    lib.algsin81
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
    ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)


#file(COPY ${CMAKE_SOURCE_DIR}/test/res/twoNodeGraph.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_SOURCE_DIR}/test/res/twoNodeGraph.txt DESTINATION ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
#configure_file(${CMAKE_SOURCE_DIR}/test/res/twoNodeGraph.txt ${CMAKE_BINARY_DIR}/twoNodeGraph.txt  COPYONLY)
enable_testing()
#add_test(NAME kmp COMMAND lib.test)
add_test (NAME AllTests COMMAND lib.test )
