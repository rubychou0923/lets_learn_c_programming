#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
    int x, *p;
    char c, *cp;
    char d,e,f,g;

    p = &x;         /* initialise pointer */
    *p = 0;         /* set x to zero */
    printf("[%s:%d]  x is %d at 0x%x\n",__func__,__LINE__,  x, &x);
    printf("[%s:%d] *p is %d, p:0x%x, &p:0x%x\n",__func__,__LINE__, *p, p, &p);

    *p += 1;        /* increment what p points to */
    printf("[%s:%d] x is %d, *pis :%d, p:0x%x\n",__func__,__LINE__, x, *p, p);

    (*p)++;         /* increment what p points to */
    printf("[%s:%d] x is %d\n",__func__,__LINE__, x);

    cp = &c;

    printf("[%s:%d] &c:0x%x sizeof(char)=%d, sizeof(cp)=%d, cp+1=0x%x\n",__func__,__LINE__,&c,sizeof(char),sizeof(cp), cp+1);

    
    printf("[%s:%d] d is %d, at 0x%x\n",__func__,__LINE__, d, &d);
    printf("[%s:%d] e is %d, at 0x%x\n",__func__,__LINE__, e, &e);
    printf("[%s:%d] f is %d, at 0x%x\n",__func__,__LINE__, f, &f);
    printf("[%s:%d] g is %d, at 0x%x\n",__func__,__LINE__, g, &g);
    exit(EXIT_SUCCESS);
}

