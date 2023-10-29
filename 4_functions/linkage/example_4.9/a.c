/* first file */
#include<stdio.h>

int i=0; /* definition */
main () {
	void f_in_other_place (void);   /* declaration */
	printf("[%s:%d] i:%d\n",__func__,__LINE__,i);
	i = 99;
	printf("[%s:%d] i:%d\n",__func__,__LINE__,i);
	f_in_other_place();
	printf("[%s:%d] i:%d\n",__func__,__LINE__,i);
}
/* end of first file */
