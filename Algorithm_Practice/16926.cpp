#include<iostream>
#include <algorithm>
using namespace std;

int arr[300][300] = { 0, };
int N = 0, M = 0, R = 0;

int main()
{
	cin >> N >> M >> R;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}

	int Cycle = 0;
	if (N / 2 < M / 2)
	{
		Cycle = N / 2;
	}
	else
		Cycle = M / 2;

	//R번 회전
	for (int t = 0; t < R; t++)
	{
		//싸이클 개수
		for (int k = 0; k < Cycle; k++)
		{
			int temp1 = 0; //받을 변수
			int temp2 = 0;
			//위
			for (int i = k; i < N - k; i++)
			{
				if (i == k)
				{
					temp1 = arr[k][k];
					for (int j = k; j < M - k - 1; j++)
					{
						arr[i][j] = arr[i][j + 1];
					}
				}
			}
			//왼쪽
			for (int j = k; j < M - k; j++)
			{
				if (j == k)
				{
					temp2 = arr[N - k - 1][k];
					for (int i = N - k - 2; i >= k + 1; i--)
					{
						arr[i + 1][j] = arr[i][j];
					}
					arr[k + 1][k] = temp1;
				}
			}
			//아래쪽
			for (int i = k; i < N - k; i++)
			{
				if (i == N - k - 1)
				{
					temp1 = arr[N - k - 1][M - k - 1];
					for (int j = M - k - 2; j > k; j--)
					{
						arr[i][j+1] = arr[i][j];
					}
					arr[N - k - 1][k+1] = temp2;
				}
			}
			//오른쪽
			for (int j = k; j < M - k; j++)
			{
				if (j == M - k - 1)
				{
					for (int i = k+1; i < N-k-1; i++)
					{
						arr[i][j] = arr[i + 1][j];
					}
					arr[N - k][M - k - 1] = temp1;
				}
			}
		}
	}

	return 0;
}