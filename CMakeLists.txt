cmake_minimum_required(VERSION 3.10)
project(StringHelperProject)
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Main library
add_library(StringHelper src/StringHelper.cc)

# Main executable
add_executable(string_helper_example src/main.cc)
target_link_libraries(string_helper_example StringHelper)

# Unit tests
find_package(GTest REQUIRED)
enable_testing()
add_executable(string_helper_tests test/StringHelper_test.cc)
target_link_libraries(string_helper_tests GTest::gtest GTest::gtest_main StringHelper)
add_test(NAME StringHelperTests COMMAND string_helper_tests)
