cmake_minimum_required(VERSION 3.0)

project(wiggle)

add_subdirectory(examples)

add_library(wiggle INTERFACE)
target_include_directories(wiggle INTERFACE include)
