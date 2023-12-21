#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char data1;
    char data2;
    int data3;
    int data4;
    int data5;
} __attribute__((packed)) DATA;

int main(int argc, char **argv)
{
    int x=-1, *p;
    char c, *cp;
    DATA data, *data_ptr;

    p = &x;         /* initialise pointer */
    printf("[%s:%d]  x is %d at 0x%x\n",__func__,__LINE__,  x, &x);
    *p = 0;         /* set x to zero */
    printf("[%s:%d]  x is %d at 0x%x\n",__func__,__LINE__,  x, &x);
    printf("[%s:%d] *p is %d, p:0x%x, &p:0x%x\n",__func__,__LINE__, *p, p, &p);

    *p += 1;        /* increment what p points to */
    printf("[%s:%d] x is %d, *pis :%d, p:0x%x\n",__func__,__LINE__, x, *p, p);

    (*p)++;         /* increment what p points to */
    printf("[%s:%d] x is %d\n",__func__,__LINE__, x);

    cp = &c;

    data_ptr = &data;
    
    printf("[%s:%d] &x:0x%x sizeof(int)=%d, sizeof(p)=%d, p=0x%x, p+1=0x%x\n",__func__,__LINE__,&x,sizeof(int),sizeof(p),p, p+1);


    printf("[%s:%d] &c:0x%x sizeof(char)=%d, sizeof(cp)=%d, cp=0x%x, cp+1=0x%x\n",__func__,__LINE__,&c,sizeof(char),sizeof(cp),cp, cp+1);


    printf("[%s:%d] &data:0x%x sizeof(data)=%d, sizeof(data_ptr)=%d, data_ptr=0x%x, data_ptr+1=0x%x\n",__func__,__LINE__,&data,sizeof(data),sizeof(data_ptr),data_ptr,data_ptr+1);

    exit(EXIT_SUCCESS);
}

