# Engine/CMakeLists.txt
file(GLOB_RECURSE ENGINE_SRC CONFIGURE_DEPENDS
    Core/*.cpp Core/*.h
    Platform/*.cpp Platform/*.h
    Rendering/*.cpp Rendering/*.h
    ECS/*.cpp ECS/*.h
    Physics/*.cpp Physics/*.h
    Audio/*.cpp Audio/*.h
    Scripting/*.cpp Scripting/*.h
    Resources/*.cpp Resources/*.h
)

add_library(Engine STATIC ${ENGINE_SRC})

# Link external dependencies (example: spdlog, glfw, glm, etc.)
target_link_libraries(Engine PUBLIC spdlog::spdlog glfw glm)

target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
