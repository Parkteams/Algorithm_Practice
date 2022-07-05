#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

void PrintSingleNum(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if ((arr[i] % 2) != 0) {
			printf("%d ", arr[i]);
		}
	}
}

void PrintTwinNum(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if ((arr[i] % 2) == 0) {
			printf("%d ", arr[i]);
		}
	}
}

int main()
{
	int arr[10] = { 0 };

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf_s("%d", arr+i);
	}
	printf("홀수 출력: ");
	PrintSingleNum(arr, 10);
	printf("\n짝수 출력: ");
	PrintTwinNum(arr, 10);


	return 0;
}