cmake_minimum_required(VERSION 3.16)
project(DuplicateFinder LANGUAGES CXX)
add_executable(duplicatefinder src/main.cpp)
target_compile_features(duplicatefinder PRIVATE cxx_std_17)