#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

main(){
    size_t sz;
    sz = sizeof(sz);
    printf("size of size_t is %lu\n",
            (unsigned long)sz);

    printf("sizeof(sizeof(int))=%d\n",sizeof(sizeof(int)));
    printf("sizeof(sizeof(char))=%d\n",sizeof(sizeof(char)));


    char *string = malloc(sizeof(char)*10);
    int *int_array = malloc(sizeof(int)*10);
    //printf("sizeof(string)=%d\n",sizeof(string));
    //printf("sizeof(int_array)=%d\n",sizeof(int_array));

    exit(EXIT_SUCCESS);
}

