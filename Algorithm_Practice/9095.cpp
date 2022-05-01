#include<iostream>
using namespace std;

int T = 0, N=0;
int arr[11] = { 0 };

int main()
{
	cin >> T;

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= 10; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << arr[N] << endl;
	}


	return 0;
}