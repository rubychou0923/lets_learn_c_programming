#include <stdio.h>
#include <stdlib.h>

const char arr[] = "hello";
const char *cp = arr;
const int *icp = arr;
const unsigned long *ulcp = arr;
main(){

    printf("Size of arr %lu\n", (unsigned long)
            sizeof(arr));
    printf("Size of *cp %lu\n", (unsigned long)
            sizeof(*cp));
    printf("Size of *icp %lu\n", (unsigned long)
            sizeof(*icp));
    printf("Size of *ulcp %lu\n", (unsigned long)
            sizeof(*ulcp));
    exit(EXIT_SUCCESS);
}

