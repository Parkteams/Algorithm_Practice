#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;


int main()
{
	srand((int)time(NULL)); //���� ����

	printf("�ֻ��� 1�� ���: %d\n", rand()%6 + 1);
	printf("�ֻ��� 2�� ���: %d", rand()%6 + 1);
	
	return 0;
}