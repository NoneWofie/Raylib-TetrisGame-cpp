# Static Lib Build
SET(BUILD_SHARED_LIBS OFF)

include(FetchContent)
FetchContent_Declare(sfml_source
        URL https://github.com/SFML/SFML/archive/refs/tags/2.6.2.tar.gz
        EXCLUDE_FROM_ALL
)

FetchContent_MakeAvailable(sfml_source)