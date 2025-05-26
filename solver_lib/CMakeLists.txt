cmake_minimum_required(VERSION 3.10)

add_library(solver_lib STATIC solver.cpp solver.h)
target_include_directories(solver_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
