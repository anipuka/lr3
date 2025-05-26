cmake_minimum_required(VERSION 3.10)
project(formatter)

add_library(formatter STATIC formatter.cpp formatter.h)

target_include_directories(formatter PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)
