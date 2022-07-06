#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

void Rotation(int(*ptr)[4]);
void Print(int(*ptr)[4]);

int main()
{
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	Print(arr);
	cout << endl;

	for (int i = 1; i < 4; i++) {
		Rotation(arr);
		Print(arr);
		cout << endl;
	}

	return 0;
}

void Rotation(int(*ptr)[4])
{
	int temp[4][4] = { 0, };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			temp[j][3-i] = ptr[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			ptr[i][j] = temp[i][j];
		}
	}
}

void Print(int(*ptr)[4])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d ", ptr[i][j]);
		}
		cout << endl;
	}
}

