//quad shape     (10,10),(20,8),(17,16),(12,16)
//triangle shape (17,17),(27,15),(24,23)
//#include <windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display();
void init();

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(300, 100);
    glutInitWindowSize(500, 500);

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
    /*
    //we will draw here
    glColor3f(1.0f, 0.0f, 0.0f);
    glLineWidth(10);
    glBegin(GL_LINES);
        glVertex2f(10, 10);
        glVertex2f(30, 20);
    //glEnd();


    glColor3f(1.0f, 1.0f, 0.0f);
    //glBegin(GL_LINES);
        glVertex2f(10, 20);
        glVertex2f(30, 10);
    glEnd();
    //display the frame buffer
    */
//12,16,17,16,20,8,10,10 cordinates for quad shape (10,10),(20,8),(17,16),(12,16)
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2i(10,10); //i for integer
        glVertex2i(20,8);
        glVertex2i(17,16);
        glVertex2i(12,16);

    glEnd();

    //triangle 19,23,24,23,27,30 cordinates for quad shape
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_TRIANGLES);
        /*
        glVertex2i(10+7,10+7); //i for integer
        glVertex2i(20+7,8+7);
        glVertex2i(17+7,16+7);
        */
        glVertex2i(17,17); //i for integer(17,17),(27,15),(24,23)
        glVertex2i(27,15);
        glVertex2i(24,23);
    glEnd();

    glFlush();

}

void init() {

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 40.0, 0.0, 40.0); //---------------------------
    glMatrixMode(GL_MODELVIEW);

}











