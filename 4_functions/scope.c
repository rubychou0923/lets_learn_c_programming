#include<stdio.h>

int a=5;                  /* visible from here onwards */

void func(void){
	float a=10.0;        /* a different 'a' */
	printf("%s:%d a=%f\n",__func__,__LINE__,a); 
	{
		static char a=8; /* yet another 'a' */
		printf("%s:%d a=%d\n",__func__,__LINE__,a); 
		a++;
	}		
	printf("%s:%d a=%f\n",__func__,__LINE__,a); 
	/* the float 'a' reappears */
}

void main(void)
{
	printf("%s:%d a=%d\n",__func__,__LINE__,a);
	func();
	func();
	func();
	printf("%s:%d a=%d\n",__func__,__LINE__,a);
}