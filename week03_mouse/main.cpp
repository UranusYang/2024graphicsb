#include <GL/glut.h>///�ϥ�GLUT�{���X�~���A118��
#include <stdio.h>
void display()
{
    glutSolidTeapot( 0.3 );///�ۤv�g
    glutSwapBuffers();///�ۤv�g
}

void mouse(int button, int state, int x, int y)
{///�w�qmouse���禡 button:����A1:����A2:�k��
    ///printf("Hello World\n"); ///�J��mouse�LHello World
    ///printf("%d %d %d\n", button, state, x, y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0, -(%d-150)/150.0\n", x, y);
    }
}

int main(int argc, char *argv[])///�ڭ̪�main�禡�A138��
{
    glutInit(&argc, argv);///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��

    glutCreateWindow("week03 mouse");///145��A��3D����

    glutDisplayFunc(display);///148��A�]�w�e�Ϫ��禡
    glutMouseFunc(mouse);

    glutMainLoop();///174��A�D�n�j��
}
