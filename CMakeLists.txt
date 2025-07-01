cmake_minimum_required(VERSION 3.31)
project(data_structures)

set(CMAKE_CXX_STANDARD 20)

aux_source_directory(source src)
add_library(data_structures STATIC ${src})
target_include_directories(data_structures PUBLIC include)