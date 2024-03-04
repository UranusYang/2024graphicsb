#include <GL/glut.h>///使用GLUT程式碼外掛，118行
#include <stdio.h>
float teapotX = 0, teapotY = 0;///新加的城市，用來放茶壺的座標
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景
    glPushMatrix();///備份矩陣
        glTranslatef(teapotX, teapotY, 0);///把座標移動
        glutSolidTeapot( 0.3 );
    glPopMatrix();///還原矩陣
    glutSwapBuffers();
}
                        ///state->0:下去， 1:上來
void mouse(int button, int state, int x, int y)
{///我們這裡要巧妙的修正
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}

int main(int argc, char *argv[])///我們的main函式，138行
{
    glutInit(&argc, argv);///140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行

    glutCreateWindow("week03 mouse");///145行，建3D視窗

    glutDisplayFunc(display);///148行，設定畫圖的函式
    glutMouseFunc(mouse);

    glutMainLoop();///174行，主要迴圈
}
