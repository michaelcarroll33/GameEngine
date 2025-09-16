include(FetchContent)

# spdlog (logging)
FetchContent_Declare(spdlog GIT_REPOSITORY https://github.com/gabime/spdlog.git GIT_TAG v1.12.0)
FetchContent_MakeAvailable(spdlog)

# GLFW (window/input)
FetchContent_Declare(glfw GIT_REPOSITORY https://github.com/glfw/glfw.git GIT_TAG 3.3.8)
FetchContent_MakeAvailable(glfw)

# GLM (math library)
FetchContent_Declare(glm GIT_REPOSITORY https://github.com/g-truc/glm.git GIT_TAG 0.9.9.8)
FetchContent_MakeAvailable(glm)

# ImGui (UI)
FetchContent_Declare(imgui GIT_REPOSITORY https://github.com/ocornut/imgui.git GIT_TAG v1.90)
FetchContent_MakeAvailable(imgui)
