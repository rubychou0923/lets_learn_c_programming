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
      exit(EXIT_SUCCESS);
}

