#include<stdio.h>
#include<stdlib.h>

void main(void)
{
    float *fp=NULL,*ptr=NULL;

    fp = (float *)malloc(sizeof(float)*4);
    ptr = fp;

    if(fp==NULL)
        exit(-1);

    fp[0]=12.01;
    fp[1]=12.01*2;
    fp[2]=12.01*3;
    fp[3]=12.01*4;
    fp[4]=12.01*5;
    fp[5]=12.01*6;

    for(int i=0;i<6;i++){
        printf("fp[%d]=%f, addr:%x\n",i,fp[i],&fp[i]);
        printf("ptr=%x ,",ptr);
        printf("*(ptr++):%f\n",*(ptr++));
    }

    printf("sizeof(float):%d, sizeof(fp)=%d\n",sizeof(float),sizeof(fp));
    free(fp);
}
