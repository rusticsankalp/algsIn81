find_package (Boost COMPONENTS system filesystem unit_test_framework  REQUIRED)
include_directories (
    ${CMAKE_SOURCE_DIR}/dev/patterns
    ${CMAKE_SOURCE_DIR}/dev/graphs
    ${lib.algsin81_SOURCE_DIR}
    ${Boost_INCLUDE_DIRS}
)

add_executable (lib.test KMPtest.cpp DenseGraphTests.cpp)
target_link_libraries (
    lib.test
    lib.algsin81
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
    ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)
enable_testing()
add_test (NAME kmp COMMAND lib.test)
