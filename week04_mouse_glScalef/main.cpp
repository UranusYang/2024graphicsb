#include <GL/glut.h>///�ϥ�GLUT�{���X�~���A118��
float s = 1;
void display()
{
    glClearColor(1, 1, 0.9, 1);///R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///�M�I��
    glColor3f(0, 1, 0);///3f=R,G,B
    glPushMatrix();
        glScalef(s, s, s);
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}

void motion(int x, int y)
{
    s = 1 + (x-150)/150.0; ///�|�ܤj�ܤp���ܼ�0~1~2
    display();///���e�e��
}

int main(int argc, char *argv[])///�ڭ̪�main�禡�A138��
{
    glutInit(&argc, argv);///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week04 mouse glScalef");
    glutDisplayFunc(display);
    glutMotionFunc(motion);///���motion���ɭ�
    glutMainLoop();
}
