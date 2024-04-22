#include <GL/glut.h>
void myBody()
{
    glColor3f(1, 0, 0); ///紅色的身體
    glutWireCube( 0.6 ); ///方塊
}
void myArm()
{
    glPushMatrix(); ///上保護
        glColor3f(0, 1, 0); ///綠色的手臂
        glScalef(1.5, 0.5, 0.5); ///寬變1.5，高度變0.5倍
        glutWireCube( 0.3 ); ///方塊
    glPopMatrix();
}
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6, +0.3, 0);
        myBody();
    glPopMatrix();

    ///右半邊
    glPushMatrix();
        glTranslatef(+0.3, +0.3, 0);
        glRotatef(angle++, 0, 0, 1);
        glTranslatef(0.225,  0, 0);
        myArm();
        glPushMatrix();
            glTranslatef(0.225, 0, 0);
            glRotatef(angle++, 0, 0, 1);
            glTranslatef(0.225,  0, 0);
            myArm();
        glPopMatrix();
    glPopMatrix();

    ///左半邊
    glPushMatrix();
        glTranslatef(-0.3, +0.3, 0);
        glRotatef(angle++, 0, 0, 1);
        glTranslatef(-0.225,  0, 0);
        myArm();
        glPushMatrix();
            glTranslatef(-0.225, 0, 0);
            glRotatef(angle++, 0, 0, 1);
            glTranslatef(-0.225,  0, 0);
            myArm();
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week10-2 glutSolid系列");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
