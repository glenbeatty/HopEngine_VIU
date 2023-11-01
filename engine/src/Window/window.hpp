#pragma once

#include <glad.h>
#define GLFW_INCLUDE_NONE
#include <glfw3.h>


class Window{

    bool is_valid;
    void destroy();

    public:
    Window();
    ~Window();
    void run();
    bool is_running();
    GLFWwindow* window;
};