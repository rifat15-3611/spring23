//#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cmath>

void display();
void init();
void drawCircle(float r);
//void drawCircle(float x_c, float y_c,float r);

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

    //we will draw here
    glColor3f(1.0f, 0.0f, 0.0f); // red color
    //glLineWidth(3);
    for(int i=5;i<=13;i++){
        //glColor3f(1.0f, 0.65f, 0.0f);
        //glColor3b(1.0f, 0.0f, 0.0f);
        //glColor3ub(191, 201, 202); // can store 0-255 html color
        //glPointSize(i);
        glLineWidth(i);
        //glBegin(GL_POINTS);
        glBegin(GL_LINES);
            //glVertex2f(i, 5);
            //glVertex2f(i, 10);

            glVertex2f(5, i);
            glVertex2f(10, i);

        glEnd();
    }
/*
    glPointSize(10);
    glBegin(GL_POINTS);
    //glBegin(GL_LINES); //need 4 quads
    //glBegin(GL_LINE_STRIP); // not ned 4 quads
    //glLineWidth(3);
    //glBegin(GL_LINE_LOOP); // connect the last line

        glVertex2f(5, 5);
        //glVertex2f(15, 10);
    glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(15, 10);
    glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(5, 15);
    glEnd();
    */
    //display the frame buffer



    //drawCircle(3);
    //drawCircle(6,5,3);
    glFlush();

}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
    gluOrtho2D(0.0, 40.0, 0.0, 40.0);
    glMatrixMode(GL_MODELVIEW);
}

//void drawCircle(float x_c, float y_c, float r){
    void drawCircle( float r){

    //int deg = 1;
    float theta, x,y;

    glPointSize(2);
    for(int i=0;i<360;i++){
            //glPointSize(5);
        glBegin(GL_POINTS);
            theta = (i * M_PI)/180;

            //x = x_c + r* cos(theta);
            //y = y_c + r*sin(theta);

            x = r* cos(theta);
            y = r* sin(theta);
            glVertex2f(x,y);
        glEnd();
    }

}
