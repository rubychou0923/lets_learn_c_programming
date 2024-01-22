#if 0
/* function returning pointer to int */
int *func(int a);

/* pointer to function returning int */
int (*func)(int a);
#endif

#include <stdio.h>
#include <stdlib.h>

void func1(int arg, float b)
{
      printf("%s, %d, %f\n",__func__, arg,b);
}

void func2(int arg, float b)
{
      printf("%s, %d, %f\n",__func__, arg,b);
}

void func3(int arg, float b)
{
      printf("%s, %d, %f\n",__func__, arg,b);
}

void func4(int arg, float b)
{
      printf("%s, %d, %f\n",__func__, arg,b);
}

void func5(int arg, float b)
{
      printf("%s, %d, %f\n",__func__, arg,b);
}

void func6(int arg, float b)
{
      printf("%s, %d, %f\n",__func__, arg,b);
}


void (*fparr[])(int, float) = {
                              /* initializers */
         func1,
         func2,
         func3,
         func4,
         func5,
         func6
      };


main(){
/* then call one */

      fparr[5](1, 3.4);

      exit(EXIT_SUCCESS);
}


