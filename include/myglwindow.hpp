#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>

#include "../include/rendermanager.hpp"

class myGLwindow
{
public:
    myGLwindow(const char* title, int width, int height);
    int initWindow(const char* title, int width, int height);
    void processInput(GLFWwindow *window);

private:
    RenderManager* renderManager;
};
