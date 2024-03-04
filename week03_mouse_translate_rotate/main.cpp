#include <GL/glut.h>
#include <stdio.h>
float teapotX = 0, teapotY = 0;///�s�[�������A�Ψө�������y��
float angle = 0;///���઺����
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�ƥ��x�}
        glTranslatef(teapotX, teapotY, 0);///��y�в���
        glRotatef(angle, 0, 0, 1);///������z�b
        glutSolidTeapot( 0.3 );
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();
}
int method = 1;///1:����A2:����
int oldX = 0, oldY = 0;
                        ///state->0:�U�h�A 1:�W��
void mouse(int button, int state, int x, int y)
{///�ڭ̳o�̭n�������ץ�
    ///teapotX = (x-150)/150.0;
    ///teapotY = -(y-150)/150.0;
    oldX = x;
    oldY = y;
}

void motion(int x, int y)
{
    if(method==1){
        angle += x-oldX;
    }
    else if(method==2){
        teapotX += (x - oldX)/150.0;
        teapotY += (y - oldY)/150.0;
    }
    oldX = x;
    oldY = y;
    display();
}

void keyboard(unsigned char key, int x, int y)
{
    if(key=='e') method=1; ///����Rotate
    if(key=='w') method=2; ///����Translate
}

int main(int argc, char *argv[])///�ڭ̪�main�禡�A138��
{
    glutInit(&argc, argv);///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��

    glutCreateWindow("week03 mouse");///145��A��3D����

    glutDisplayFunc(display);///148��A�]�w�e�Ϫ��禡
    glutMouseFunc(mouse);///�o�@��A�]�wmouse�禡
    glutMotionFunc(motion);///�o�@��A�]�wmouse��motion�ʧ@
    glutKeyboardFunc(keyboard);///�o�@��A�]�wkeyboard�ʧ@
    glutMainLoop();///174��A�D�n�j��
}

