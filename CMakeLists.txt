cmake_minimum_required(VERSION 3.31)
project(TetrisGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Adding CMAKE Module PATH
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(NotInSourceBuild)

# Setting up Raylib 5
include(Raylib5)

# Add Src DIR
add_subdirectory(src bin)