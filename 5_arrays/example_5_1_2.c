#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[124];
    int cnt;
}cmd;


int main(int argc, char **argv)
{

    cmd s_cmd, *p_cmd;

    p_cmd=&s_cmd;

    printf("[%s:%d] &s_cmd:0x%x sizeof(s_cmd)=%d, sizeof(p_cmd)=%d, p_cmd+1=0x%x\n",__func__,__LINE__,&s_cmd,sizeof(s_cmd),sizeof(p_cmd), p_cmd+1);

   printf("[%s:%d] p_cmd at 0x%x\n",__func__,__LINE__,&p_cmd); 
    exit(EXIT_SUCCESS);
}

