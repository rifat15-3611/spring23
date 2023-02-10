//quad shape     (10,10),(20,8),(17,16),(12,16)
//triangle shape (17,17),(27,15),(24,23)

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display();
void init();

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(300, 100);
    glutInitWindowSize(500, 500);

    glutCreateWindow("window");

    glutDisplayFunc(display);
    init();

    glutMainLoop();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1,1,0);
    glBegin(GL_QUADS);
        glVertex2i(10,10);
        glVertex2i(20,8);
        glVertex2i(17,16);
        glVertex2i(12,16);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_TRIANGLES);
        glVertex2i(17,17);
        glVertex2i(27,17);
        glVertex2i(22,23);
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(1,1,1,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,40,0,40);
    glMatrixMode(GL_MODELVIEW);
}



