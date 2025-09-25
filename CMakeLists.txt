cmake_minimum_required(VERSION 3.20)
project(GameEngine)

set(CMAKE_CXX_STANDARD 20)

# SFML (using vcpkg or system install)
#set(SFML_DIR "C:/vcpkg/installed/x64-windows/share/SFML")
find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System Audio)
find_package(ImGui-SFML CONFIG REQUIRED)



add_subdirectory(Engine)
add_subdirectory(Editor)
add_subdirectory(Game)
