find_package (Boost COMPONENTS system filesystem unit_test_framework  REQUIRED)


# Find all subdirectories in dev/
file(GLOB SUBDIRS RELATIVE ${CMAKE_SOURCE_DIR}/dev ${CMAKE_SOURCE_DIR}/dev/*)

file(GLOB_RECURSE PROJECT_INCLUDES
    #${CMAKE_SOURCE_DIR}/test/*.cpp
    ${CMAKE_SOURCE_DIR}/dev/**/*.h
)


# Add dev root itself
include_directories(${CMAKE_SOURCE_DIR}/dev)

# Add each subdirectory automatically
foreach(subdir ${SUBDIRS})
    if(IS_DIRECTORY ${CMAKE_SOURCE_DIR}/dev/${subdir})
        include_directories(${CMAKE_SOURCE_DIR}/dev/${subdir})
    endif()
endforeach()


include_directories (
    ${lib.algsin81_SOURCE_DIR}
    ${Boost_INCLUDE_DIRS}
)

file(GLOB_RECURSE PROJECT_SOURCES
    ${CMAKE_SOURCE_DIR}/test/*.cpp
    #${CMAKE_SOURCE_DIR}/dev/**/*.h
)

add_executable (lib.test ${PROJECT_SOURCES}  "test.cpp")
target_link_libraries (
    lib.test
    lib.algsin81
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
    ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)
enable_testing()
add_test (NAME kmp COMMAND lib.test)
