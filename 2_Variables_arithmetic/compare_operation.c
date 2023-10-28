#include<stdio.h>

int main(void)
{
    int a=1;
    int b=0;

    if(a == b)
        printf("a==b\n");

    if(a !=b )
        printf("a!=b\n");

    if( a<=b )
        printf("a<=b\n");    

    if(1 && 0)
        printf("1 && 0\n");

    if(1 || 0)
        printf("1 || 0\n");

    printf("%d\n",1&0);
    printf("%d\n",1&2);
    printf("%d\n",1&3);
    printf("%d\n",1<<2);
    printf("%d\n",2>>1);
}
