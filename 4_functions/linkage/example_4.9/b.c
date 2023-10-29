/* start of second file */
#include<stdio.h>

extern int i; /* declaration */
void f_in_other_place (void){   /* definition */
	printf("[%s:%d] i:%d\n",__func__,__LINE__,i);
	i++;
	printf("[%s:%d] i:%d\n",__func__,__LINE__,i);
}
/* end of second file */