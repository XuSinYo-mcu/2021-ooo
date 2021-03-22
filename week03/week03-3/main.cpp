
#include <GL/glut.h>//使用GLUT外掛

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidTeapot(0.3);//實心茶壺

    glutSwapBuffers();//交換兩倍的buffers
}



int main(int argc, char *argv[])//留下main()裡面的五行就好
{
    glutInit(&argc, argv);//(1)初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);//(2)顯示模式
    glutCreateWindow("08160296的小茶壺");//(3)開窗

    glutDisplayFunc(display);//(4)等一下要顯示的函式
    glutMainLoop();//(5)主要迴圈
}
