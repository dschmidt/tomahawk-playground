

add_library(tomahawklib SHARED libtomahawk.cpp )

add_library(tomahawklib-database-sqlite SHARED databasecommand_addfiles.cpp)
set_target_properties(tomahawklib-database-sqlite PROPERTIES COMPILE_DEFINITIONS BUILD_DATABASE)

# add_library(tomahawklib-database-amarok SHARED databasecommand_amarok_addfiles.cpp)

add_executable(tomahawk main.cpp)
set_target_properties(tomahawklib-database-sqlite PROPERTIES COMPILE_DEFINITIONS BUILD_LIBTOMAHAWK)
target_link_libraries(tomahawk tomahawklib tomahawklib-database-sqlite tomahawklib tomahawklib-database-sqlite tomahawklib)

# add_executable(amarok-plugin main.cpp)
# target_link_libraries(amarok-plugin tomahawklib tomahawklib-database-amarok)