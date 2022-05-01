#include<iostream>
#include<cmath>
using namespace std;

int N = 0;

int main()
{
	cin >> N;
	int num = 0;
	for (int i = 0; i < 9; i++)
	{
		if (N / pow(10, i) < 10)
		{
			num = i;
			break;
		}
	}
	//cout << num;
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += ((i + 1) * (pow(10, i + 1) - pow(10, i)));
	}
	int count = N - pow(10, num)+1;
	sum += count * (num + 1);

	cout << sum;

	return 0;
}