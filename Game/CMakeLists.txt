add_executable(Game WIN32 main.cpp GameApp.cpp GameApp.h)

# Link Engine and SFML
target_link_libraries(Game
    PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
        SFML::Audio
        ImGui-SFML::ImGui-SFML
)

target_link_libraries(Game PRIVATE Engine)

target_include_directories(Game PRIVATE ${CMAKE_SOURCE_DIR}/Engine)
