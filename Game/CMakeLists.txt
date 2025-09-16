# Game/CMakeLists.txt
file(GLOB_RECURSE GAME_SRC CONFIGURE_DEPENDS src/*.cpp src/*.h)

add_executable(Game ${GAME_SRC})

target_link_libraries(Game PRIVATE Engine)

target_include_directories(Game PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
