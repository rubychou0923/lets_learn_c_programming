#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,j;
	char input;

	for(i = 0; i < 600; i=i+100){
		for(j = 0; j < 5; j++){
			printf("	2nd for,i:%d j:%d, i+j:%d\n",i,j,i+j);
			if((i+j)==404)
			{	
				printf("!!! 404 !!!\n");
				break;
			}
		}
		printf("1st for,i:%d j:%d, i+j:%d\n",i,j,i+j);
	}
	exit(EXIT_SUCCESS);
}
