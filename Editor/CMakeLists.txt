# Editor/CMakeLists.txt
file(GLOB_RECURSE EDITOR_SRC CONFIGURE_DEPENDS src/*.cpp src/*.h)

add_executable(Editor ${EDITOR_SRC})

target_link_libraries(Editor PRIVATE Engine imgui)

target_include_directories(Editor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
