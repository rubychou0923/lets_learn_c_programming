
void main(void)
{

    int ar[10];
    int *ip;
    int (*ar10i)[10];       /* pointer to array of 10 ints */

    ip = ar;                /* address of first element */

    printf("%x \n",ip);
    ip = &ar[0];            /* address of first element */
    printf("%x \n",ip);
    ar10i = &ar;            /* address of whole array */
    printf("%x \n",ar10i);

}
