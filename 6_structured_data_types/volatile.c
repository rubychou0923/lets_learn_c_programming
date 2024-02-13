#include<stdio.h>

int complete=0;

/*
 * gcc -O3 volatile.c -o volatile; objdump -Sx volatile > volatile.objdump
 */
void test_func(int * REG_ADDR)
{
	int *ptr = (int *) REG_ADDR;

	while(*ptr==0)
		;
}

void test_func_volatile(int * REG_ADDR)
{
	volatile int *ptr = (int *) REG_ADDR;

	while(*ptr==0)
		;
}

int main(int argc, char ** argv)
{
	int value;
	test_func(&value);
	test_func_volatile(&value);
}