//
//  main.cpp
//  opengl-app
//
//  Created by Syritx on 2021-01-29.
//

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

int main() {
    
        
    if (!glfwInit()) glfwTerminate();
        
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#endif
    
    GLFWwindow* window = glfwCreateWindow(1000, 720, "hello", NULL, NULL);
    if (!window) glfwTerminate();
    
    glfwMakeContextCurrent(window);
    glewExperimental = GL_TRUE;
    glewInit();
    
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
        
    
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0,0,0,1);
        
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwTerminate();
}

