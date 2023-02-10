#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);  //6 clear the frame buffer

    glColor3f(1,0,0);              //11 line colour red
    glBegin(GL_LINES);             //12
    glVertex2d(5, 10);             //14
    glVertex2d(10, 15);            //15
    glEnd();                       //13

    glFlush();                     //7 display the frame buffer
}

void init()
{
    glClearColor(1.0f, 1.0f, 0.0f, 0.0f); //8 window color yellow
    glMatrixMode(GL_PROJECTION);          //9
    gluOrtho2D(0,20,0,20);                //10 cordinate select
}

int main()
{
    glutInitWindowPosition(500, 200); //4
    glutInitWindowSize(500, 500);     //5

    glutCreateWindow("line"); //1

    glutDisplayFunc(display); //3

    init();

    glutMainLoop();  //2
}
