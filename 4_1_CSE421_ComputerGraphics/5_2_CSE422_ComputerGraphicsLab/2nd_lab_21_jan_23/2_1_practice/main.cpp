#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display(){
    //clear the frame buffer
    glClear(GL_COLOR_BUFFER_BIT); //-7
    glLoadIdentity(); //-------------8

    //draw
    glColor3f(1.0f, 0.0f, 0.0f); //-----------17 line color red
    glBegin(GL_LINES); //---------------------18
    glVertex2d(5, 10);  //--------------------20
    glVertex2d(10, 15); //--------------------21
    glEnd(); //-------------------------------19

    //display the frame buffer
    glFlush(); //------------------------------9
}


void init(){
    //glClearColor(1.0, 1.0, 0.0, 0.0);
    glClearColor(1.0f, 1.0f, 0.0f, 0.0f); //--12 window color(yellow)
    glMatrixMode(GL_PROJECTION); //-----------13
    glLoadIdentity(); //----------------------14
    gluOrtho2D(0.0f, 20.0f, 0.0f, 20.0f); //--15 create coordinate in the window
    glMatrixMode(GL_MODELVIEW); //------------16
}

int main(int argc, char** argv){

    glutInit(&argc, argv); //--------------1
    glutInitDisplayMode(GLUT_RGB); //------2

    glutInitWindowPosition(500, 200); //---3
    glutInitWindowSize(500, 500); //-------4

    glutCreateWindow("PC-E Section"); //---5
    glutDisplayFunc(display); //-----------6
    init();  //----------------------------11
    glutMainLoop(); //---------------------10
}
