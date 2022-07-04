#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = arr + 5;
	
	int temp = 0;
	for (int i = 0; i < 3; i++) {
		swap(*ptr1, *ptr2);
		ptr1++;
		ptr2--;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}


	return 0;
}