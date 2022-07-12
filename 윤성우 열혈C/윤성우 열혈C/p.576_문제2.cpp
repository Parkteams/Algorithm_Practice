#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define PI 3.1415
#define AREA(r) ((r)*(r)*PI)

int main(void)
{
	double rad;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);
	printf("%g", AREA(rad));

	return 0;
}