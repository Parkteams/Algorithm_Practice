#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;


int main()
{
	srand((int)time(NULL)); //씨드 설정

	printf("주사위 1의 결과: %d\n", rand()%6 + 1);
	printf("주사위 2의 결과: %d", rand()%6 + 1);
	
	return 0;
}