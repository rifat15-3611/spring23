#include<GL/gl.h> //1
#include<GL/glu.h> //2
#include<GL/glut.h> //3

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);  //7 clear the frame buffer

    //draw
    glColor3f(1,0,0);       //13 line color red
    glBegin(GL_LINES);      //14 line begins
    glVertex2d(5, 10);      //16 position
    glVertex2d(10, 15);     //17 position
    glEnd();                //15 line end

    glFlush();              //8 display the frame buffer
}

void init()
{
    glClearColor(1.0f,1.0f,0.0f,0.0f); //10 window color yellow
    glMatrixMode(GL_PROJECTION);       //11 matrix
    gluOrtho2D(0,20,0,20);             //12 cordinate
}

int main()
{
    glutInitWindowPosition(500, 200); // window position
    glutInitWindowSize(500, 500);     // window size

    glutCreateWindow("line");         //4 create window

    glutDisplayFunc(display);       //6
    init();                         //9

    glutMainLoop();                     //5
}
