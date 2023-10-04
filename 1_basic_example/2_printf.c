#include<stdio.h>

/* This is an example that has compile error */

void main(void)
{
    int tea_price = 35;
    int num = 5;

    char a='a';
    char string[] = "12345\0";

	
    printf("tea_price:%d, num:%d, total=%d\n",
	tea_price,num,total);

    printf("a=%c, a=%d\n",a,a);	

    printf("string:%s, string[0]=%d=%d\n",
	string, string[0],string[0]);
}
