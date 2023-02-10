#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();
void init();

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(300, 100);
    glutInitWindowSize(700, 500);

    glutCreateWindow("PC-E Section");
    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}

void display() {

    //clear the frame buffer
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //we will draw here
    glColor3f(1.0f, 0.0f, 0.0f); // red color

/*
    // 1---single point
    glPointSize(10);
    glBegin(GL_POINTS);

    glVertex2f(5, 5);

    glEnd();
*/
/*
    // 2---multiple point
    glPointSize(10);
    glBegin(GL_POINTS);

        glVertex2f(5, 5);
    glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(15, 10);
    glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(5, 15);
    glEnd();
*/
/*
    // 3---line with GL_LINES
    glLineWidth(3);
    glBegin(GL_LINES); //need 4 quads for two line

        glVertex2f(5, 5);
        glVertex2f(15, 10);
    glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(15, 10);
    glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(5, 15);
    glEnd();
*/
/*
    // 4---line with GL_LINE_STRIP
    glLineWidth(3);
    glBegin(GL_LINE_STRIP); // not need 4 quads use only 3 quads for two line

        glVertex2f(5, 5);
    glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(15, 10);
    glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(5, 15);

    glEnd();
*/

    // 5---line with GL_LINE_LOOP
    glLineWidth(3);
    glBegin(GL_LINE_LOOP); // connect the last 2 dots

        glVertex2f(5, 5);
        glVertex2f(15, 10); //with 3 or 2
    glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(15, 10);
    glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(5, 15);
    glEnd();

    glFlush();

}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); //black
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 40.0, 0.0, 40.0);
    glMatrixMode(GL_MODELVIEW);
}



