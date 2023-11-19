#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
    int x[2]={0,1}, *p;

    int k=-1;

    p = &x;         /* initialise pointer */
    printf("[%s:%d] p = &x  &x:0x%x, p:0x%x at 0x%x\n",__func__,__LINE__, &x, p, &p);
    printf("[%s:%d] x[0]:%d, x[1]:%d , &x[0]=0x%x, &x[1]=0x%x\n\n",__func__,__LINE__,x[0],x[1],&x[0],&x[1]);

    x[0]=0; x[1]=1;
    p = &x;         /* initialise pointer */
    k=*p+1;
    printf("[%s:%d] k=*p+1 k=%d\n",__func__,__LINE__,k);
    printf("[%s:%d] x[0]:%d, x[1]:%d\n\n",__func__,__LINE__,x[0],x[1]);

    x[0]=0; x[1]=1;
    p = &x;         /* initialise pointer */
    k=*(p+1);
    printf("[%s:%d] k=*(p+1) k=%d, p:0x%x, p+1 :0x%x\n",__func__,__LINE__,k, p, p+1);
    printf("[%s:%d] x[0]:%d, x[1]:%d\n\n",__func__,__LINE__,x[0],x[1]);

    exit(EXIT_SUCCESS);

}

