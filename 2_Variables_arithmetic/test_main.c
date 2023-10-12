#include<stdio.h>

void func(void)
{
    printf("[%s:%d]\n",__func__,__LINE__);

    return;
}


int main(int argc, char *argv[])
{
    int i;

    printf("input number:%d\n",argc);

    for(i=0;i<argc;i++)
    {
        printf("argv[%d]=%s\n",i,argv[i]);
    }

    func();
}
