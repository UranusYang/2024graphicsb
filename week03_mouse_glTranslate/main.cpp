#include <GL/glut.h>///�ϥ�GLUT�{���X�~���A118��
#include <stdio.h>
float teapotX = 0, teapotY = 0;///�s�[�������A�Ψө�������y��
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�ƥ��x�}
        glTranslatef(teapotX, teapotY, 0);///��y�в���
        glutSolidTeapot( 0.3 );
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();
}
                        ///state->0:�U�h�A 1:�W��
void mouse(int button, int state, int x, int y)
{///�ڭ̳o�̭n�������ץ�
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
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
