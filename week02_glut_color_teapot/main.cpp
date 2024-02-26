#include <GL/glut.h>///使用GLUT程式碼外掛，118行

void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);///255.0 小數點一定要有
    glutSolidTeapot( 0.3 );

    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot( 0.2 );
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
