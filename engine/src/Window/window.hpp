#pragma once

#include <glad/glad.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>


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