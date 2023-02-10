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
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    for(int i=1;i<=13;i++){
        glColor3ub(191, 201, 202);
        glLineWidth(i);
        glBegin(GL_LINES);
            glVertex2f(8, i+9);
            glVertex2f(32, i+9);
        glEnd();
    }
    glFlush();
}
void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 40.0, 0.0, 40.0);
    glMatrixMode(GL_MODELVIEW);
}

