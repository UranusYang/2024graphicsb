#include <GL/glut.h>///使用GLUT程式碼外掛，118行
float s = 1;
void display()
{
    glClearColor(1, 1, 0.9, 1);///R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///清背景
    glColor3f(0, 1, 0);///3f=R,G,B
    glPushMatrix();
        glScalef(s, s, s);
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}

void motion(int x, int y)
{
    s = 1 + (x-150)/150.0; ///會變大變小的變數0~1~2
    display();///重畫畫面
}

int main(int argc, char *argv[])///我們的main函式，138行
{
    glutInit(&argc, argv);///140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week04 mouse glScalef");
    glutDisplayFunc(display);
    glutMotionFunc(motion);///拖動motion的時候
    glutMainLoop();
}
