
#include <GL/glut.h>//�ϥ�GLUT�~��

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidTeapot(0.3);//��߯���

    glutSwapBuffers();//�洫�⭿��buffers
}



int main(int argc, char *argv[])//�d�Umain()�̭�������N�n
{
    glutInit(&argc, argv);//(1)��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);//(2)��ܼҦ�
    glutCreateWindow("08160296���p����");//(3)�}��

    glutDisplayFunc(display);//(4)���@�U�n��ܪ��禡
    glutMainLoop();//(5)�D�n�j��
}
