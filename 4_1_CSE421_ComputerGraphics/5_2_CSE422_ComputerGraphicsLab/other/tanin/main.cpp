//#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();
void init();

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(300, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Quad & Triangle ");

    glutDisplayFunc(display);
    init();

    glutMainLoop();
    return 0;
}
void display() {
    //clear the frame buffer
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //we will draw here

        glBegin(GL_QUADS);
        glVertex2i(10,10);
        glVertex2i(20,8);
        glVertex2i(17,16);
        glVertex2i(12,16);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2i(19,23);
        glVertex2i(24,28);
        glVertex2i(27,23);
    glEnd();

    glFlush();
}
void init()
{
   glClearColor(1,0,0,1);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0,40,0,40);
   glMatrixMode(GL_MODELVIEW);
}
