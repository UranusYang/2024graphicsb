#include <GL/glut.h>///�ϥ�GLUT�{���X�~���A118��

void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();
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
