cmake_minimum_required(VERSION 2.8)
project(Program3_Chou)

set(CMAKE_CXX_STANDARD 14)

add_executable(Program3_Chou main.cpp Function.cpp Function.h)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Table1.csv
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Table2.csv
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
