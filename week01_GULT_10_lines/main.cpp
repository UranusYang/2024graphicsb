#include <GL/glut.h>///�ϥ�GLUT�{���X�~���A118��

void display()
{
    glutSolidTeapot( 0.3 );///�ۤv�g
    glutSwapBuffers();///�ۤv�g
}

int main(int argc, char *argv[])///�ڭ̪�main�禡�A138��
{
    glutInit(&argc, argv);///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��

    glutCreateWindow("GLUT Shapes");///145��A��3D����

    glutDisplayFunc(display);///148��A�]�w�e�Ϫ��禡

    glutMainLoop();///174��A�D�n�j��
}
