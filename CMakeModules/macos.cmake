message("Running on a Linux platform.")
include_directories(/usr/local/include)
add_executable(HelloWindow src/HelloWindow.cc)
target_link_libraries(HelloWindow ${Vulkan_LIBRARIES} ${OPENGL_LIBRARIES} glfw)