#include <stdio.h>
#include <stdlib.h>

#define A_STRING  "a string"

main(){
    int i;
    char *cp;

    cp = A_STRING;

    printf("sizof(A_STRING)=%d\n",sizeof(A_STRING));

    while(*cp != 0){
        putchar(*cp);
        cp++;
    }
    putchar('\n');

    for(i = 0; i < 8; i++)
        putchar(A_STRING[i]);
    putchar('\n');
    exit(EXIT_SUCCESS);
}
