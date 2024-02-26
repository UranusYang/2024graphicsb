#include <GL/glut.h>///使用GLUT程式碼外掛，118行

void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char *argv[])///我們的main函式，138行
{
    glutInit(&argc, argv);///140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行

    glutCreateWindow("week02_glut_color_teapot");

    glutDisplayFunc(display);///148行，設定畫圖的函式

    glutMainLoop();///174行，主要迴圈
}
