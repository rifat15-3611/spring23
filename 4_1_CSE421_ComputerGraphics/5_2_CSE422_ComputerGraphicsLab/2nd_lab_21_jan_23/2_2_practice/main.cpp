#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glLoadIdentity();
    /*
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2d(5, 10);
    glVertex2d(10, 15);
    glEnd();
    */
    glFlush();
}

void init()
{
    glClearColor(1.0f, 1.0f, 0.0f, 0.0f);
    //glMatrixMode(GL_PROJECTION);
    //glLoadIdentity();
    //gluOrtho2D(0.0f, 20.0f, 0.0f, 20.0f);
    //glMatrixMode(GL_MODELVIEW);
}

//int main(int argc,char** argv)
int main()
{


    glutInitWindowPosition(500, 200); //---4
    glutInitWindowSize(500, 500); //-------5

    glutCreateWindow("line"); //---1 create window title as string

    glutDisplayFunc(display); //---3

    init();

    glutMainLoop(); //-------------2
}
