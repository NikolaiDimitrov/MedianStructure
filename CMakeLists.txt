cmake_minimum_required(VERSION 3.10)

project(Median)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set( project_sources
   main.cpp
   MedianStructure.cpp
)

add_executable(median "${project_sources}")

target_include_directories(median PUBLIC "${PROJECT_BINARY_DIR}")
