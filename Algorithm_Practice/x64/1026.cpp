#include<iostream>
#include<algorithm>
using namespace std;

int N = 0;
int S = 0;

int main()
{
	cin >> N;
	int* arr_A = new int[N];
	int* arr_B = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr_A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> arr_B[i];
	}

	sort(arr_A, arr_A + N);
	sort(arr_B, arr_B + N, greater<>());

	for (int i = 0; i < N; i++) {
		S += arr_A[i] * arr_B[i];
	}

	cout << S;

	delete[] arr_A;
	delete[] arr_B;
	return 0;
}