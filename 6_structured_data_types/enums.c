#include<stdio.h>

enum e_tag{
      a, b, c, d=20, e, f, g=20, h
}var;

enum _state{
	STATE_IDLE=0,
	STATE_INIT,
	STATE_CONFIG,
	STATE_RUNNING,
}STATE;


void main(void)
{
	printf("a:%d, b:%d, c:%d, d:%d, e:%d, f:%d, g:%d,h:%d\n",
		a,b,c,d,e,f,g);


	printf("%d %d %d %d \n",
		STATE_IDLE, STATE_INIT, STATE_CONFIG, STATE_RUNNING);
}