cmake_minimum_required(VERSION 3.20)
project(GameEngine)

# Engine library
add_library(Engine
    "Engine.cpp"
    "Engine.h"
 "Application.cpp" "Application.h" "Logger.cpp" "Logger.h" "Timer.cpp" "Timer.h" "EventSystem.h" "EventSystem.cpp" "Event.cpp" "Event.h")

target_link_libraries(Engine
    PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
        SFML::Audio
)

target_link_libraries(Engine PUBLIC ${CMAKE_SOURCE_DIR}/Engine)

target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})