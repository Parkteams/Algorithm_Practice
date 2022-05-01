#include<iostream>
using namespace std;

int arr[500][500] = { 0, };
int N = 0, M = 0;
int answer = 0;

int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}

	int max = 0;
	//테트리스 직선 1
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M-3; j++)
		{
			max = 0;
			max += (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i][j + 3]);
			if (max > answer) answer = max;
		}
	}
	//직선 2
	for (int i = 0; i < N-3; i++)
	{
		for (int j = 0; j < M; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i+1][j] + arr[i+2][j] + arr[i+3][j]);
		if (max > answer) answer = max;
		}
	}

	//네모
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i + 1][j] + arr[i + 1][j+1] + arr[i][j+1]);
		if (max > answer) answer = max;
		}
	}

	//3+1_1
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i+1][j] + arr[i + 2][j] + arr[i+2][j + 1]);
		if (max > answer) answer = max;
		}
	}

	//3+1_2
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j+1] + arr[i + 1][j + 1] + arr[i + 2][j + 1] + arr[i + 2][j]);
		if (max > answer) answer = max;
		}
	}

	//3+1_3
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i][j + 1]);
		if (max > answer) answer = max;
		}
	}

	//3+1_4
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 2][j + 1] + arr[i][j]);
		if (max > answer) answer = max;
		}
	}
	//3+1_5
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i+1][j]);
		if (max > answer) answer = max;
		}
	}
	//3+1_6
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 2]);
		if (max > answer) answer = max;
		}
	}
	//3+1_7
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j+2]);
		if (max > answer) answer = max;
		}
	}
	//3+1_8
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i][j+2] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2]);
		if (max > answer) answer = max;
		}
	}
	//2+2_1
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2]);
		if (max > answer) answer = max;
		}
	}
	//2+2_2
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j+1] + arr[i + 1][j+1] + arr[i + 1][j] + arr[i + 2][j]);
		if (max > answer) answer = max;
		}
	}
	//2+2_3
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i+1][j] + arr[i + 1][j + 1] + arr[i][j+1] + arr[i][j+2]);
		if (max > answer) answer = max;
		}
	}
	//2+2_4
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i][j + 1] + arr[i+1][j + 1] + arr[i+1][j + 2]);
		if (max > answer) answer = max;
		}
	}
	//1+3_1
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1]);
		if (max > answer) answer = max;
		}
	}
	//1+3_2
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
		max = 0;
			max += (arr[i+1][j] + arr[i+1][j + 1] + arr[i+1][j + 2] + arr[i][j + 1]);
		if (max > answer) answer = max;
		}
	}
	//1+3_3
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i+1][j + 1]);
		if (max > answer) answer = max;
		}
	}
	//1+3_4
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 1; j++)
		{
		max = 0;
			max += (arr[i][j+1] + arr[i + 1][j + 1] + arr[i + 2][j + 1] + arr[i + 1][j]);
		if (max > answer) answer = max;
		}
	}
	cout << answer;

	return 0;
}