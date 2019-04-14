cmake_minimum_required(VERSION 3.10)
cmake_policy(VERSION 3.12)
project(PROVATEST)

#add_subdirectory(src)
#add_subdirectory(test)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")


# Library
include_directories(${PROVATEST_SOURCE_DIR}/include)
add_library(MyLib src/mylib.cpp)

# Demo
add_executable(Demo src/main.cpp)
target_link_libraries(Demo MyLib)

# Test
find_package(GTest REQUIRED)
add_executable(MyTest test/test_mylib.cpp)
target_link_libraries(MyTest MyLib GTest::GTest GTest::Main)

enable_testing()

gtest_discover_tests(MyTest)
#add_test(NAME MyTest COMMAND MyTest)