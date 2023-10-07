#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

char var_char;
int var_int=0;
long var_long;
float var_float;
char * var_char_pointer;
int * var_int_pointer;
long * var_long_pointer;

void test_print(void)
{
    printf("[%s:%d] var_int:%d\n",__func__,__LINE__,var_int);
}


int main(void)
{
    int var_int=1;

    printf("sizeof(var_char)=%d\n",sizeof(var_char));
    printf("sizeof(var_int)=%d\n",sizeof(var_int));
    printf("sizeof(var_long)=%d\n",sizeof(var_long));
    printf("sizeof(var_float)=%d\n",sizeof(var_float));
    printf("sizeof(var_char_pointer)=%d\n",sizeof(var_char_pointer));
    printf("sizeof(var_int_pointer)=%d\n",sizeof(var_int_pointer));
    printf("sizeof(var_loing_pointer)=%d\n",sizeof(var_long_pointer));

    printf("[%s:%d] var_int:%d\n",__func__,__LINE__,var_int);

    {
        int var_int=2;
        printf("[%s:%d] var_int:%d\n",__func__,__LINE__,var_int);
    }

    {
        var_int=3;
    }

    printf("[%s:%d] var_int:%d\n",__func__,__LINE__,var_int);
    test_print();

    exit(EXIT_SUCCESS);
}
