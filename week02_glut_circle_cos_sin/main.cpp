#include <GL/glut.h>///�ϥ�GLUT�{���X�~���A118��
#include <math.h>
void myCircle(float cx, float cy, float r)
{
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.14*2; a+=0.1){
        glVertex2f( r*cos(a)+cx, r*sin(a)+cy );
    }///�T����ƶW�n�ΡAx=cos(a), y=sin(a)
    glEnd();
}
void display()
{
    glColor3f(1,1,1); myCircle(0,0,1);
    glColor3f(0,0,0); myCircle(-0.5, 0.5, 0.3);
    glColor3f(0,0,0); myCircle(0.5, 0.5, 0.3);
    glColor3f(0,0,0); myCircle(0, -0.3, 0.7);
    glutSwapBuffers();
}

int main(int argc, char *argv[])///�ڭ̪�main�禡�A138��
{
    glutInit(&argc, argv);///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��

    glutCreateWindow("week02_glut_color_teapot");

    glutDisplayFunc(display);///148��A�]�w�e�Ϫ��禡

    glutMainLoop();///174��A�D�n�j��
}
