///把第一個範例 OpenGL拿來亂改
///把第一個project變*粗黑色*Active
#include <stdio.h>
int main(int argc, char** argv)
{
    printf("現在的argc是:%d\n",argc);
    for(int i=0;i<argc;i++)
    {
    printf("argv[%d]是:%s\n",i,argv[i]);
    }
}
