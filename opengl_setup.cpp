#include <iostream>
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <windows.h>

void display(void) {
    glColor3d(1,1,0);
    glutSolidSphere(1.0, 25, 25);
    glFlush();
}

void init(void) {
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);;
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, 2.0, 12.0);
    gluLookAt(0,0,5, 0,1,0, 0,1,0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char ** argv) {
    // Compiles with the code commented below but it is hard to see the output. That's why we go for plain hello world.
    // Since it compiles just fine with the program using OpenGL, GLUT, and GLM functionality we are happy :)

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 10);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Hello");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    auto arr3 = glm::vec3(-1.0f, 0.0f, 0.0f);
    auto arr4 = glm::vec4(-1.0f, 0.0f, 0.0f, 0);
    std::cout << sizeof(arr3) << std::endl;
    std::cout << sizeof(arr4) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    system("PAUSE");

    return 0;
}