#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i=atoi(argv[1]);
	int j=atoi(argv[2]);

	if(i==j)
		printf("i==j\n");
	else
		printf("i!=j\n");

	/* error example */
	if(i==j)
		printf("i==j\n");
	else
		printf("enter else condition\n");
		printf("i!=j\n");
		
	printf("======= while ===========\n");
	while(i<100)
	{
		printf("i:%d\n",i);
		i++;
	}

	printf("======= for ===========\n");
	for(i=100;i>=0;i--)
		printf("i:%d\n",i);

	exit(EXIT_SUCCESS);
}