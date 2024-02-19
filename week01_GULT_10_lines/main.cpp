#include <GL/glut.h>///使用GLUT程式碼外掛，118行

void display()
{
    glutSolidTeapot( 0.3 );///自己寫
    glutSwapBuffers();///自己寫
}

int main(int argc, char *argv[])///我們的main函式，138行
{
    glutInit(&argc, argv);///140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行

    glutCreateWindow("GLUT Shapes");///145行，建3D視窗

    glutDisplayFunc(display);///148行，設定畫圖的函式

    glutMainLoop();///174行，主要迴圈
}
