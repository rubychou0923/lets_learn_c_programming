#if 0
/* function returning pointer to int */
int *func(int a);

/* pointer to function returning int */
int (*func)(int a);
#endif

#include <stdio.h>
#include <stdlib.h>


main(){
      void (*fp)(int);

#if 1
/* pointer to function returning int */
      fp = func;

      (*fp)(1);
      fp(2);
#else
      func(1);
      func(2);
#endif

      exit(EXIT_SUCCESS);
}


void func(int arg)
{
      printf("%d\n", arg);
}
