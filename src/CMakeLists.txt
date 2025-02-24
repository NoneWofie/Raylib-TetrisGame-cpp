SET(HEADER_FILES include/Block.hpp include/Colors.hpp include/Game.hpp include/Grid.hpp include/Position.hpp include/Blocks.hpp)

SET(SOURCE_FILES main.cpp Block.cpp Colors.cpp Game.cpp Grid.cpp Position.cpp)


add_executable(
    ${CMAKE_PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES}
)

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE include)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE RAYLIB5_lib)    