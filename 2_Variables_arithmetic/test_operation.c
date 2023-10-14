#include<stdio.h>

int main(void)
{
	int a=1;
	int b=0;
	int c=2;

	printf("a:%x, !a=0x%x, ~a=0x%x\n",a,!a,~a);
	printf("b:%x, !b=0x%x, ~b=0x%x\n",b,!b,~b);
	printf("c:%x, !c=0x%x, ~c=0x%x\n",c,!c,~c);

	c=(a==b)?1:0;

	/* error code example */
	printf("[%s:%d] a:%d, b:%d, c:%d\n",__func__,__LINE__);

	printf("[%s:%d] a:%d, b:%d, c:%d\n",__func__,__LINE__,a,b,c);

	b++;
	c=(a==b)?1:0;
	printf("[%s:%d] a:%d, b:%d, c:%d\n",__func__,__LINE__,a,b,c);
}
