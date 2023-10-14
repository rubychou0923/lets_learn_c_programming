#include <stdio.h>
#include <stdlib.h>
main()
{
	int i;
	char input;

	for(i = 0; i < 10000; i++){
		input=getchar();
		if(input == 's')
			break;
		printf("%s:%d input:%d:%c\n",__func__,__LINE__,input,input);
	}
	exit(EXIT_SUCCESS);
}
