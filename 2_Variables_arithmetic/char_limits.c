//From 2.7.2. Character variables
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;

    c = CHAR_MIN;
    while(c != CHAR_MAX){
        printf("%d\n", c);
        c = c+1;
    }

    printf("CHAR_MIN:%d, CHAR_MAX:%d\n",CHAR_MIN,CHAR_MAX);

    exit(EXIT_SUCCESS);
}
