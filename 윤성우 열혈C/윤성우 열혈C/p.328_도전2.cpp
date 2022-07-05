#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	int index = 0;
	int arr[50] = {0};
	while (num!=0) {
		arr[index] = num % 2;
		num = num / 2;
		index++;
	}
	for (int i = index-1; i >= 0; i--) {
		printf("%d", arr[i]);
	}

	return 0;
}