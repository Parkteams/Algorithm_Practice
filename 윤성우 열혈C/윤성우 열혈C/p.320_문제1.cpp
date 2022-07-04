#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int SquareByValue(int num) {
	return num*num;
}

void SquareByReference(int* num) {
	*num = *num * *num;
}

int main()
{
	int num = 10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d ", num);

	return 0;
}