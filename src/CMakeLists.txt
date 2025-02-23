add_executable(
    ${CMAKE_PROJECT_NAME} main.cpp Grid.cpp include/Grid.hpp include/Block.hpp include/Position.hpp Position.cpp include/Colors.hpp Colors.cpp Block.cpp Blcoks.cpp
)

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE include)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE RAYLIB5_lib)