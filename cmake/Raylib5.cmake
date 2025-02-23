# Build Static
SET(BUILD_SHARED_LIBS OFF) 

include(FetchContent)
FetchContent_Declare(raylib5_source
        URL https://github.com/raysan5/raylib/archive/refs/tags/5.5.tar.gz
        EXCLUDE_FROM_ALL
)

FetchContent_MakeAvailable(raylib5_source)

add_library(RAYLIB5_lib INTERFACE)
target_link_libraries(
        RAYLIB5_lib PUBLIC INTERFACE raylib
)