cmake_minimum_required(VERSION 3.20)
project(MyEngineProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Options
option(BUILD_EDITOR "Build the editor" ON)
option(BUILD_GAME   "Build the example game" ON)

# External libraries
add_subdirectory(external)

# Engine
add_subdirectory(Engine)

# Editor
if(BUILD_EDITOR)
    add_subdirectory(Editor)
endif()

# Game
if(BUILD_GAME)
    add_subdirectory(Game)
endif()
