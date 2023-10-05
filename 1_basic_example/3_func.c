#include<stdio.h>

//compile: gcc 1_hello_world.c -o 1_hello_world

/*
    Another kind of comments.
*/


int test_a(int input)
{
    return input*2;
}

void main(void)
{
    int input =1;
    
    printf("%d\n",test_a(input));
}
