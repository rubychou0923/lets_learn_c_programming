#include <stdio.h>
#include <stdlib.h>
main()
{
	int i;
	char input,input2;

	for(i = 0; i < 10000; i++){
		printf("Please enter any key+enter: c:continue, b:break, l:goto label\n");
		input=getchar();
		input2=getchar();
		printf("%s:%d input:%d:%c\n",__func__,__LINE__,input,input);

		switch(input)
		{
			case 'c':
				printf("continue\n");
				continue;
			case 'b':
				printf("break\n");
				break;
			case 'l':
				printf("goto label\n");
				goto label;
			default:
				printf("default\n");
		}
	}
	exit(EXIT_SUCCESS);

label:
	printf("in label\n");
}
