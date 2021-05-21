cmake_minimum_required(VERSION 3.4)
project(Transaction)

option (BUILD_TESTS "Build tests" OFF)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Account STATIC ${CMAKE_CURRENT_SOURCE_DIR}/banking/Account.cpp)
add_library(Transaction STATIC ${CMAKE_CURRENT_SOURCE_DIR}/banking/Transaction.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/banking)

target_link_libraries(Transaction Account)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third-party/gtest)
  file(GLOB ${PROJECT_NAME}_TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
  add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
  target_link_libraries(check ${PROJECT_NAME} gtest_main)
  add_test(NAME first_test COMMAND check)
endif()
