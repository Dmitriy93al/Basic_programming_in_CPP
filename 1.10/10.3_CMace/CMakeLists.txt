cmake_minimum_required(VERSION 3.22.0)

project(my_hwork_3)

add_executable(my_hwork_3 HomeWork10_3.cpp)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(my_work SHARED Leaver.h Leaver.cpp)

target_link_libraries(my_hwork_3 my_work)