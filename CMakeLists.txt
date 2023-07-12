cmake_minimum_required(VERSION 3.0.0)
project(OSMessage VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# add_library(OSMessage OSMessage.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

###########
##  test ##
###########
set(TEST mytest)
add_executable(${TEST} test.cc CPU/CPU.cc)
target_include_directories(${TEST} PRIVATE CPU)
