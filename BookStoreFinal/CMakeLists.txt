cmake_minimum_required(VERSION 3.6)
project(BookStoreFinal)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Inventory.cpp Book.cpp WaitList.cpp)
add_executable(BookStoreFinal ${SOURCE_FILES})