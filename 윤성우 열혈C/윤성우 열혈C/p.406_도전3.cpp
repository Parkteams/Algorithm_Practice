#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;


int main()
{
	printf("0�̻� 99������ ������ 5�� ����\n");
	
	for (int i = 0; i < 5; i++) {
		printf("%d ", rand() % 100);
	}


	return 0;
}