#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

#define MAX 300000000

int N = 0;

int main()
{
	cin >> N;
	int* arr_num = new int[N];
	int* arr_abs = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr_num[i];
	}

	sort(arr_num, arr_num + N);

	for (int i = 0; i < N; i++){
		int abs_sum = 0;
		for (int j = 0; j < N; j++) {
			abs_sum += (abs(arr_num[j] - arr_num[i]));
		}
		arr_abs[i] = abs_sum;
	}

	int min = MAX;
	int index = 0;
	for (int i = 0; i < N; i++) {

		if (min > arr_abs[i])
		{
			min = arr_abs[i];
			index = i;
		}
	}

	cout << arr_num[index];

	delete[] arr_num;
	delete[] arr_abs;
	return 0;
}