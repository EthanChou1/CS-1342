cmake_minimum_required(VERSION 2.8)
project(Program5_Chou)

set(CMAKE_CXX_STANDARD 14)

add_executable(Program5_Chou main.cpp Contact.cpp Contact.h Rolodex.cpp Rolodex.h)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/data.csv
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/data_small.csv
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
