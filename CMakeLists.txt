cmake_minimum_required(VERSION 3.25) 
project(gtest_junk_yard)

# Avoid warning about DOWNLOAD_EXTRACT_TIMESTAMP in CMake 3.24:
if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
		cmake_policy(SET CMP0135 NEW)
endif()

set (CMAKE_CXX_STANDARD 17)

# include files for leetcode tests imports
include_directories("include/")
file(GLOB SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_library(core ${SRCFILES})
#foreach(FILE ${SRCFILES})
    #get_filename_component(FILENAME ${FILE} NAME_WLE) # this get the filename without the extension
    ##string(REGEX MATCH "[0-9]+" PROBLEM_ID ${FILE}) # match only up to the problem id
    ##add_executable(${PROBLEM_ID} ${FILE})
    #add_executable(${FILENAME} ${FILE})
#endforeach()

# Load Google Test
option(PACKAGE_TESTS "Build the tests" OFF)
if(PACKAGE_TESTS AND PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME)
    MESSAGE(STATUS "Setting Up Tests")
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()