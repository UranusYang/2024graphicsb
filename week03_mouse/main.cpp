#include <GL/glut.h>///使用GLUT程式碼外掛，118行
#include <stdio.h>
void display()
{
    glutSolidTeapot( 0.3 );///自己寫
    glutSwapBuffers();///自己寫
}

void mouse(int button, int state, int x, int y)
{///定義mouse的函式 button:左鍵，1:中鍵，2:右鍵
    ///printf("Hello World\n"); ///遇到mouse印Hello World
    ///printf("%d %d %d\n", button, state, x, y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0, -(%d-150)/150.0\n", x, y);
    }
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
