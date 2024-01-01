#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINELNG 100     /* max. length of input line */


/*
* Compare two strings for equality.
* Return 'false' if they are.
*/
int
str_eq(const char *s1, const char *s2){
    while(*s1 == *s2){
        /*
         * At end of string return 0.
         */
        if(*s1 == 0)
            return(0);
        s1++; s2++;
    }
    /* Difference detected! */
    return(1);
}

main(){
    char in_line[LINELNG];
    char *cp;
    int c;

    cp = in_line;
    while((c = getc(stdin)) != EOF){
        if(cp == &in_line[LINELNG-1] || c == '\n'){
            /*
             * Insert end-of-line marker
             */
            *cp = 0;
            if(str_eq(in_line, "stop") == 0 )
                exit(EXIT_SUCCESS);
            else
                printf("line was %d characters long\n",
                        (int)(cp-in_line));
            cp = in_line;
        }
        else
            *cp++ = c;
    }
    exit(EXIT_SUCCESS);
}

