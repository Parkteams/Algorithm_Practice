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

	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf_s("%d", arr+i);
	}
	printf("Ȧ�� ���: ");
	PrintSingleNum(arr, 10);
	printf("\n¦�� ���: ");
	PrintTwinNum(arr, 10);


	return 0;
}