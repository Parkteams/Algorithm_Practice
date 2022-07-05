#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int arr[10] = { 0 };

	int odd = 0;
	int even = 0;
	for (int i = 0; i < 10; i++) {
		int num = 0;
		printf("ют╥б: ");
		scanf_s("%d", &num);
		if (num % 2 == 0) {
			arr[10 - 1 - even] = num;
			even++;
		}
		else {
			arr[odd] = num;
			odd++;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}