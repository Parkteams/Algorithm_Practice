#include<iostream>
using namespace std;

int N = 0, M = 0;
int arr[200][200] = { 0, };
int Sum = 0;

int main()
{
	cin >> N >> M;
	//����, �Ʒ���
	Sum += (N * M * 2);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> arr[i][j];
		}
	}

	//��
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= M-1; j++)
		{
			if (arr[i][j + 1] > arr[i][j])
			{
				Sum += (arr[i][j + 1] - arr[i][j]);
			}
		}
	}
	//��
	for (int i = 1; i <= N; i++)
	{
		for (int j = M+1; j >= 1; j--)
		{
			if (arr[i][j - 1] > arr[i][j])
			{
				Sum += (arr[i][j - 1] - arr[i][j]);
			}
		}
	}
	//��
	for (int j = 1; j <= M; j++)
	{
		for (int i = 0; i <= N - 1; i++)
		{
			if (arr[i + 1][j] > arr[i][j])
			{
				Sum += (arr[i + 1][j] - arr[i][j]);
			}
		}
	}
	//��
	for (int j = 1; j <= M; j++)
	{
		for (int i = N+1; i >= 1; i--)
		{
			if (arr[i - 1][j] > arr[i][j])
			{
				Sum += (arr[i - 1][j] - arr[i][j]);
			}
		}
	}
	cout << Sum;

	return 0;
}