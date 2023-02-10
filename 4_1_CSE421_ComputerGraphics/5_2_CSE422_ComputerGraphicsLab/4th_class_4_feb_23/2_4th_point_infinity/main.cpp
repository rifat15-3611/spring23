#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cmath>

void display();
void init();
void cor();

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(300, 100);
    glutInitWindowSize(700, 500);

    glutCreateWindow("PC-E Section");
    glutDisplayFunc(display);
    init();
    glutMainLoop();

    return 0;
}

void display() {

    //clear the frame buffer
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    cor();

    //we will draw here
    //glColor3f(1.0f, 0.0f, 0.0f); // red color

    glColor3ub(254, 0, 0);
    for(int i=5;i<=100;i++){
        glPointSize(i);
        glBegin(GL_POINTS);

            glVertex2f(5, i);

        glEnd();
    }

    glFlush();

}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); //white
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluOrtho2D(0.0, 40.0, 0.0, 40.0);
    gluOrtho2D(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}

void cor() {
    glColor3ub(254, 0, 0);
    glBegin(GL_LINES);
        glVertex3f(-1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, 0.0);
    glEnd();

    glColor3ub(31, 255, 0);
    glBegin(GL_LINES);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(0.0, 1.0, 0.0);
    glEnd();
}




