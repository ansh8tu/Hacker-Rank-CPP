#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
#include<stdio.h>
#include <GL\glut.h>
using namespace std;
void printTriangle(void) {
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_POLYGON);
 glVertex3f(0.5, 0.0, 0.5);
 glVertex3f(0.5, 0.0, 0.0);
 glVertex3f(0.0, 0.5, 0.0);
 glVertex3f(0.0, 0.0, 0.5);
 glEnd();
 glFlush();
}
int main(int argc, char** argv) {
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE);
 glutInitWindowSize(700, 500);
 glutInitWindowPosition(200, 200);
 glutCreateWindow("TASK-1(ANSHUMAN MISHRA)");
 glutDisplayFunc(printTriangle);
 glutMainLoop();
 return 0;
}
