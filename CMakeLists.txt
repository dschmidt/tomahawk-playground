

add_library(tomahawklib SHARED libtomahawk.cpp )

add_library(tomahawklib-database SHARED databasecommand_addfiles.cpp)

add_executable(tomahawk main.cpp)
target_link_libraries(tomahawk tomahawklib tomahawklib-database)
