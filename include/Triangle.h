#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>

class Triangle {
public:
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    GLFWwindow* window;
    VkInstance instance;
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
    void createInstance();
};
