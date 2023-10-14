#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	for(i = 0; i <= 10; i++){
		switch(i){
			case 1:
			case 2:
				printf("i:%d 1 or 2\n",i);
			case 7:
				printf("i:%d 7\n",i);
			case 8:
				printf("i:%d 8\n",i);
				break;
			default:
				printf("i:%d default \n",i);
		}
	}
	exit(EXIT_SUCCESS);

}