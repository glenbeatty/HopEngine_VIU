#include <stdlib.h>
#include <stdio.h>
#include <window.hpp>
#include <iostream>

// Use GLFW function glfwInit to see if GLFW context can be established.
Window::Window(){
    std::cout << "WINDOW DEBUG: IN CONSTRUCTOR ADDRESS: " << this->window << std::endl;
    if (!glfwInit()){
        std::cout << "DEBUG:WINDOW DIDN't WORK!" << std::endl;
        is_valid = false;
    }

    else{
        is_valid = true;
    }

}

Window::~Window(){
    this->destroy();
}

// Necessary code to terminate GLFW context and window.
void Window::destroy(){
    glfwDestroyWindow(window);
    glfwTerminate();
}

// Run function creates and validates window before entering generating it. This is temporary example code, since
// the gameplay loop should exist in the user's main function in their project folder.
void Window::run(){
    
    const GLFWvidmode* video_mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    window =  glfwCreateWindow(video_mode->width, video_mode->height, "BUN BUN TIME", NULL, NULL);
    if(!window){
        
        std::cout << "DEBUG:WINDOW DIDN't WORK!" << std::endl;
        is_valid = false;
    }
    else{
        is_valid = true;
        std::cout << "DEBUG:WINDOW OPENED SUCCESSFULLY" << std::endl;
    }
}

bool Window::is_running(){

    if(glfwWindowShouldClose(window)){
        std::cout << "DEBUG: WINDOW CLOSED" << std::endl;
        this->destroy();
        return false;
    }

    else{
        glfwSwapBuffers(window);
        glfwPollEvents();
        return true;
    }
}