cmake_minimum_required(VERSION 3.10)
project(StringHelperProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GoogleTest 자동 다운로드
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# include 디렉토리
include_directories(src)

# 라이브러리 생성
add_library(StringHelper src/StringHelper.cc)

# 메인 실행파일
add_executable(main src/main.cc)
target_link_libraries(main StringHelper)

# 유닛 테스트
enable_testing()
add_executable(StringHelper_test test/StringHelper_test.cc)
target_link_libraries(StringHelper_test gtest_main StringHelper)
include(GoogleTest)
gtest_discover_tests(StringHelper_test)

