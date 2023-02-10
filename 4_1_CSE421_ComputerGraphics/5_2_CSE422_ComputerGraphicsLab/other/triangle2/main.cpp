#include<GL/gl.h>
#include<GL/glut.h>

void display()
{
    //clear all pixels
    glClear(GL_COLOR_BUFFER_BIT);
    /*
    draw white polygon (rectangle) with corners at
    (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glColor3f(1.0, 1.0, 1.0); // colour white

    glBegin(GL_QUADS); // Begin quadrilateral coordinates

    //Trapezoid (x, y)
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.35f, 0.05f, 0.0f);
    glVertex3f(0.40f, 0.35f, 0.0f);
    glVertex3f(0.00f, 0.35f, 0.0f);

    glEnd(); // End quadrilateral coordinates

    glColor3f(0.0, 1.0, 1.0); // colour blue
    glBegin(GL_TRIANGLES); // Begin triangle coordinates

    //Pentagon
    glVertex3f(0.5f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);
    glVertex3f(0.5f, 0.35f, 0.0f);

    glColor3f(1.0, 1.0, 0.0); // colour yellow
    glVertex3f(0.5f, 0.35f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.35f, 0.0f);

    glColor3f(0.0, 1.0, 0.0); // colour green
    glVertex3f(0.5f, 0.35f, 0.0f);
    glVertex3f(0.75f, 0.35f, 0.0f);
    glVertex3f(0.63f, 0.50f, 0.0f);

    //Triangle
    glVertex3f(0.30f, 0.65f, 0.0f);
    glVertex3f(0.60f, 0.65f, 0.0f);
    glVertex3f(0.45f, 0.85f, 0.0f);

    glEnd();

    glFlush(); // forced all the commands for executions
}

void init()
{
    // Select clearing (background) color
    glClearColor(0.0, 0.0, 0.0, 0.0);

    //initialize viewing values
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //size of graph paper
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

/*
* Declare initial window size, position and display mode
* (single buffer and RGBA), open window with "hello"
* in its title bar, call initialization routines
* register callback function to display graphics
* enter main loop and process events.
*/

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop(); // such as input given by mouse to hold the window
    return 0; /* ISO C requires main to return int. */
}












