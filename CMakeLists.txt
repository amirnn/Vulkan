cmake_minimum_required(VERSION 3.18)

project(Vulkan)
include_directories(include)

# Set C++ version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find VULKAN
find_package(Vulkan REQUIRED)
include_directories(${Vulkan_INCLUDE_DIRS})

# Find OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLFW3 REQUIRED)
include_directories(${GLFW3_DIR})

find_package(glm REQUIRED)
include_directories(${GLM_INCLUDE_DIRS})

# Print all variables.
# include(CMakeModules/printVariables.cmake)

if (WIN32)
    include(CMakeModules/windows.cmake)

elseif(UNIX AND NOT APPLE)
    include(CMakeModules/linux.cmake)

elseif(APPLE)
    include(CMakeModules/macos.cmake)

endif()
