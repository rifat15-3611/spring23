#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cmath>

void display();
void init();
void drawCircle(float x_c, float y_c,float r);

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

    drawCircle(6,5,3);
    glFlush();

}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 40.0, 0.0, 40.0);
    glMatrixMode(GL_MODELVIEW);
}

void drawCircle(float x_c, float y_c, float r){
    float theta, x,y;

    glPointSize(2);
    for(int i=0;i<360;i++){

        glBegin(GL_POINTS);
            theta = (i * M_PI)/180;

            x = x_c + r* cos(theta);
            y = y_c + r*sin(theta);

            glVertex2f(x,y);
        glEnd();

    }

}
