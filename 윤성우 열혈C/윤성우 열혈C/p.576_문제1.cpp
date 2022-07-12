#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define ADD(x,y,z) ((x)+(y)+(z))
#define MUL(x,y,z) ((x)*(y)*(z))

int main(void)
{
	printf("3+4+5 = %d\n", ADD(3, 4, 5));
	printf("3*4*5 = %d\n", MUL(3, 4, 5));
	
	return 0;
}