#include <GL/glut.h>///�ϥ�GLUT�{���X�~���A118��

void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);///255.0 �p���I�@�w�n��
    glutSolidTeapot( 0.3 );

    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot( 0.2 );
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
