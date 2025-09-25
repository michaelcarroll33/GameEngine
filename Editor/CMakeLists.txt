add_executable(Editor WIN32 main.cpp EditorApp.cpp EditorApp.h)

# Link Editor and SFML
target_link_libraries(Editor
    PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
        SFML::Audio
        ImGui-SFML::ImGui-SFML
)

target_link_libraries(Editor PRIVATE Engine)

target_include_directories(Editor PRIVATE ${CMAKE_SOURCE_DIR}/Engine)
